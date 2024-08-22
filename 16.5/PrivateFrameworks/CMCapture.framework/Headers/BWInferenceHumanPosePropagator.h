// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWINFERENCEHUMANPOSEPROPAGATOR_H
#define BWINFERENCEHUMANPOSEPROPAGATOR_H

@class NSMutableData, NSString;
@protocol BWInferencePropagatable, BWEspressoInferenceTensorMemoryProvider;

#import <Foundation/Foundation.h>

#import "BWInferenceMetadataRequirement.h"

@interface BWInferenceHumanPosePropagator : NSObject <BWInferencePropagatable, BWEspressoInferenceTensorMemoryProvider>

 {
    BWInferenceMetadataRequirement *_outputRequirement;
    NSMutableData *_heatmapData;
    *__IOSurface _tensorBackingSurface;
}


@property (readonly, nonatomic) BOOL allowsAsyncPropagation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithOutputRequirement:(id)arg0 ;
-(struct __IOSurface *)backingMemoryForMetadataRequirement:(id)arg0 bindingName:(id)arg1 surfaceProperties:(id)arg2 ;
-(void)dealloc;
-(void)propagateInferenceResultsToInferenceDictionary:(id)arg0 usingStorage:(id)arg1 inputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 propagationSampleBuffer:(struct opaqueCMSampleBuffer *)arg3 ;


@end


#endif