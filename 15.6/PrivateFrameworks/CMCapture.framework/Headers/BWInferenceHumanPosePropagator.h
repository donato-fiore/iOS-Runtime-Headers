// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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


-(float)calculateIOU:(struct CGRect )arg0 with:(struct CGRect )arg1 ;
-(id)initWithOutputRequirement:(id)arg0 ;
-(id)newMatchesOfHumanPoses:(id)arg0 toTracks:(id)arg1 ;
-(int)keypointsFromModelOutput:(*NSUInteger)arg0 width:(NSUInteger)arg1 height:(id)arg2 persons;
-(struct __IOSurface *)backingMemoryForMetadataRequirement:(id)arg0 bindingName:(id)arg1 surfaceProperties:(id)arg2 ;
-(void)dealloc;
-(void)propagateInferenceResultsToInferenceDictionary:(id)arg0 usingStorage:(id)arg1 inputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 propagationSampleBuffer:(struct opaqueCMSampleBuffer *)arg3 ;


@end


#endif