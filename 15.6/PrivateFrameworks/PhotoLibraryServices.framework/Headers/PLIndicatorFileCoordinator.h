// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLINDICATORFILECOORDINATOR_H
#define PLINDICATORFILECOORDINATOR_H

@class PLPhotoLibraryPathManager;

#import <Foundation/Foundation.h>


@interface PLIndicatorFileCoordinator : NSObject {
    PLPhotoLibraryPathManager *_pathManager;
    int _activityIndicatorFid;
    os_unfair_lock_s _activityIndicatorLock;
}




+(BOOL)systemLibraryAvailableIndicatorState;
+(void)setSystemLibraryAvailableIndicatorState:(BOOL)arg0 ;
-(BOOL)_canSetPauseMarkerWithUnpauseTime:(id)arg0 onPauseData:(id)arg1 ;
-(BOOL)clearPauseMarkerForReason:(short)arg0 ;
-(BOOL)hasItemToDownload;
-(BOOL)isDisableICloudPhotos;
-(BOOL)isDupeAnalysisNeeded;
-(BOOL)isEnableICloudPhotos;
-(BOOL)isForceSoftResetSync;
-(BOOL)isICloudPhotosPaused;
-(BOOL)isRebuildingPersons;
-(BOOL)isStreamsLibraryUpdatingExpired;
-(BOOL)isUserPause;
-(BOOL)isWipeCPLOnOpen;
-(BOOL)needsRecoveryAfterCrashOptionallyRemoveAllIndicatorFiles:(BOOL)arg0 ;
-(id)_pauseDataOnPath:(id)arg0 ;
-(id)_readPListWithFilename:(id)arg0 ;
-(id)_rebuildingPersonsIndicatorFilePath;
-(id)dupeAnalysisNeededFilePath;
-(id)initWithPathManager:(id)arg0 ;
-(id)unpauseTime;
-(short)currentPauseReason;
-(void)_createPauseMarkerForReason:(short)arg0 withUnpauseTime:(id)arg1 withPath:(id)arg2 ;
-(void)_setActivityIndicatorWithPath:(id)arg0 flag:(BOOL)arg1 crashRecovery:(id)arg2 ;
-(void)_writeDict:(id)arg0 withFilename:(id)arg1 ;
-(void)clearWipeCPLOnOpen;
-(void)createPauseMarkerWithUnpauseTime:(id)arg0 reason:(short)arg1 ;
-(void)deleteCPLDownloadFinishedMarkerFilePath;
-(void)forceSoftResetSync;
-(void)getDownloadPhotoCount:(*NSUInteger)arg0 downloadVideoCount:(*NSUInteger)arg1 ;
-(void)logCloudServiceEnableEvent:(BOOL)arg0 serviceName:(id)arg1 reason:(id)arg2 ;
-(void)setDownloadCountsForImages:(NSUInteger)arg0 videos:(NSUInteger)arg1 ;
-(void)setDupeAnalysisNeeded:(BOOL)arg0 ;
-(void)setImageWriter:(id)arg0 isBusy:(BOOL)arg1 crashRecoverySupport:(id)arg2 ;
-(void)setIsRebuildingPersons:(BOOL)arg0 ;
-(void)setStreamsLibraryUpdatingExpired:(BOOL)arg0 ;
-(void)setTakingPhotoIsBusy:(BOOL)arg0 ;
-(void)setWipeCPLOnOpen;
-(void)updateICloudPhotosMarkerForEnable:(BOOL)arg0 ;
-(void)writeDisableICloudPhotosMarker;
-(void)writeEnableICloudPhotosMarker;


@end


#endif