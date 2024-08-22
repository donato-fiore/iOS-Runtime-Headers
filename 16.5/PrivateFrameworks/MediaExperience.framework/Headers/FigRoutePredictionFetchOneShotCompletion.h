// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGROUTEPREDICTIONFETCHONESHOTCOMPLETION_H
#define FIGROUTEPREDICTIONFETCHONESHOTCOMPLETION_H


#import <Foundation/Foundation.h>


@interface FigRoutePredictionFetchOneShotCompletion : NSObject {
    id *_completionHandler;
}




-(id)init;
-(id)initWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)invokeWithRoutePredictions:(id)arg0 predictionContext:(id)arg1 ;


@end


#endif