// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMEDIAREMOTEENTITYTRANSLATOR_H
#define MPMEDIAREMOTEENTITYTRANSLATOR_H



#import "MPBaseEntityTranslator.h"

@interface MPMediaRemoteEntityTranslator : MPBaseEntityTranslator



+(void)buildSchemaIfNeeded;
-(id)identifiersForContentItem:(id)arg0 ;
-(id)objectForPropertySet:(id)arg0 contentItem:(id)arg1 context:(id)arg2 ;
-(id)sectionObjectForPropertySet:(id)arg0 contentItem:(id)arg1 context:(id)arg2 ;
-(void)mapArtworkPropertyKey:(id)arg0 ;
-(void)mapIdentifierCreationBlock:(id)arg0 ;
-(void)mapPropertyKey:(id)arg0 toDeviceSpecificUserInfoKey:(id)arg1 ;
-(void)mapPropertyKey:(id)arg0 toMPContentItemSelector:(SEL)arg1 ;
-(void)mapPropertyKey:(id)arg0 toUserInfoKey:(id)arg1 ;
-(void)mapPropertyKey:(id)arg0 toValueTransformer:(id)arg1 ;
-(void)mapRelationshipKey:(id)arg0 toModelClass:(Class)arg1 ;


@end


#endif