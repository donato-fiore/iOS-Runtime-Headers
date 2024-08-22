// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIGNPOSTFRAMELATENCYINTERVAL_H
#define SIGNPOSTFRAMELATENCYINTERVAL_H

@class NSSet;
@protocol SignpostCARenderServerFrameMetadata;


#import "SignpostAnimationSubInterval.h"

@interface SignpostFrameLatencyInterval : SignpostAnimationSubInterval <SignpostCARenderServerFrameMetadata>



@property (retain, nonatomic) NSSet *contributingPids; // ivar: _contributingPids
@property (readonly, nonatomic) unsigned int frameSeed; // ivar: _frameSeed
@property (readonly, nonatomic) NSUInteger lateFrameCount; // ivar: _lateFrameCount
@property (readonly, nonatomic) unsigned int swapId; // ivar: _swapId
@property (readonly, nonatomic) NSUInteger totalFrameCount; // ivar: _totalFrameCount


-(id)initWithFrameLatencyInterval:(id)arg0 isLong:(BOOL)arg1 ;
-(id)initWithStartMCT:(NSUInteger)arg0 endMCT:(NSUInteger)arg1 timebaseRatio:(CGFloat)arg2 swapID:(unsigned int)arg3 frameSeed:(unsigned int)arg4 totalFrameCount:(NSUInteger)arg5 lateFrameCount:(NSUInteger)arg6 ;


@end


#endif