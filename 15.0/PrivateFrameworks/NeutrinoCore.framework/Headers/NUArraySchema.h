// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUARRAYSCHEMA_H
#define NUARRAYSCHEMA_H

@class NSDictionary, NSArray;


#import "NUSchema.h"
#import "NUPattern.h"

@interface NUArraySchema : NUSchema {
    NSDictionary *_identifierToAlias;
}


@property (readonly, nonatomic) NSInteger contentType; // ivar: _contentType
@property (readonly, nonatomic) NSDictionary *contents; // ivar: _aliasToIdentifier
@property (readonly, nonatomic) NSArray *defaultArray;
@property (readonly, nonatomic) NUPattern *pattern; // ivar: _pattern


+(NSInteger)deserializeContentTypeFromDictionary:(id)arg0 error:(*id)arg1 ;
+(id)deserializeFromDictionary:(id)arg0 error:(*id)arg1 ;
+(id)deserializePatternFromDictionary:(id)arg0 error:(*id)arg1 ;
+(id)supportedAttributes;
-(BOOL)isValid:(*id)arg0 ;
-(BOOL)serializeIntoDictionary:(id)arg0 error:(*id)arg1 ;
-(BOOL)validate:(id)arg0 error:(*id)arg1 ;
-(BOOL)validateArray:(id)arg0 error:(*id)arg1 ;
-(BOOL)validateArrayContents:(id)arg0 error:(*id)arg1 ;
-(BOOL)validateArrayOrder:(id)arg0 error:(*id)arg1 ;
-(BOOL)validateAttribute:(id)arg0 value:(id)arg1 error:(*id)arg2 ;
-(BOOL)validateAttributes:(*id)arg0 ;
-(BOOL)validateContents:(*id)arg0 ;
-(BOOL)validateDefaultArray:(id)arg0 error:(*id)arg1 ;
-(NSInteger)type;
-(id)copy:(id)arg0 ;
-(id)copyArray:(id)arg0 ;
-(id)deserialize:(id)arg0 error:(*id)arg1 ;
-(id)deserializeArray:(id)arg0 error:(*id)arg1 ;
-(id)initWithIdentifier:(id)arg0 attributes:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 contentType:(NSInteger)arg1 contents:(id)arg2 pattern:(id)arg3 attributes:(id)arg4 ;
-(id)makeJSValue:(id)arg0 context:(id)arg1 error:(*id)arg2 ;
-(id)makeJSValueFromArray:(id)arg0 context:(id)arg1 error:(*id)arg2 ;
-(id)schemaDependencies;
-(id)serialize:(id)arg0 error:(*id)arg1 ;
-(id)serializeArray:(id)arg0 error:(*id)arg1 ;


@end


#endif