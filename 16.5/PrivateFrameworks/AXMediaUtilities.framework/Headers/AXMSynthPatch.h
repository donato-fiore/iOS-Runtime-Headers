// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXMSYNTHPATCH_H
#define AXMSYNTHPATCH_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface AXMSynthPatch : NSObject {
    CGFloat _baseFrequency;
    CGFloat _baseAmplitude;
    *CGFloat _harmonics;
    *CGFloat _amplitudes;
    NSInteger _n;
}


@property (copy, nonatomic) NSArray *harmonicInfos; // ivar: _harmonicInfos


+(id)defaultPatch;
+(id)sawPatch;
+(id)sinePatch;
+(id)squarePatch;
+(id)trapeziumPatch;
+(id)trianglePatch;
+(id)violinPatch;
-(CGFloat)waveformValueForPhase:(CGFloat)arg0 frequency:(CGFloat)arg1 amplitude:(CGFloat)arg2 ;
-(id)initWithHarmonics:(id)arg0 ;
-(void)dealloc;


@end


#endif