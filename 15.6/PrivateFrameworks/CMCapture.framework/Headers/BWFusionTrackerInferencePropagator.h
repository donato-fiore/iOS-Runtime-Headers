// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWFUSIONTRACKERINFERENCEPROPAGATOR_H
#define BWFUSIONTRACKERINFERENCEPROPAGATOR_H

@class NSMutableDictionary, NSString;
@protocol BWInferencePropagatable;

#import <Foundation/Foundation.h>

#import "BWInferenceVideoRequirement.h"

@interface BWFusionTrackerInferencePropagator : NSObject <BWInferencePropagatable>

 {
    BWInferenceVideoRequirement *_inputVideoRequirement;
    NSMutableDictionary *_outputTensorRequirements;
    NSInteger _operation;
}


@property (readonly, nonatomic) BOOL allowsAsyncPropagation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithInputVideoRequirement:(id)arg0 outputTensorRequirements:(id)arg1 operation:(NSInteger)arg2 ;
-(void)dealloc;
-(void)propagateInferenceResultsToInferenceDictionary:(id)arg0 usingStorage:(id)arg1 inputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 propagationSampleBuffer:(struct opaqueCMSampleBuffer *)arg3 ;


@end


#endif