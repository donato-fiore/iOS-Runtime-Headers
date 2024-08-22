// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWVISIONINFERENCESTORAGE_H
#define BWVISIONINFERENCESTORAGE_H

@class NSMutableDictionary;


#import "BWInferenceProviderStorage.h"

@interface BWVisionInferenceStorage : BWInferenceProviderStorage {
    NSMutableDictionary *_requestsByRequirement;
}




+(void)initialize;
-(id)initWithRequirementsNeedingPixelBuffers:(id)arg0 requirementsNeedingPixelBufferPools:(id)arg1 ;
-(id)newMetadataDictionarySatisfyingRequirement:(id)arg0 ;
-(id)requestForRequirement:(id)arg0 ;
-(struct opaqueCMSampleBuffer *)newSampleBufferSatisfyingRequirement:(id)arg0 withPropagationSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)dealloc;
-(void)removeRequest:(id)arg0 ;
-(void)setRequest:(id)arg0 forRequirement:(id)arg1 ;


@end


#endif