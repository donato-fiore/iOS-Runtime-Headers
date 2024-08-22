// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IKDOMCUSTOMEVENT_H
#define IKDOMCUSTOMEVENT_H

@class NSDate, NSString;
@protocol IKJSDOMCustomEvent;


#import "IKDOMEvent.h"
#import "IKDOMNode.h"
#import "IKJSObject.h"

@interface IKDOMCustomEvent : IKDOMEvent <IKJSDOMCustomEvent>



@property (readonly, nonatomic) BOOL bubbles;
@property (readonly, nonatomic) BOOL cancelable;
@property (readonly, retain, nonatomic) IKDOMNode *currentTarget;
@property (readonly, nonatomic) BOOL defaultPrevented;
@property (retain, nonatomic) IKJSObject *detail; // ivar: _detail
@property (readonly, nonatomic) NSInteger eventPhase;
@property (readonly, retain, nonatomic) IKDOMNode *target;
@property (readonly, nonatomic) NSDate *timeStamp;
@property (readonly, retain, nonatomic) NSString *type;


-(id)initWithAppContext:(id)arg0 type:(id)arg1 xmlAttribute:(id)arg2 canBubble:(BOOL)arg3 isCancelable:(BOOL)arg4 detail:(id)arg5 ;
-(id)initWithType:(id)arg0 eventInit:(id)arg1 ;


@end


#endif