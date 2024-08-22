// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMAPPLICATION_H
#define CAMAPPLICATION_H

@class UIApplication;


#import "CAMPerformanceTestHarness.h"

@interface CAMApplication : UIApplication

@property (retain, nonatomic) CAMPerformanceTestHarness *currentTestHarness; // ivar: _currentTestHarness


-(BOOL)runNewPPTUICaptureTestWithTestName:(id)arg0 options:(id)arg1 ;
-(BOOL)runPresentTestWithName:(id)arg0 options:(id)arg1 ;
-(BOOL)runSwitchCamerasTestWithName:(id)arg0 options:(id)arg1 ;
-(BOOL)runSwitchModesTestWithName:(id)arg0 options:(id)arg1 ;
-(BOOL)runSwitchToPortraitFrontWithTestWithName:(id)arg0 options:(id)arg1 ;
-(BOOL)runTakePictureFrontPortraitTest:(id)arg0 options:(id)arg1 prototype:(id)arg2 ;
-(BOOL)runTakePicturePortraitTest:(id)arg0 options:(id)arg1 prototype:(id)arg2 ;
-(BOOL)runTakePictureTestWithFrontCamera:(id)arg0 options:(id)arg1 prototype:(id)arg2 forCaptureMode:(NSInteger)arg3 ;
-(BOOL)runTakePictureTestWithTestName:(id)arg0 options:(id)arg1 prototype:(id)arg2 forCaptureMode:(NSInteger)arg3 ;
-(BOOL)runTakeVideoTestWithTestName:(id)arg0 options:(id)arg1 userPreferencesOverrides:(id)arg2 ;
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