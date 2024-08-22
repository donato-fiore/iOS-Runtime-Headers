// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBVOICECOMMANDBUTTON_H
#define SBVOICECOMMANDBUTTON_H

@protocol SBHIDButtonStateDelegate;

#import <Foundation/Foundation.h>

#import "SBHIDButtonStateArbiter.h"
#import "SBSiriHardwareButtonInteraction.h"

@interface SBVoiceCommandButton : NSObject <SBHIDButtonStateDelegate>



@property (retain, nonatomic) SBHIDButtonStateArbiter *buttonArbiter; // ivar: _buttonArbiter
@property (nonatomic) BOOL isLongPressRecognized; // ivar: _isLongPressRecognized
@property (retain, nonatomic) SBSiriHardwareButtonInteraction *siriHardwareButtonInteraction; // ivar: _siriHardwareButtonInteraction


-(id)init;
-(void)handleButtonEvent:(struct __IOHIDEvent *)arg0 ;
-(void)performActionsForButtonDown:(id)arg0 ;
-(void)performActionsForButtonLongPress:(id)arg0 ;
-(void)performActionsForButtonUp:(id)arg0 ;


@end


#endif