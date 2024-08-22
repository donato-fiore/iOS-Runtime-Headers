// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPBASEENTITYTRANSLATOR_H
#define MPBASEENTITYTRANSLATOR_H

@class NSMutableDictionary, NSMutableSet;

#import <Foundation/Foundation.h>


@interface MPBaseEntityTranslator : NSObject {
    NSMutableDictionary *_propertiesToTranslators;
    NSMutableDictionary *_relationshipsToTranslators;
    id *_sourcePreprocessorBlock;
    NSMutableSet *_unsupportedKeys;
    ? _optionalHooks;
}


@property (readonly, nonatomic) Class MPModelClass; // ivar: _MPModelClass


+(id)createTranslatorForMPModelClass:(Class)arg0 ;
+(id)translatorForMPModelClass:(Class)arg0 ;
+(void)buildSchemaIfNeeded;
-(Class)classForRelationshipKey:(id)arg0 ;
-(id)_objectForPropertySet:(id)arg0 source:(id)arg1 context:(id)arg2 ;
-(id)_objectForRelationshipKey:(id)arg0 propertySet:(id)arg1 source:(id)arg2 context:(id)arg3 ;
-(id)_valueForPropertyKey:(id)arg0 source:(id)arg1 context:(id)arg2 ;
-(id)description;
-(id)initWithMPModelClass:(Class)arg0 ;
-(id)prepareSource:(id)arg0 context:(id)arg1 properties:(id)arg2 ;
-(void)mapUnsupportedPropertyKey:(id)arg0 ;
-(void)mapUnsupportedRelationshipKey:(id)arg0 ;
-(void)setSourcePreprocessorBlock:(id)arg0 ;


@end


#endif