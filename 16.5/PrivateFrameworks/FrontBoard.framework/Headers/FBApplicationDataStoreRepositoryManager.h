// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBAPPLICATIONDATASTOREREPOSITORYMANAGER_H
#define FBAPPLICATIONDATASTOREREPOSITORYMANAGER_H

@class NSURL, NSString, LSEnumerator;
@protocol FBApplicationDataStoreRepositoryDelegate, OS_dispatch_queue, FBApplicationDataStoreRepository;

#import <Foundation/Foundation.h>


@interface FBApplicationDataStoreRepositoryManager : NSObject <FBApplicationDataStoreRepositoryDelegate>

 {
    NSURL *_dataStoreURL;
    NSObject<OS_dispatch_queue> *_deferredWorkQueue;
}


@property (retain, nonatomic) NSObject<FBApplicationDataStoreRepository> *dataStore; // ivar: _dataStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) LSEnumerator *lsEnumerator; // ivar: _lsEnumerator
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)migrateFromApplicationStore:(id)arg0 toApplicationStore:(id)arg1 error:(*id)arg2 ;
-(BOOL)migrateFromPlistStoreAtURL:(id)arg0 toSqliteStoreAtURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)removeStoreAtURL:(id)arg0 error:(*id)arg1 ;
-(id)_initWithDataStore:(id)arg0 lsEnumerator:(id)arg1 ;
-(id)_safeObjectForKey:(id)arg0 forApplication:(id)arg1 ofType:(Class)arg2 ;
-(id)init;
-(id)urlByAppendingString:(id)arg0 toURL:(id)arg1 ;
-(void)_handleApplicationInstalled:(id)arg0 ;
-(void)_performAfterDeferredWork:(id)arg0 ;
-(void)clearExpiredUninstalledApplicationsFromStoreIfNecessary;
-(void)dealloc;
-(void)migrateApplicationStorePathIfNecessary;
-(void)objectChangedForKeys:(id)arg0 application:(id)arg1 ;
-(void)storeInvalidatedForIdentifier:(id)arg0 ;


@end


#endif