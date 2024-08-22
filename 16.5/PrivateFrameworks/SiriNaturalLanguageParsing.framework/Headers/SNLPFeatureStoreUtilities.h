// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SNLPFEATURESTOREUTILITIES_H
#define SNLPFEATURESTOREUTILITIES_H


#import <Foundation/Foundation.h>


@interface SNLPFeatureStoreUtilities : NSObject



+(BOOL)_insertToFeatureStoreWithJSONString:(id)arg0 interactionIdentifier:(id)arg1 streamIdentifier:(id)arg2 ;
+(BOOL)_insertToFeatureStoreWithProtobufObject:(id)arg0 interactionIdentifier:(id)arg1 streamIdentifier:(id)arg2 ;
+(BOOL)insertToFeatureStoreWithITFMAssertVersion:(id)arg0 interactionIdentifier:(id)arg1 itfmModelType:(NSUInteger)arg2 ;
+(BOOL)insertToFeatureStoreWithITFMContextResponse:(id)arg0 interactionIdentifier:(id)arg1 itfmModelType:(NSUInteger)arg2 ;
+(BOOL)insertToFeatureStoreWithITFMExecutedHandcraftedRules:(id)arg0 interactionIdentifier:(id)arg1 itfmModelType:(NSUInteger)arg2 ;
+(BOOL)insertToFeatureStoreWithITFMSpanResponse:(id)arg0 interactionIdentifier:(id)arg1 itfmModelType:(NSUInteger)arg2 ;
+(BOOL)insertToFeatureStoreWithNLv4AssertVersion:(id)arg0 interactionIdentifier:(id)arg1 ;
+(BOOL)insertToFeatureStoreWithNLv4ContextResponse:(id)arg0 interactionIdentifier:(id)arg1 ;
+(BOOL)insertToFeatureStoreWithNLv4ExecutedHandcraftedRules:(id)arg0 interactionIdentifier:(id)arg1 ;
+(BOOL)insertToFeatureStoreWithNLv4SpanResponse:(id)arg0 interactionIdentifier:(id)arg1 ;
+(NSUInteger)itfmModelTypeForSNLPComponent:(*int)arg0 ;
+(id)_jsonStringFromProtobufObject:(id)arg0 ;


@end


#endif