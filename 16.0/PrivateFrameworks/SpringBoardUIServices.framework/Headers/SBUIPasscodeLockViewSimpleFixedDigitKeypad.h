// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBUIPASSCODELOCKVIEWSIMPLEFIXEDDIGITKEYPAD_H
#define SBUIPASSCODELOCKVIEWSIMPLEFIXEDDIGITKEYPAD_H



#import "SBUIPasscodeLockViewWithKeypad.h"

@interface SBUIPasscodeLockViewSimpleFixedDigitKeypad : SBUIPasscodeLockViewWithKeypad

@property (readonly, nonatomic) NSUInteger numberOfDigits; // ivar: _numberOfDigits


-(CGFloat)_entryFieldBottomYDistanceFromNumberPadTopButton;
-(id)_newEntryField;
-(id)initWithLightStyle:(BOOL)arg0 ;
-(id)initWithLightStyle:(BOOL)arg0 numberOfDigits:(NSUInteger)arg1 ;


@end


#endif