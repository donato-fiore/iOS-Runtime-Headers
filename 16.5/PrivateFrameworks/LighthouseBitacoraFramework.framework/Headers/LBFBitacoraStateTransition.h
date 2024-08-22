// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LBFBITACORASTATETRANSITION_H
#define LBFBITACORASTATETRANSITION_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface LBFBitacoraStateTransition : NSObject

@property (readonly, nonatomic) NSInteger previousState; // ivar: _previousState
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly, nonatomic) CGFloat timedelta; // ivar: _timedelta
@property (readonly, nonatomic) NSDate *timestamp; // ivar: _timestamp


-(id)initWithBitcoraState:(NSInteger)arg0 previousState:(NSInteger)arg1 timestamp:(id)arg2 timedelta:(CGFloat)arg3 ;


@end


#endif