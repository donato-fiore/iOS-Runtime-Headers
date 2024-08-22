// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSHFLIPBOOKSPECIFICATION_H
#define BLSHFLIPBOOKSPECIFICATION_H


#import <Foundation/Foundation.h>


@interface BLSHFlipbookSpecification : NSObject

@property (readonly, nonatomic) CGFloat coaelscingEpsilon; // ivar: _coaelscingEpsilon
@property (readonly, nonatomic) NSInteger frameCapacity; // ivar: _frameCapacity
@property (readonly, nonatomic) CGFloat framesPerSecond; // ivar: _framesPerSecond
@property (readonly, nonatomic) CGFloat maximumRenderInterval; // ivar: _maximumRenderInterval
@property (readonly, nonatomic) CGFloat minimumGapDuration; // ivar: _minimumGapDuration
@property (readonly, nonatomic) CGFloat minimumPrepareInterval; // ivar: _minimumPrepareInterval
@property (readonly, nonatomic) NSUInteger softMemoryLimit; // ivar: _softMemoryLimit


-(id)description;
-(id)initWithFrameCapacity:(NSUInteger)arg0 framesPerSecond:(CGFloat)arg1 minimumGapDuration:(CGFloat)arg2 coaelscingEpsilon:(CGFloat)arg3 minimumPrepareInterval:(CGFloat)arg4 maximumRenderInterval:(CGFloat)arg5 ;
-(id)initWithSoftMemoryLimit:(NSUInteger)arg0 frameCapacity:(NSInteger)arg1 framesPerSecond:(CGFloat)arg2 minimumGapDuration:(CGFloat)arg3 coaelscingEpsilon:(CGFloat)arg4 minimumPrepareInterval:(CGFloat)arg5 maximumRenderInterval:(CGFloat)arg6 ;


@end


#endif