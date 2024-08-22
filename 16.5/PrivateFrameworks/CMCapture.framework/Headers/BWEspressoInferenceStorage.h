// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWESPRESSOINFERENCESTORAGE_H
#define BWESPRESSOINFERENCESTORAGE_H

@class NSDictionary, NSMapTable, NSMutableSet;


#import "BWInferenceProviderStorage.h"

@interface BWEspressoInferenceStorage : BWInferenceProviderStorage {
    NSDictionary *_bindingNameByRequirement;
    NSMapTable *_tensorByRequirement;
    NSMutableSet *_requirementsUsingTensors;
    NSMutableSet *_requirementsUsingPixelBuffers;
}




+(void)initialize;
-(id)bindingNameForRequirement:(id)arg0 ;
-(id)initWithBindingNameByRequirement:(id)arg0 requirementsNeedingPixelBuffers:(id)arg1 requirementsNeedingPixelBufferPools:(id)arg2 requirementsNeedingTensors:(id)arg3 ;
-(id)newMetadataDictionarySatisfyingRequirement:(id)arg0 ;
-(struct ? *)tensorForRequirement:(id)arg0 ;
-(struct opaqueCMSampleBuffer *)newSampleBufferSatisfyingRequirement:(id)arg0 withPropagationSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)addPixelBufferInUseRequirement:(id)arg0 ;
-(void)addTensorInUseRequirement:(id)arg0 ;
-(void)clear;
-(void)dealloc;


@end


#endif