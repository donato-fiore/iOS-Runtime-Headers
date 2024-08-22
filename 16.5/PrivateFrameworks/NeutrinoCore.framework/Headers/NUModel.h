// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUMODEL_H
#define NUMODEL_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface NUModel : NSObject

@property (readonly, nonatomic) NSDictionary *attributes; // ivar: _attributes


+(BOOL)validateArray:(id)arg0 error:(*id)arg1 ;
+(BOOL)validateBool:(id)arg0 error:(*id)arg1 ;
+(BOOL)validateIdentifier:(id)arg0 error:(*id)arg1 ;
+(BOOL)validateName:(id)arg0 error:(*id)arg1 ;
+(BOOL)validateNumber:(id)arg0 error:(*id)arg1 ;
+(BOOL)validatePattern:(id)arg0 error:(*id)arg1 ;
+(BOOL)validatePropertyName:(id)arg0 error:(*id)arg1 ;
+(BOOL)validateString:(id)arg0 error:(*id)arg1 ;
+(BOOL)validateStringArray:(id)arg0 error:(*id)arg1 ;
+(id)_deserializeObjectOfClass:(Class)arg0 fromDictionary:(id)arg1 key:(id)arg2 error:(*id)arg3 ;
+(id)deserializeArrayFromDictionary:(id)arg0 key:(id)arg1 error:(*id)arg2 ;
+(id)deserializeAttribute:(id)arg0 value:(id)arg1 error:(*id)arg2 ;
+(id)deserializeDictionaryFromDictionary:(id)arg0 key:(id)arg1 error:(*id)arg2 ;
+(id)deserializeFromDictionary:(id)arg0 error:(*id)arg1 ;
+(id)deserializeStringFromDictionary:(id)arg0 key:(id)arg1 error:(*id)arg2 ;
+(id)requiredAttributes;
+(id)reservedPropertyNames;
+(id)supportedAttributes;
-(BOOL)isValid:(*id)arg0 ;
-(BOOL)serializeAttribute:(id)arg0 value:(id)arg1 intoDictionary:(id)arg2 error:(*id)arg3 ;
-(BOOL)serializeIntoDictionary:(id)arg0 error:(*id)arg1 ;
-(BOOL)validate:(id)arg0 error:(*id)arg1 ;
-(BOOL)validateAttribute:(id)arg0 value:(id)arg1 error:(*id)arg2 ;
-(BOOL)validateAttributes:(*id)arg0 ;
-(id)copy:(id)arg0 ;
-(id)deserialize:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithAttributes:(id)arg0 ;
-(id)makeJSValue:(id)arg0 context:(id)arg1 error:(*id)arg2 ;
-(id)modelForProperty:(id)arg0 ;
-(id)serialize:(id)arg0 error:(*id)arg1 ;
-(id)serializeAsDictionary:(*id)arg0 ;
-(void)enumerateProperties:(id)arg0 ;


@end


#endif