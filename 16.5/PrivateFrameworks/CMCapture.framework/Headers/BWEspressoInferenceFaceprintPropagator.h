// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWESPRESSOINFERENCEFACEPRINTPROPAGATOR_H
#define BWESPRESSOINFERENCEFACEPRINTPROPAGATOR_H

@class NSString;
@protocol BWInferencePropagatable;

#import <Foundation/Foundation.h>

#import "BWInferenceMetadataRequirement.h"

@interface BWEspressoInferenceFaceprintPropagator : NSObject <BWInferencePropagatable>

 {
    BWInferenceMetadataRequirement *_faceprintRequirement;
    BWInferenceMetadataRequirement *_confidenceRequirement;
    NSUInteger _faceprintSizeBytes;
    NSUInteger _maxFaces;
    NSUInteger _faceIndex;
}


@property (readonly, nonatomic) BOOL allowsAsyncPropagation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithFaceprintRequirement:(id)arg0 faceprintSizeBytes:(NSUInteger)arg1 confidenceRequirement:(id)arg2 maxFaces:(NSUInteger)arg3 faceIndex:(NSUInteger)arg4 ;
-(void)dealloc;
-(void)propagateInferenceResultsToInferenceDictionary:(id)arg0 usingStorage:(id)arg1 inputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 propagationSampleBuffer:(struct opaqueCMSampleBuffer *)arg3 ;


@end


#endif