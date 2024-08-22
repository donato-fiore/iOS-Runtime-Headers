// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIKEYBOARDINTERACTIONPROTOCOLEVENTADDTOUCHEVENT_H
#define TIKEYBOARDINTERACTIONPROTOCOLEVENTADDTOUCHEVENT_H

@class NSString, TIKeyboardTouchEvent;
@protocol TIKeyboardInteractionProtocolEvent, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TIKeyboardInteractionProtocolEventAddTouchEvent : NSObject <TIKeyboardInteractionProtocolEvent, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) TIKeyboardTouchEvent *touchEvent; // ivar: _touchEvent


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTouchEvent:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)sendTo:(id)arg0 ;


@end


#endif