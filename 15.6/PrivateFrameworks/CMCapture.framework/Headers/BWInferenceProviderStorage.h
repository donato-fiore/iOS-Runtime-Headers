// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWINFERENCEPROVIDERSTORAGE_H
#define BWINFERENCEPROVIDERSTORAGE_H

@class NSMutableDictionary, NSString, NSDictionary, NSArray;
@protocol BWInferenceStorage;

#import <Foundation/Foundation.h>

#import "BWInferenceProviderStorage.h"

@interface BWInferenceProviderStorage : NSObject <BWInferenceStorage>

 {
    NSMutableDictionary *_pixelBufferByRequirement;
    NSMutableDictionary *_pixelBufferPoolByRequirement;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *inferenceResults; // ivar: _inferenceResults
@property (readonly, nonatomic) BWInferenceProviderStorage *inferenceStorage;
@property (readonly, copy, nonatomic) NSArray *requirementsNeedingPixelBufferPools; // ivar: _requirementsNeedingPixelBufferPools
@property (readonly, copy, nonatomic) NSArray *requirementsNeedingPixelBuffers; // ivar: _requirementsNeedingPixelBuffers
@property (readonly) Class superclass;


+(void)initialize;
-(id)initWithRequirementsNeedingPixelBuffers:(id)arg0 requirementsNeedingPixelBufferPools:(id)arg1 ;
-(id)newMetadataDictionarySatisfyingRequirement:(id)arg0 ;
-(id)pixelBufferPoolForRequirement:(id)arg0 ;
-(struct __CVBuffer *)pixelBufferForRequirement:(id)arg0 ;
-(struct opaqueCMSampleBuffer *)newSampleBufferSatisfyingCloneRequirement:(id)arg0 ;
-(struct opaqueCMSampleBuffer *)newSampleBufferSatisfyingRequirement:(id)arg0 withPropagationSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)clear;
-(void)dealloc;
-(void)setPixelBuffer:(struct __CVBuffer *)arg0 forRequirement:(id)arg1 ;
-(void)setPixelBufferPool:(id)arg0 forRequirement:(id)arg1 ;


@end


#endif