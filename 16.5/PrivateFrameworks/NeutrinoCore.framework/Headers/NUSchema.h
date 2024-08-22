// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUSCHEMA_H
#define NUSCHEMA_H



#import "NUModel.h"
#import "NUIdentifier.h"

@interface NUSchema : NUModel

@property (readonly, nonatomic) NUIdentifier *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSInteger type;


+(BOOL)serializeMediaType:(NSInteger)arg0 intoDictionary:(id)arg1 error:(*id)arg2 ;
+(BOOL)validateIdentifiable:(id)arg0 error:(*id)arg1 ;
+(BOOL)validateIdentifiable:(id)arg0 type:(NSInteger)arg1 error:(*id)arg2 ;
+(BOOL)validateSchemaIdentifier:(id)arg0 type:(NSInteger)arg1 error:(*id)arg2 ;
+(BOOL)validateSchemaType:(id)arg0 error:(*id)arg1 ;
+(NSInteger)deserializeMediaTypeFromDictionary:(id)arg0 ;
+(NSInteger)schemaTypeFromString:(id)arg0 error:(*id)arg1 ;
+(id)copyIdentifiableItem:(id)arg0 ;
+(id)copyItem:(id)arg0 schemaIdentifier:(id)arg1 ;
+(id)deserializeContentsFromDictionary:(id)arg0 error:(*id)arg1 ;
+(id)deserializeFromDictionary:(id)arg0 error:(*id)arg1 ;
+(id)deserializeIdentifiableItem:(id)arg0 error:(*id)arg1 ;
+(id)deserializeIdentifierFromDictionary:(id)arg0 error:(*id)arg1 ;
+(id)deserializeItem:(id)arg0 schemaIdentifier:(id)arg1 error:(*id)arg2 ;
+(id)deserializeSchemaFromArray:(id)arg0 error:(*id)arg1 ;
+(id)makeJSValueForIdentifiableItem:(id)arg0 context:(id)arg1 error:(*id)arg2 ;
+(id)reservedPropertyNames;
+(id)serializeIdentifiableItem:(id)arg0 error:(*id)arg1 ;
+(id)serializeItem:(id)arg0 schemaIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)deserializeIdentifierFromDictionary:(id)arg0 error:(*id)arg1 ;
-(BOOL)isValid:(*id)arg0 ;
-(BOOL)serializeIdentifier:(id)arg0 intoDictionary:(id)arg1 error:(*id)arg2 ;
-(BOOL)serializeIntoDictionary:(id)arg0 error:(*id)arg1 ;
-(BOOL)validateIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)initWithAttributes:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 attributes:(id)arg1 ;
-(id)schemaDependencies;


@end


#endif