// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMWORKOUTCLASSIFIER_H
#define CMWORKOUTCLASSIFIER_H


#import <Foundation/Foundation.h>

#import "CMWorkoutClassifierCNN.h"

@interface CMWorkoutClassifier : NSObject {
    CMWorkoutClassifierCNN *_predictor;
}




-(id)init;
-(id)predictionFromX__0:(id)arg0 error:(*id)arg1 ;


@end


#endif