// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWINFERENCESIMPLESTORAGE_H
#define BWINFERENCESIMPLESTORAGE_H

@class NSMutableDictionary, NSString, NSDictionary, NSArray;
@protocol BWInferenceStorage, BWInferenceTextureStorage;

#import <Foundation/Foundation.h>

#import "BWInferenceProviderStorage.h"

@interface BWInferenceSimpleStorage : NSObject <BWInferenceStorage>

 {
    NSMutableDictionary *_pixelBufferByRequirement;
    NSMutableDictionary *_pixelBufferPoolByRequirement;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *inferenceResults;
@property (readonly, nonatomic) BWInferenceProviderStorage *inferenceStorage;
@property (readonly, copy, nonatomic) NSArray *requirementsNeedingPixelBufferPools; // ivar: _requirementsNeedingPixelBufferPools
@property (readonly, copy, nonatomic) NSArray *requirementsNeedingPixelBuffers;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<BWInferenceTextureStorage> *textureStorage;


-(id)initWithRequirementsNeedingPools:(id)arg0 ;
-(id)pixelBufferPoolForRequirement:(id)arg0 ;
-(struct __CVBuffer *)pixelBufferForRequirement:(id)arg0 ;
-(void)clear;
-(void)dealloc;
-(void)setPixelBuffer:(struct __CVBuffer *)arg0 forRequirement:(id)arg1 ;
-(void)setPixelBufferPool:(id)arg0 forRequirement:(id)arg1 ;


@end


#endif