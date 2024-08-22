// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBRECORDINGINDICATORMANAGER_H
#define SBRECORDINGINDICATORMANAGER_H

@class UIWindow, NSDate, NSTimer, NSString;
@protocol SBAppStatusBarAssertionManagerObserver, SBSensorActivityObserver, SBUIActiveOrientationObserver, PTSettingsKeyObserver;

#import <Foundation/Foundation.h>

#import "SBRecordingIndicatorViewController.h"
#import "SBSensorActivityDataProvider.h"

@interface SBRecordingIndicatorManager : NSObject <SBAppStatusBarAssertionManagerObserver, SBSensorActivityObserver, SBUIActiveOrientationObserver, PTSettingsKeyObserver>

 {
    UIWindow *_recordingIndicatorWindow;
    UIWindow *_recordingIndicatorWindowUIKitStatusBarPortal;
    SBRecordingIndicatorViewController *_recordingIndicatorViewController;
    SBRecordingIndicatorViewController *_recordingIndicatorViewControllerUIKitStatusBarPortal;
    BOOL _frontmostStatusBarOrIndicatorPartIsHidden;
    BOOL _indicatorIsHiddenForControlCenter;
    BOOL _visibilityIsForcedByPrototypeSettings;
    NSDate *_indicatorDisplayTime;
    NSTimer *_minimumTimeOnScreenTimer;
    SBSensorActivityDataProvider *_dataProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isIndicatorVisible; // ivar: _isIndicatorVisible
@property (readonly) Class superclass;


-(BOOL)_allowStatusBarDelayForCameraApp:(id)arg0 ;
-(NSUInteger)indicatorShapeForSensorType:(NSInteger)arg0 ;
-(id)indicatorColorForSensorType:(NSInteger)arg0 ;
-(id)initWithSensorActivityDataProvider:(id)arg0 ;
-(void)_updateIndicatorStyleForSensorActivityAttributions:(id)arg0 ;
-(void)_updateIndicatorViewForSensorType:(NSInteger)arg0 ;
-(void)activeInterfaceOrientationDidChangeToOrientation:(NSInteger)arg0 willAnimateWithDuration:(CGFloat)arg1 fromOrientation:(NSInteger)arg2 ;
-(void)activeInterfaceOrientationWillChangeToOrientation:(NSInteger)arg0 ;
-(void)activityDidChangeForSensorActivityDataProvider:(id)arg0 ;
-(void)controlCenterDidDismiss:(id)arg0 ;
-(void)controlCenterWillPresent:(id)arg0 ;
-(void)dataProviderDidUpdate:(id)arg0 ;
-(void)differentiateWithoutColorDidChange:(id)arg0 ;
-(void)setIndicatorVisible:(BOOL)arg0 ;
-(void)setIndicatorVisible:(BOOL)arg0 allowStatusBarDelayForCameraApp:(BOOL)arg1 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)statusBarAssertionManager:(id)arg0 addStatusBarSettingsAssertion:(id)arg1 ;
-(void)statusBarAssertionManager:(id)arg0 removeStatusBarSettingsAssertion:(id)arg1 ;
-(void)updateRecordingIndicatorForStatusBarChanges;


@end


#endif