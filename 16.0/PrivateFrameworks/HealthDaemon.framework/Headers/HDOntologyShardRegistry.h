// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDONTOLOGYSHARDREGISTRY_H
#define HDONTOLOGYSHARDREGISTRY_H

@class NSURL, HDAssertionManager, NSMutableDictionary, NSString;
@protocol HDAssertionObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDDaemon.h"
#import "HDOntologyUpdateCoordinator.h"

@interface HDOntologyShardRegistry : NSObject <HDAssertionObserver>

 {
    NSURL *_stagingDirectoryURL;
    NSObject<OS_dispatch_queue> *_cachedFileHandlesAssertionQueue;
    HDAssertionManager *_cachedFileHandlesAssertionManager;
    NSMutableDictionary *_cachedFileHandles;
}


@property (readonly, nonatomic) HDDaemon *daemon;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) HDOntologyUpdateCoordinator *updateCoordinator; // ivar: _updateCoordinator


+(BOOL)insertEntry:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(id)importedMercuryZipTSVEntriesWithTransaction:(id)arg0 error:(*id)arg1 ;
+(id)nextAvailableMercuryZipTSVSlotWithTransaction:(id)arg0 error:(*id)arg1 ;
-(BOOL)copyToStagingDirectoryFileWithLocalURL:(id)arg0 entry:(id)arg1 error:(*id)arg2 ;
-(BOOL)deleteStagedFilesNotMatchingEntries:(id)arg0 error:(*id)arg1 ;
-(BOOL)deleteStagedShardFileForEntry:(id)arg0 error:(*id)arg1 ;
-(BOOL)entryWithIdentifier:(id)arg0 schemaType:(id)arg1 schemaVersion:(NSInteger)arg2 entryOut:(*id)arg3 transaction:(id)arg4 error:(*id)arg5 ;
-(BOOL)enumerateEntriesWithPredicate:(id)arg0 orderingTerms:(id)arg1 error:(*id)arg2 enumerationHandler:(id)arg3 ;
-(BOOL)insertEntries:(id)arg0 error:(*id)arg1 ;
-(BOOL)insertEntry:(id)arg0 error:(*id)arg1 ;
-(BOOL)moveStagedShardFileForEntry:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)stageShardFileWithLocalURL:(id)arg0 entry:(id)arg1 error:(*id)arg2 ;
-(BOOL)stagedShardFileEntryForEntry:(id)arg0 entryOut:(*id)arg1 error:(*id)arg2 ;
-(BOOL)unitTesting_stageFileWithLocalURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)unzipStagedShardFileForEntry:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
-(NSInteger)purgeSpaceForStagedShards;
-(NSInteger)purgeableSpaceForStagedShards;
-(id)entriesWithPredicate:(id)arg0 orderingTerms:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithOntologyUpdateCoordinator:(id)arg0 ;
-(id)openShardFileForEntry:(id)arg0 error:(*id)arg1 ;
-(id)stagedShardFileEntriesWithError:(*id)arg0 ;
-(id)takeFileHandleAssertionForOwnerIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)unitTesting_cachedFileHandles;
-(id)unitTesting_stagedShardFileFullPathForEntry:(id)arg0 ;
-(id)unitTesting_stagedShardFileNamesWithError:(*id)arg0 ;
-(void)assertionManager:(id)arg0 assertionInvalidated:(id)arg1 ;
-(void)dealloc;


@end


#endif