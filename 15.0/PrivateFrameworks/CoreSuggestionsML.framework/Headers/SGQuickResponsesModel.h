// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGQUICKRESPONSESMODEL_H
#define SGQUICKRESPONSESMODEL_H

@protocol PMLMultiLabelClassifierProtocol;

#import <Foundation/Foundation.h>

#import "SGQuickResponsesTransformerInstance.h"

@interface SGQuickResponsesModel : NSObject {
    id<PMLMultiLabelClassifierProtocol> *_model;
    SGQuickResponsesTransformerInstance *_transformer;
}




+(BOOL)shouldSampleForLabel:(id)arg0 inLanguage:(id)arg1 isDynamicLabel:(BOOL)arg2 ;
+(id)_sharedInvalidKeysCache;
+(id)_sharedTransformerCache;
+(id)_transformerCacheKeyForLanguage:(id)arg0 mode:(NSUInteger)arg1 plistPath:(id)arg2 ;
+(id)configForLanguage:(id)arg0 mode:(NSUInteger)arg1 plistPath:(id)arg2 ;
+(id)featuresOf:(id)arg0 inLanguage:(id)arg1 andMode:(NSUInteger)arg2 ;
+(id)featuresOf:(id)arg0 withFeaturizer:(id)arg1 source:(id)arg2 ;
+(id)labelOf:(id)arg0 inLanguage:(id)arg1 ;
+(id)labelOf:(id)arg0 withLabeler:(id)arg1 ;
+(id)modelForLanguage:(id)arg0 mode:(NSUInteger)arg1 chunkPath:(id)arg2 plistPath:(id)arg3 ;
+(id)newTransformerInstanceForLanguage:(id)arg0 mode:(NSUInteger)arg1 plistPath:(id)arg2 ;
+(id)transformerInstanceForLanguage:(id)arg0 mode:(NSUInteger)arg1 ;
+(id)transformerInstanceForLanguage:(id)arg0 mode:(NSUInteger)arg1 plistPath:(id)arg2 ;
+(void)_addModelAssetUpdateHandler;
+(void)setGlobalTransformerForTesting:(id)arg0 ;
-(BOOL)shouldSampleForLabel:(id)arg0 isDynamicLabel:(BOOL)arg1 ;
-(id)config;
-(id)featuresOf:(id)arg0 ;
-(id)initWithEntity:(id)arg0 type:(id)arg1 mode:(NSUInteger)arg2 language:(id)arg3 class:(Class)arg4 modelPath:(id)arg5 plistPath:(id)arg6 ;
-(id)labelOf:(id)arg0 ;
-(id)predict:(id)arg0 ;
-(void)setTransformer:(id)arg0 ;


@end


#endif