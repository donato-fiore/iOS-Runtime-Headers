// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXTIMEINTERVAL_H
#define PXTIMEINTERVAL_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PXTimeInterval : NSObject

@property (nonatomic) CGFloat beginTime; // ivar: _beginTime
@property (readonly, nonatomic) CGFloat duration;
@property (nonatomic) CGFloat endTime; // ivar: _endTime
@property (nonatomic) NSInteger state; // ivar: _state
@property (retain, nonatomic) NSMutableDictionary *tokenToTransitionHandler; // ivar: _tokenToTransitionHandler


-(id)addStateTransitionHandler:(id)arg0 ;
-(id)init;
-(void)_notifyStateTransitionHandlersOfTransitionFromState:(NSInteger)arg0 ;
-(void)beginInterval;
-(void)beginIntervalWithTimeOverride:(CGFloat)arg0 ;
-(void)endInterval;
-(void)endIntervalWithTimeOverride:(CGFloat)arg0 ;
-(void)removeStateTransitionHandler:(id)arg0 ;
-(void)reset;


@end


#endif