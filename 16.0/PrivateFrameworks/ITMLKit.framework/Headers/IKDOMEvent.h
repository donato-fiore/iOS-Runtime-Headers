// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKDOMEVENT_H
#define IKDOMEVENT_H

@class NSDate, NSString;
@protocol IKJSDOMEvent;


#import "IKJSObject.h"
#import "IKDOMNode.h"

@interface IKDOMEvent : IKJSObject <IKJSDOMEvent>



@property (readonly, nonatomic) BOOL bubbles; // ivar: _bubbles
@property (readonly, nonatomic) BOOL cancelable; // ivar: _cancelable
@property (retain, nonatomic) IKDOMNode *currentTarget; // ivar: _currentTarget
@property (nonatomic) BOOL defaultPrevented; // ivar: _defaultPrevented
@property (nonatomic) NSInteger dispatchState; // ivar: _dispatchState
@property (nonatomic) NSInteger eventPhase; // ivar: _eventPhase
@property (nonatomic, getter=isInUse) BOOL inUse; // ivar: _inUse
@property (retain, nonatomic) IKDOMNode *target; // ivar: _target
@property (readonly, nonatomic) NSDate *timeStamp; // ivar: _timeStamp
@property (readonly, retain, nonatomic) NSString *type; // ivar: _type
@property (readonly, retain, nonatomic) NSString *xmlAttribute; // ivar: _xmlAttribute


-(BOOL)isImmediatePropagationStopped;
-(BOOL)isPropagationStopped;
-(id)initWithAppContext:(id)arg0 type:(id)arg1 xmlAttribute:(id)arg2 canBubble:(BOOL)arg3 isCancelable:(BOOL)arg4 ;
-(id)initWithType:(id)arg0 eventInit:(id)arg1 ;
-(void)preventDefault;
-(void)stopImmediatePropagation;
-(void)stopPropagation;
-(void)updateDispatchStateWithCurrentTarget:(id)arg0 phase:(NSInteger)arg1 ;


@end


#endif