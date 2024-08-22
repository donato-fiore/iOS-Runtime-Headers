// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIFOCUSENGINEDELAYEDPRESSACTION_H
#define _UIFOCUSENGINEDELAYEDPRESSACTION_H


#import <Foundation/Foundation.h>

#import "_UIFocusEventRecognizer.h"

@interface _UIFocusEngineDelayedPressAction : NSObject

@property (readonly, nonatomic) NSInteger pressType; // ivar: _pressType
@property (readonly, weak, nonatomic) _UIFocusEventRecognizer *sender; // ivar: _sender
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp


+(void)sendDelayedPressWithType:(NSInteger)arg0 timestamp:(CGFloat)arg1 sender:(id)arg2 ;
-(id)_initWithPressType:(NSInteger)arg0 timestamp:(CGFloat)arg1 sender:(id)arg2 ;
-(void)_sendPressEvent;


@end


#endif