// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWVIDEOPROCESSINGINFERENCESTORAGE_H
#define BWVIDEOPROCESSINGINFERENCESTORAGE_H

@class NSMutableDictionary;


#import "BWInferenceProviderStorage.h"

@interface BWVideoProcessingInferenceStorage : BWInferenceProviderStorage {
    NSMutableDictionary *_metadataDictionaryForRequirement;
}




-(id)initWithRequirementsNeedingPixelBuffers:(id)arg0 requirementsNeedingPixelBufferPools:(id)arg1 ;
-(id)newMetadataDictionarySatisfyingRequirement:(id)arg0 ;
-(void)dealloc;
-(void)setDictionary:(id)arg0 forMetadataRequirement:(id)arg1 ;


@end


#endif