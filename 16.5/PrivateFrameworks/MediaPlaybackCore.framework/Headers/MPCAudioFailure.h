// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCAUDIOFAILURE_H
#define MPCAUDIOFAILURE_H


#import <Foundation/Foundation.h>


@interface MPCAudioFailure : NSObject

@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) CGFloat startTime; // ivar: _startTime
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(id)multiSamplesFailure:(CGFloat)arg0 duration:(CGFloat)arg1 ;
+(id)singleSampleFailure:(CGFloat)arg0 duration:(CGFloat)arg1 ;
-(id)initWithType:(NSInteger)arg0 startTime:(CGFloat)arg1 duration:(CGFloat)arg2 ;


@end


#endif