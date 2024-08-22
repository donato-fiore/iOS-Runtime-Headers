// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLLIBRARYSERVICESCPLREADINESS_H
#define PLLIBRARYSERVICESCPLREADINESS_H

@class NSMutableArray, NSString;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "PLLibraryServicesManager.h"

@interface PLLibraryServicesCPLReadiness : NSObject {
    PLLibraryServicesManager *_libraryServicesManager;
    NSObject<OS_dispatch_source> *_photoLibraryCPLReadinessTimer;
    NSMutableArray *_photoLibraryCPLReadinessBlocks;
    os_unfair_lock_s _stateLock;
    NSString *_statusMessage;
    BOOL _isReadyForCPL;
}




-(BOOL)_checkForCPLReadinessAndCallBlocks;
-(BOOL)_isAssetsdReadyForCPLManagerWithStatus:(*id)arg0 ;
-(BOOL)_isReadyForCloudPhotoLibraryWithStatus:(*id)arg0 ;
-(BOOL)isReadyForCloudPhotoLibraryWithStatus:(*id)arg0 ;
-(id)initWithLibraryServicesManager:(id)arg0 ;
-(id)libraryServicesManager;
-(void)_callOutstandingCPLReadinessBlocks;
-(void)_checkIsReadyForCloudPhotoLibrary;
-(void)_setupCPLReadinessTimerAndEventHandlerIfNeeded;
-(void)_stopWaitingForCPLReadiness;
-(void)_updateIsReady:(BOOL)arg0 statusMessage:(id)arg1 ;
-(void)cancelCPLReadinessBlocksAndStopWaiting;
-(void)invalidate;
-(void)pauseCloudPhotos:(BOOL)arg0 reason:(short)arg1 ;
-(void)performOnceLibraryIsReadyForCPLManager:(id)arg0 ;
-(void)processCloudPhotosLibraryStateChange:(BOOL)arg0 ;


@end


#endif