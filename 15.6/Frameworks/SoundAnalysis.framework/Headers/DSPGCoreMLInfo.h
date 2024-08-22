// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DSPGCOREMLINFO_H
#define DSPGCOREMLINFO_H

@class NSArray;
@protocol SNMLModel, MLFeatureProvider;

#import <Foundation/Foundation.h>

#import "DSPGMLInputProvider.h"

@interface DSPGCoreMLInfo : NSObject

@property (retain, nonatomic) NSArray *feedbackConnections; // ivar: _feedbackConnections
@property (retain, nonatomic) DSPGMLInputProvider *inputProvider; // ivar: _inputProvider
@property (retain, nonatomic) NSObject<SNMLModel> *model; // ivar: _model
@property (retain, nonatomic) NSObject<MLFeatureProvider> *outputProvider; // ivar: _outputProvider




@end


#endif