// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSHSUPPRESSIONEVENT_H
#define BLSHSUPPRESSIONEVENT_H


#import <Foundation/Foundation.h>


@interface BLSHSuppressionEvent : NSObject

@property (readonly, nonatomic) NSUInteger machContinuousTimestamp; // ivar: _machContinuousTimestamp
@property (readonly, nonatomic) NSUInteger reason; // ivar: _reason
@property (readonly, nonatomic, getter=wantsSuppression) BOOL suppression;
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(id)description;
-(id)initWithCoreMotionEvent:(id)arg0 timestamp:(NSUInteger)arg1 ;
-(id)initWithType:(NSUInteger)arg0 reason:(NSUInteger)arg1 timestamp:(NSUInteger)arg2 ;


@end


#endif