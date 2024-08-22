// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUCOMPOSITIONSCHEMA_H
#define NUCOMPOSITIONSCHEMA_H

@class NSSet, NSDictionary;


#import "NUSchema.h"

@interface NUCompositionSchema : NUSchema {
    NSSet *_requiredContents;
}


@property (readonly, nonatomic) NSDictionary *contents; // ivar: _contents
@property (readonly, nonatomic) NSSet *requiredContents;


+(id)deserializeFromDictionary:(id)arg0 error:(*id)arg1 ;
+(id)supportedAttributes;
-(BOOL)deserializeContents:(id)arg0 fromDictionary:(id)arg1 error:(*id)arg2 ;
-(BOOL)isValid:(*id)arg0 ;
-(BOOL)serializeContents:(id)arg0 intoDictionary:(id)arg1 error:(*id)arg2 ;
-(BOOL)serializeIntoDictionary:(id)arg0 error:(*id)arg1 ;
-(BOOL)validate:(id)arg0 error:(*id)arg1 ;
-(BOOL)validateAttribute:(id)arg0 value:(id)arg1 error:(*id)arg2 ;
-(BOOL)validateComposition:(id)arg0 error:(*id)arg1 ;
-(BOOL)validateContents:(*id)arg0 ;
-(BOOL)validateContents:(id)arg0 error:(*id)arg1 ;
-(BOOL)validatePropertyArray:(id)arg0 error:(*id)arg1 ;
-(NSInteger)type;
-(id)copy:(id)arg0 ;
-(id)copyComposition:(id)arg0 ;
-(id)deserialize:(id)arg0 error:(*id)arg1 ;
-(id)deserializeComposition:(id)arg0 error:(*id)arg1 ;
-(id)initWithIdentifier:(id)arg0 attributes:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 contents:(id)arg1 attributes:(id)arg2 ;
-(id)makeJSValue:(id)arg0 context:(id)arg1 error:(*id)arg2 ;
-(id)modelForProperty:(id)arg0 ;
-(id)schemaDependencies;
-(id)serialize:(id)arg0 error:(*id)arg1 ;
-(id)serializeComposition:(id)arg0 error:(*id)arg1 ;


@end


#endif