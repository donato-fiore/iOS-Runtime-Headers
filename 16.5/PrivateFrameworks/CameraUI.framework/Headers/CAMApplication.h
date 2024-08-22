// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMAPPLICATION_H
#define CAMAPPLICATION_H

@class UIApplication;


#import "CAMPerformanceTestPlan.h"

@interface CAMApplication : UIApplication

@property (retain, nonatomic) CAMPerformanceTestPlan *currentTestPlan; // ivar: _currentTestPlan


-(BOOL)runLibrarySelectionWithTestPlan:(id)arg0 options:(id)arg1 ;
-(BOOL)runNewPPTUICaptureTestWithTestPlan:(id)arg0 options:(id)arg1 ;
-(BOOL)runPresentCameraRollWithTestPlan:(id)arg0 options:(id)arg1 ;
-(BOOL)runSwitchCamerasTestWithTestPlan:(id)arg0 options:(id)arg1 ;
-(BOOL)runSwitchModesWithTestPlan:(id)arg0 options:(id)arg1 userPreferencesOverrides:(id)arg2 ;
-(BOOL)runSwitchToPortraitFrontWithTestPlan:(id)arg0 options:(id)arg1 ;
-(BOOL)runTakePictureFrontCameraWithTestPlan:(id)arg0 options:(id)arg1 prototype:(id)arg2 forCaptureMode:(NSInteger)arg3 ;
-(BOOL)runTakePictureFrontPortraitWithTestPlan:(id)arg0 options:(id)arg1 prototype:(id)arg2 ;
-(BOOL)runTakePicturePortraitWithTestPlan:(id)arg0 options:(id)arg1 prototype:(id)arg2 ;
-(BOOL)runTakePictureTestWithTestPlan:(id)arg0 options:(id)arg1 prototype:(id)arg2 forCaptureMode:(NSInteger)arg3 ;
-(BOOL)runTakeVideoTestWithTestPlan:(id)arg0 options:(id)arg1 userPreferencesOverrides:(id)arg2 ;
-(BOOL)runTest:(id)arg0 options:(id)arg1 ;
-(NSUInteger)supportedInterfaceOrientationsForWindow:(id)arg0 ;
-(id)_extendLaunchTest;
-(void)_configureExtendedLaunchTestIfNeeded;
-(void)_registerPreviewStartBlock:(id)arg0 ;
-(void)didChangeToMode:(NSInteger)arg0 device:(NSInteger)arg1 ;
-(void)didCloseViewfinderForReason:(NSInteger)arg0 ;
-(void)didOpenViewfinderForReason:(NSInteger)arg0 ;
-(void)prepareForDefaultImageSnapshotForScreen:(id)arg0 ;
-(void)willCloseViewfinderForReason:(NSInteger)arg0 ;
-(void)willOpenViewfinderForReason:(NSInteger)arg0 ;


@end


#endif