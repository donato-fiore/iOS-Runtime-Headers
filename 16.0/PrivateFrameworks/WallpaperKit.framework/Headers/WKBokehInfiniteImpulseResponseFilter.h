// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKBOKEHINFINITEIMPULSERESPONSEFILTER_H
#define WKBOKEHINFINITEIMPULSERESPONSEFILTER_H


#import <Foundation/Foundation.h>


@interface WKBokehInfiniteImpulseResponseFilter : NSObject {
    NSUInteger _count;
    *CGFloat _ffC;
    *CGFloat _fbC;
    *CGFloat _inputHistory;
    *CGFloat _outputHistory;
    CGFloat _zeroGradientThreshold;
}




-(id)initWithCount:(NSUInteger)arg0 feedforwardCoefficients:(*CGFloat)arg1 feedbackCoefficients:(*CGFloat)arg2 ;
-(void)dealloc;


@end


#endif