// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSTOREPLATFORMENTITYTRANSLATOR_H
#define MPSTOREPLATFORMENTITYTRANSLATOR_H



#import "MPBaseEntityTranslator.h"

@interface MPStorePlatformEntityTranslator : MPBaseEntityTranslator



+(id)translatorForKind:(id)arg0 ;
+(void)buildSchemaIfNeeded;
-(id)identifiersForPayload:(id)arg0 context:(id)arg1 ;
-(id)objectForPropertySet:(id)arg0 payload:(id)arg1 context:(id)arg2 ;
-(id)prepareSource:(id)arg0 context:(id)arg1 properties:(id)arg2 ;
-(void)mapIdentifierCreationKeyPaths:(id)arg0 transformBlock:(id)arg1 ;
-(void)mapPropertyKey:(id)arg0 toPayloadKeyPath:(id)arg1 ;
-(void)mapPropertyKey:(id)arg0 toPayloadKeyPaths:(id)arg1 valueTransformer:(id)arg2 ;
-(void)mapPropertyKey:(id)arg0 toPayloadKeyPaths:(id)arg1 valueTransformerFunction:(*unk)arg2 ;
-(void)mapRelationshipKey:(id)arg0 toModelClass:(Class)arg1 payloadTransform:(id)arg2 ;


@end


#endif