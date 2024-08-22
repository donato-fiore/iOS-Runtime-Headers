// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DSPGCOREMLINFO_H
#define DSPGCOREMLINFO_H

@class NSSet;
@protocol SNMLModel, MLFeatureProvider;

#import <Foundation/Foundation.h>

#import "DSPGMLInputProvider.h"

@interface DSPGCoreMLInfo : NSObject {
    id<SNMLModel> *_model;
    NSSet *_feedbackConnections;
    DSPGMLInputProvider *_inputProvider;
    id<MLFeatureProvider> *_outputProvider;
}






@end


#endif