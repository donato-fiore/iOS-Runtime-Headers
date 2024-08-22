// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLPINFERENCERESULT_H
#define MLPINFERENCERESULT_H


#import <Foundation/Foundation.h>


@interface MLPInferenceResult : NSObject {
    map<unsigned int, std::map<unsigned int, unsigned int>, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, std::map<unsigned int, unsigned int>>>> confusionMatrix;
    float logLikelihood;
    float totalLoss;
}






@end


#endif