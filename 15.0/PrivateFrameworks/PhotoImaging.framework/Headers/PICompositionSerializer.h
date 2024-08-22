// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PICOMPOSITIONSERIALIZER_H
#define PICOMPOSITIONSERIALIZER_H


#import <Foundation/Foundation.h>


@interface PICompositionSerializer : NSObject



+(BOOL)_validateValueTypesForKeys:(id)arg0 requiredKeys:(id)arg1 inDictionary:(id)arg2 error:(*id)arg3 ;
+(BOOL)canInterpretDataWithFormatIdentifier:(id)arg0 formatVersion:(id)arg1 ;
+(BOOL)validateAdjustmentsEnvelope:(id)arg0 error:(*id)arg1 ;
+(BOOL)validateCompositionWithMissingSource:(id)arg0 error:(*id)arg1 ;
+(id)adjustmentInformationForComposition:(id)arg0 error:(*id)arg1 ;
+(id)deserializeCompositionFromAdjustments:(id)arg0 metadata:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 error:(*id)arg4 ;
+(id)deserializeCompositionFromData:(id)arg0 formatIdentifier:(id)arg1 formatVersion:(id)arg2 error:(*id)arg3 ;
+(id)deserializeDictionaryFromData:(id)arg0 error:(*id)arg1 ;
+(id)serializeComposition:(id)arg0 versionInfo:(id)arg1 error:(*id)arg2 ;
+(id)serializeComposition:(id)arg0 versionInfo:(id)arg1 serializerMetadata:(id)arg2 error:(*id)arg3 ;
+(id)serializeDictionary:(id)arg0 error:(*id)arg1 ;
+(void)_sanitizeComposition:(id)arg0 ;
+(void)disableApertureEffects:(BOOL)arg0 ;
+(void)initialize;


@end


#endif