// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKINPUTPOINTPREDICTIONFILTER_H
#define PKINPUTPOINTPREDICTIONFILTER_H



#import "PKInputPointBaseFilter.h"
#import "PKInputPointPredictor.h"

@interface PKInputPointPredictionFilter : PKInputPointBaseFilter {
    PKInputPointPredictor *_predictor;
    ? _fullPredictionTimeIntervalPoint;
    ? _halfPredictionTimeIntervalPoint;
    BOOL _useHalfPredictionTimeInterval;
    CGFloat _predictionTimeInterval;
}




-(void)addInputPoint:(struct ? )arg0 ;
-(void)resetFilter;


@end


#endif