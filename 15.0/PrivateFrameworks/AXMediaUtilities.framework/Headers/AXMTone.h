// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXMTONE_H
#define AXMTONE_H


#import <Foundation/Foundation.h>

#import "AXMADSREnvelope.h"
#import "AXMSynthPatch.h"

@interface AXMTone : NSObject

@property (readonly, nonatomic) CGFloat aWeighting; // ivar: _aWeighting
@property (readonly, nonatomic) AXMADSREnvelope *envelope; // ivar: _envelope
@property (readonly, nonatomic) CGFloat frequency; // ivar: _frequency
@property (nonatomic) CGFloat gain; // ivar: _gain
@property (retain, nonatomic) AXMSynthPatch *patch; // ivar: _patch
@property (nonatomic) NSUInteger sampleRate; // ivar: _sampleRate


-(CGFloat)_rawValueForTonePhase:(CGFloat)arg0 ;
-(id)init;
-(id)initWithSampleRate:(CGFloat)arg0 envelope:(id)arg1 ;
-(void)renderInBuffer:(*void)arg0 atFrame:(NSUInteger)arg1 ;


@end


#endif