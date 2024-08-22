// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDQUANTITYSAMPLEOVERLAPPROCESSOR_H
#define HDQUANTITYSAMPLEOVERLAPPROCESSOR_H


#import <Foundation/Foundation.h>


@interface HDQuantitySampleOverlapProcessor : NSObject {
    NSUInteger _overlapFunction;
    CGFloat _anchorTime;
    NSInteger _workingSetCount;
    ? _workingSet;
}




-(NSInteger)addSample:(struct ? )arg0 outputSamples:(struct ? )arg1 error:(*id)arg2 ;
-(NSInteger)finishWithRemainingSamples:(struct ? )arg0 error:(*id)arg1 ;
-(id)initWithOverlapFunction:(NSUInteger)arg0 ;
-(void)resetAnchorTime:(CGFloat)arg0 ;


@end


#endif