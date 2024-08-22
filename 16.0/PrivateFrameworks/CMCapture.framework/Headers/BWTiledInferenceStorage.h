// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWTILEDINFERENCESTORAGE_H
#define BWTILEDINFERENCESTORAGE_H

@class NSArray;


#import "BWInferenceProviderStorage.h"
#import "BWInferenceSimpleTextureStorage.h"

@interface BWTiledInferenceStorage : BWInferenceProviderStorage {
    BWInferenceSimpleTextureStorage *_textureStorage;
}


@property (readonly, nonatomic) NSArray *espressoStorages; // ivar: _espressoStorages


-(id)initWithRequirementsNeedingPixelBuffers:(id)arg0 requirementsNeedingPixelBufferPools:(id)arg1 espressoStorages:(id)arg2 ;
-(id)textureStorage;
-(void)clear;
-(void)dealloc;


@end


#endif