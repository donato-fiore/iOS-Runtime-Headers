// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIKEYBOARDINTERACTIONPROTOCOLEVENTADDKEYINPUT_H
#define TIKEYBOARDINTERACTIONPROTOCOLEVENTADDKEYINPUT_H

@class NSString, TIKeyboardInput;
@protocol TIKeyboardInteractionProtocolEvent;


#import "TIKeyboardInteractionProtocolBase.h"

@interface TIKeyboardInteractionProtocolEventAddKeyInput : TIKeyboardInteractionProtocolBase <TIKeyboardInteractionProtocolEvent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TIKeyboardInput *keyboardInput; // ivar: _keyboardInput
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeyInput:(id)arg0 keyboardState:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)sendTo:(id)arg0 ;


@end


#endif