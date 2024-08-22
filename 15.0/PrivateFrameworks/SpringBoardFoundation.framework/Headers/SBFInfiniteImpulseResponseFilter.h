// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFINFINITEIMPULSERESPONSEFILTER_H
#define SBFINFINITEIMPULSERESPONSEFILTER_H


#import <Foundation/Foundation.h>


@interface SBFInfiniteImpulseResponseFilter : NSObject {
    NSUInteger _count;
    *CGFloat _ffC;
    *CGFloat _fbC;
    *CGFloat _inputHistory;
    *CGFloat _outputHistory;
}


@property (nonatomic) CGFloat zeroGradientThreshold; // ivar: _zeroGradientThreshold


+(id)lowpassFilterWithCoefficient:(CGFloat)arg0 ;
+(id)lowpassInertiaFilterWithCoefficient:(CGFloat)arg0 ;
-(BOOL)zeroGradient;
-(CGFloat)filterWithInput:(CGFloat)arg0 ;
-(CGFloat)output;
-(CGFloat)outputGradient;
-(id)initWithCount:(NSUInteger)arg0 feedforwardCoefficients:(*CGFloat)arg1 feedbackCoefficients:(*CGFloat)arg2 ;
-(void)dealloc;
-(void)resetToValue:(CGFloat)arg0 ;
-(void)setLowpassInertiaFilterCoefficient:(CGFloat)arg0 ;


@end


#endif