// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFSETTINGSALERTSTEPPER_H
#define _SFSETTINGSALERTSTEPPER_H

@class SFSettingsAlertControl, NSString;
@protocol _SFSettingsAlertStepperConfiguration;


#import "_SFSettingsAlertButton.h"

@interface _SFSettingsAlertStepper : SFSettingsAlertControl <_SFSettingsAlertStepperConfiguration>

 {
    _SFSettingsAlertButton *_incrementButton;
    _SFSettingsAlertButton *_decrementButton;
    _SFSettingsAlertButton *_resetButton;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger value; // ivar: _value


-(id)_button:(NSInteger)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initUsingResetButton:(BOOL)arg0 usingTopSeparator:(BOOL)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_decrementTapped:(id)arg0 ;
-(void)_incrementTapped:(id)arg0 ;
-(void)_resetTapped:(id)arg0 ;
-(void)setEnabled:(BOOL)arg0 forButton:(NSInteger)arg1 ;
-(void)setImage:(id)arg0 forButton:(NSInteger)arg1 ;
-(void)setText:(id)arg0 forButton:(NSInteger)arg1 ;


@end


#endif