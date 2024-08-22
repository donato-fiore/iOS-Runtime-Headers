// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBACCESSIBILITYHARDWAREBUTTONINTERACTION_H
#define SBACCESSIBILITYHARDWAREBUTTONINTERACTION_H

@class NSString;
@protocol SBHardwareButtonInteraction;


#import "SBHardwareButtonGestureParametersProviderBase.h"

@interface SBAccessibilityHardwareButtonInteraction : SBHardwareButtonGestureParametersProviderBase <SBHardwareButtonInteraction>



@property (readonly, nonatomic) NSUInteger buttonType; // ivar: _buttonType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)hardwareButtonInteractionForHomeButton;
+(id)hardwareButtonInteractionForLockButton;
-(BOOL)_presentMigrationAlertIfNeeded;
-(BOOL)_supportsTripleClick;
-(BOOL)consumeTriplePressUp;
-(CGFloat)_downToDownInterval;
-(id)hardwareButtonGestureParameters;
-(id)initWithButtonType:(NSUInteger)arg0 ;
-(struct __CFString *)_speedChangedNotificationName;
-(void)_accessibilityPrefsDidChange;
-(void)_registerAsNotificationObserver;
-(void)_unregisterAsNotificationObserver;
-(void)dealloc;


@end


#endif