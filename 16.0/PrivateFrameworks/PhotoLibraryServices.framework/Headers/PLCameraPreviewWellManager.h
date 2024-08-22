// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLCAMERAPREVIEWWELLMANAGER_H
#define PLCAMERAPREVIEWWELLMANAGER_H

@class NSMutableArray, NSString, NSDate;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PLLibraryServicesManager.h"

@interface PLCameraPreviewWellManager : NSObject {
    NSMutableArray *_workQueue;
    os_unfair_lock_s _queueLock;
    BOOL _active;
    os_unfair_lock_s _activeLock;
    NSObject<OS_dispatch_queue> *_serialQueue;
    PLLibraryServicesManager *_lsm;
    BOOL _currentPreviewWellMetadataIsLoaded;
    NSString *_currentPreviewWellAssetUUID;
    NSDate *_currentPreviewWellAddedDate;
    CGFloat _currentPreviewWellSortToken;
}




-(id)initWithLibraryServicesManager:(id)arg0 ;
-(void)_clearPreviewWellAndNotify;
-(void)_fetchPreviewWellAssetWithAssetHandler:(id)arg0 ;
-(void)_inqFetchPreviewWellMetadataIfNeededCurrentPreviewIsStale:(*BOOL)arg0 ;
-(void)_inqProcessAssetChanges;
-(void)_processChange:(id)arg0 ;
-(void)_saveImageAndNotify:(struct CGImage *)arg0 assetUUID:(id)arg1 ;
-(void)considerAssetForPreviewWellChanges:(id)arg0 thumbnailWasGenerated:(BOOL)arg1 ;
-(void)refreshPreviewWellImage;


@end


#endif