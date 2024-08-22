// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSGESTUREDROPEVENT_H
#define CSGESTUREDROPEVENT_H

@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface CSGestureDropEvent : NSObject

@property (readonly, nonatomic) CGFloat droppedPrediction; // ivar: _droppedPrediction
@property (readonly, nonatomic) CGFloat droppingPrediction; // ivar: _droppingPrediction
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcObject;


-(id)initWithDroppingPrediction:(CGFloat)arg0 droppedPrediction:(CGFloat)arg1 timestamp:(CGFloat)arg2 ;
-(id)initWithXPCObject:(id)arg0 ;
-(id)toString;


@end


#endif