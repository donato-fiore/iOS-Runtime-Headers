// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBBRIGHTNESSCONTROL_H
#define SBBRIGHTNESSCONTROL_H

@class NSString;
@protocol SBBrightnessRouteCoordinating, SBElasticHUDViewControllerDelegate, SBElasticBrightnessDataSource, SBBrightnessRouteControlling;

#import <Foundation/Foundation.h>

#import "SBHUDController.h"
#import "SBKeyboardBrightnessController.h"
#import "SBDisplayBrightnessController.h"

@interface SBBrightnessControl : NSObject <SBBrightnessRouteCoordinating, SBElasticHUDViewControllerDelegate, SBElasticBrightnessDataSource>

 {
    SBHUDController *_HUDController;
    SBKeyboardBrightnessController *_keyboardBrightnessController;
    SBDisplayBrightnessController *_displayBrightnessController;
    id<SBBrightnessRouteControlling> *_activeController;
    BOOL _controlCenterIsPresented;
    BOOL _brightnessIncrementKeyIsDown;
    BOOL _brightnessDecrementKeyIsDown;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)handlesKeyCommandsForRoute:(NSInteger)arg0 ;
-(BOOL)_HUDIsDisplayable;
-(BOOL)elasticValueViewController:(id)arg0 updateCurrentValue:(float)arg1 ;
-(NSInteger)elasticBrightnessViewControllerBrightnessRouteType:(id)arg0 ;
-(float)elasticValueViewControllerCurrentValue:(id)arg0 ;
-(id)_controllerForRoute:(NSInteger)arg0 ;
-(id)acquireBrightnessHUDHiddenAssertionForReason:(id)arg0 ;
-(id)activeDataSource;
-(id)existingBrightnessHUDViewController;
-(id)initWithHUDController:(id)arg0 ;
-(id)presentedBrightnessHUDViewController;
-(void)_controlCenterWillDismiss:(id)arg0 ;
-(void)_controlCenterWillPresent:(id)arg0 ;
-(void)_handleUpdateBrightnessIncrementKeyIsDown:(BOOL)arg0 decrementKeyIsDown:(BOOL)arg1 ;
-(void)_presentOrUpdateBrightnessHUDAsNecessaryForBrightnessLevel:(float)arg0 ;
-(void)_resetIdleTimerForUserInteractionIfNecessary;
-(void)brightnessController:(id)arg0 performCoordinatedBrightnessChangeForIncrementKeyDown:(BOOL)arg1 decrementKeyDown:(BOOL)arg2 ;
-(void)cancelBrightnessKeyPressEvents;
-(void)elasticBrightnessViewControllerValueUpdatesDidEnd:(id)arg0 ;
-(void)elasticBrightnessViewControllerValueUpdatesWillBegin:(id)arg0 ;
-(void)elasticHUDViewControllerRequestsDismissal:(id)arg0 ;
-(void)handleBrightnessKeyPressEvent:(struct __IOHIDEvent *)arg0 forRoute:(NSInteger)arg1 ;
-(void)setActiveController:(id)arg0 ;
-(void)setBrightnessLevel:(float)arg0 forRoute:(NSInteger)arg1 ;


@end


#endif