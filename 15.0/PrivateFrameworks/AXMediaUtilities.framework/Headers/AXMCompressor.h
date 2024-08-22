// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXMCOMPRESSOR_H
#define AXMCOMPRESSOR_H



#import "AXMAudioEffect.h"

@interface AXMCompressor : AXMAudioEffect

@property (nonatomic) CGFloat attackMS; // ivar: _attackMS
@property (nonatomic) CGFloat compressionRatio; // ivar: _compressionRatio
@property (nonatomic) CGFloat ema; // ivar: _ema
@property (nonatomic) NSUInteger emaSamples; // ivar: _emaSamples
@property (nonatomic) CGFloat engagement; // ivar: _engagement
@property (nonatomic) CGFloat gain; // ivar: _gain
@property (nonatomic) CGFloat gainReduction; // ivar: _gainReduction
@property (nonatomic) CGFloat ratio; // ivar: _ratio
@property (nonatomic) CGFloat releaseMS; // ivar: _releaseMS
@property (nonatomic) CGFloat sampleRate; // ivar: _sampleRate
@property (nonatomic) CGFloat threshold; // ivar: _threshold


+(id)compressor;
+(id)limiter;
-(id)initWithAttack:(CGFloat)arg0 release:(CGFloat)arg1 compressionRatio:(CGFloat)arg2 threshold:(CGFloat)arg3 sampleRate:(CGFloat)arg4 ;
-(void)processSamples:(NSUInteger)arg0 ;


@end


#endif