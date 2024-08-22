// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMMOTIONCONTROLLER_H
#define CAMMOTIONCONTROLLER_H

@class BKSAccelerometer, CMMotionManager, NSString;
@protocol BKSAccelerometerDelegate, CAMLevelViewModelChangeObserver;

#import <Foundation/Foundation.h>

#import "CAMLevelViewModel.h"
#import "CAMPreviewAlignmentModel.h"

@interface CAMMotionController : NSObject <BKSAccelerometerDelegate, CAMLevelViewModelChangeObserver>



@property (retain, nonatomic, setter=_setAccelerometer:) BKSAccelerometer *_accelerometer; // ivar: __accelerometer
@property (readonly, nonatomic) CMMotionManager *_attitudeAlignmentMotionManager; // ivar: __attitudeAlignmentMotionManager
@property (nonatomic, setter=_setCachedCaptureOrientation:) NSInteger _cachedCaptureOrientation; // ivar: __cachedCaptureOrientation
@property (nonatomic, setter=_setDidNotifyCaptureOrientationWasInvalid:) BOOL _didNotifyCaptureOrientationWasInvalid; // ivar: __didNotifyCaptureOrientationWasInvalid
@property (readonly, nonatomic) NSInteger _fallbackCaptureOrientation; // ivar: __fallbackCaptureOrientation
@property (nonatomic, setter=_setNumberOfDominantPhysicalButtonObservers:) NSInteger _numberOfDominantPhysicalButtonObservers; // ivar: __numberOfDominantPhysicalButtonObservers
@property (readonly, nonatomic) CMMotionManager *_physicalButtonMotionManager; // ivar: __physicalButtonMotionManager
@property (retain, nonatomic, setter=_setActiveLevelViewModel:) CAMLevelViewModel *activeLevelViewModel; // ivar: _activeLevelViewModel
@property (retain, nonatomic, setter=_setActivePreviewAlignmentModel:) CAMPreviewAlignmentModel *activePreviewAlignmentModel; // ivar: _activePreviewAlignmentModel
@property (readonly, nonatomic) NSInteger captureOrientation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, setter=_setDominantPhysicalButton:) NSInteger dominantPhysicalButton; // ivar: _dominantPhysicalButton
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger panoramaCaptureOrientation;
@property (readonly) Class superclass;


-(id)_debugStringForDeviceOrientation:(NSInteger)arg0 ;
-(id)_debugStringForInterfaceOrientation:(NSInteger)arg0 ;
-(id)init;
-(void)_handleApplicationDidEnterBackground:(id)arg0 ;
-(void)_handleApplicationWillEnterForeground:(id)arg0 ;
-(void)_handleLevelMotionUpdate:(id)arg0 error:(id)arg1 ;
-(void)_updateAttitudeAlignmentMotionManager;
-(void)_updateInitialOrientation;
-(void)_updatePhysicalButtonObservation;
-(void)accelerometer:(id)arg0 didAccelerateWithTimeStamp:(CGFloat)arg1 x:(float)arg2 y:(float)arg3 z:(float)arg4 eventType:(int)arg5 ;
-(void)accelerometer:(id)arg0 didChangeDeviceOrientation:(NSInteger)arg1 ;
-(void)beginGeneratingDominantPhysicalButtonNotifications;
-(void)beginUpdatingLevelViewModel:(id)arg0 ;
-(void)beginUpdatingPreviewAlignmentModel:(id)arg0 ;
-(void)dealloc;
-(void)debugValidateCaptureOrientationForMode:(NSInteger)arg0 ;
-(void)endGeneratingDominantPhysicalButtonNotifications;
-(void)endUpdatingActiveLevelViewModel;
-(void)endUpdatingPreviewAlignmentModel;
-(void)observable:(id)arg0 didPublishChange:(NSUInteger)arg1 withContext:(*void)arg2 ;


@end


#endif