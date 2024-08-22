// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWMATTINGINFERENCESTORAGE_H
#define BWMATTINGINFERENCESTORAGE_H

@class NSMutableDictionary;


#import "BWInferenceProviderStorage.h"

@interface BWMattingInferenceStorage : BWInferenceProviderStorage {
    NSMutableDictionary *_metadataDictionaryByRequirement;
}




+(void)initialize;
-(id)newMetadataDictionarySatisfyingRequirement:(id)arg0 ;
-(struct opaqueCMSampleBuffer *)newSampleBufferSatisfyingRequirement:(id)arg0 withPropagationSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)dealloc;
-(void)setDictionary:(id)arg0 forMetadataRequirement:(id)arg1 ;


@end


#endif