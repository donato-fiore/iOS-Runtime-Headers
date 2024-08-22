// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLCACHEDELETESUPPORT_H
#define PLCACHEDELETESUPPORT_H

@class NSDate;

#import <Foundation/Foundation.h>

#import "PLLibraryServicesManager.h"

@interface PLCacheDeleteSupport : NSObject {
    fsid _fsid;
    PLLibraryServicesManager *_lsm;
}


@property (copy, nonatomic) NSDate *exitDeleteTime; // ivar: _exitDeleteTime


+(BOOL)clearPurgeableFlagForResource:(id)arg0 ;
+(BOOL)clearPurgeableFlagsForAllResourcesInPhotoLibraryURL:(id)arg0 ;
+(BOOL)isPurgeableFile:(id)arg0 outIsPhotoType:(*BOOL)arg1 outUrgencyLevel:(*NSInteger)arg2 error:(*id)arg3 ;
+(BOOL)markPurgeableForFileAtURL:(id)arg0 withUrgency:(NSInteger)arg1 outInode:(*NSUInteger)arg2 ;
+(BOOL)verifyAndFixLocalAvailabilityForMissingResourcesUsingFileIDInManagedObjectContext:(id)arg0 countPresent:(*NSInteger)arg1 countMissing:(*NSInteger)arg2 countUnableToVerify:(*NSInteger)arg3 error:(*id)arg4 ;
+(id)_clearablePurgeableResourceDirectoriesForPathManager:(id)arg0 ;
+(id)_purgeableResourceDirectoriesForPathManager:(id)arg0 ;
+(id)_unclearablePurgeableResourceDirectoriesForPathManager:(id)arg0 ;
+(id)purgeableStateDescriptionForFile:(id)arg0 ;
+(struct fsid )fsidForURL:(id)arg0 ;
+(void)registerNullHandler;
-(BOOL)_isFilePurgedForFileID:(id)arg0 purgedPath:(id)arg1 ;
-(BOOL)clearPurgeableFlagsForAllResources;
-(BOOL)markResourceAsPurgeable:(id)arg0 withUrgency:(NSInteger)arg1 ;
-(id)_newShortLivedPhotoLibrary;
-(id)initWithLibraryServicesManager:(id)arg0 cplStatus:(id)arg1 ;
-(void)_installPurgeObserverAndProcessAlreadyRemovedFiles;
-(void)_markAsNotLocallyAvailableForResourcesWithFileIDsToPath:(id)arg0 inLibrary:(id)arg1 ;
-(void)_processRemovedFiles:(id)arg0 inMountPoint:(id)arg1 ;
-(void)_rescanResourcesFromFileSystem;
-(void)dealloc;
-(void)invalidate;


@end


#endif