// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPMEDIAKITENTITYTRANSLATOR_H
#define MPMEDIAKITENTITYTRANSLATOR_H

@class NSString;
@protocol MPMediaKitGenericObjectTranslator;


#import "MPBaseEntityTranslator.h"

@interface MPMediaKitEntityTranslator : MPBaseEntityTranslator <MPMediaKitGenericObjectTranslator>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)createGenericObjectTranslator;
+(id)createTranslatorForMPModelClass:(Class)arg0 ;
+(id)translatorForType:(id)arg0 ;
+(void)buildSchemaIfNeeded;
-(id)identifiersForPayload:(id)arg0 context:(id)arg1 ;
-(id)objectForPropertySet:(id)arg0 payload:(id)arg1 context:(id)arg2 ;
-(void)mapIdentifierCreationKeyPaths:(id)arg0 transformBlock:(id)arg1 ;
-(void)mapPropertyKey:(id)arg0 toPayloadKeyPath:(id)arg1 ;
-(void)mapPropertyKey:(id)arg0 toPayloadKeyPaths:(id)arg1 valueTransformer:(id)arg2 ;
-(void)mapPropertyKey:(id)arg0 toPayloadKeyPaths:(id)arg1 valueTransformerFunction:(*unk)arg2 ;
-(void)mapRelationshipKey:(id)arg0 toModelClass:(Class)arg1 mediaKitType:(id)arg2 ;
-(void)mapRelationshipKey:(id)arg0 toModelClass:(Class)arg1 mediaKitType:(id)arg2 attributePayloadTransform:(id)arg3 ;
-(void)mapRelationshipKey:(id)arg0 toModelClass:(Class)arg1 mediaKitType:(id)arg2 payloadTransform:(id)arg3 ;


@end


#endif