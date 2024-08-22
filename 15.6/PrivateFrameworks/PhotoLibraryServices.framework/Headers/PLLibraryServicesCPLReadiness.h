// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLLIBRARYSERVICESCPLREADINESS_H
#define PLLIBRARYSERVICESCPLREADINESS_H

@class NSMutableArray;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "PLLibraryServicesManager.h"

@interface PLLibraryServicesCPLReadiness : NSObject {
    PLLibraryServicesManager *_libraryServicesManager;
    NSObject<OS_dispatch_source> *_photoLibraryCPLReadinessTimer;
    NSMutableArray *_photoLibraryCPLReadinessBlocks;
}




-(BOOL)_checkForCPLReadinessAndCallBlocks;
-(BOOL)_isAssetsdReadyForCPLManagerWithStatus:(*id)arg0 ;
-(BOOL)isReadyForCloudPhotoLibraryWithStatus:(*id)arg0 ;
-(id)initWithLibraryServicesManager:(id)arg0 ;
-(id)libraryServicesManager;
-(void)_callOutstandingCPLReadinessBlocks;
-(void)_setupCPLReadinessTimerAndEventHandlerIfNeeded;
-(void)_stopWaitingForCPLReadiness;
-(void)cancelCPLReadinessBlocksAndStopWaiting;
-(void)invalidate;
-(void)pauseCloudPhotos:(BOOL)arg0 reason:(short)arg1 ;
-(void)performOnceLibraryIsReadyForCPLManager:(id)arg0 ;
-(void)processCloudPhotosLibraryStateChange:(BOOL)arg0 ;


@end


#endif