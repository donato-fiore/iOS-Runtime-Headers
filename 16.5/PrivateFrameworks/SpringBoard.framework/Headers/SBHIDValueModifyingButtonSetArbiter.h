// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHIDVALUEMODIFYINGBUTTONSETARBITER_H
#define SBHIDVALUEMODIFYINGBUTTONSETARBITER_H

@class NSDictionary, BSAbsoluteMachTimer;
@protocol SBHIDButtonStateDelegate, SBHIDValueModifyingButtonSetArbiterDelegate;

#import <Foundation/Foundation.h>

#import "SBHIDButtonStateArbiter.h"

@interface SBHIDValueModifyingButtonSetArbiter : NSObject <SBHIDButtonStateDelegate>

 {
    NSDictionary *_usageToButtonDictionary;
    NSDictionary *_buttonToUsageDictionary;
    BSAbsoluteMachTimer *_timer;
    SBHIDButtonStateArbiter *_currentDownButton;
}


@property (weak, nonatomic) NSObject<SBHIDValueModifyingButtonSetArbiterDelegate> *delegate; // ivar: _delegate
@property (nonatomic) CGFloat initialRepeatDelay; // ivar: _initialRepeatDelay
@property (nonatomic) CGFloat subsequentRepeatDelay; // ivar: _subsequentRepeatDelay


-(BOOL)processKeyboardEvent:(struct __IOHIDEvent *)arg0 ;
-(id)initWithHIDKeyPressEventUsages:(id)arg0 initialRepeatDelay:(CGFloat)arg1 subsequentRepeatDelay:(CGFloat)arg2 ;
-(void)_fireRepeatingActionTimer;
-(void)_invalidateRepeatingActionTimer;
-(void)_performActionForButton:(id)arg0 ;
-(void)_startRepeatingActionTimer;
-(void)dealloc;
-(void)performActionsForButtonDown:(id)arg0 ;
-(void)performActionsForButtonLongPress:(id)arg0 ;
-(void)performActionsForButtonUp:(id)arg0 ;
-(void)reset;


@end


#endif