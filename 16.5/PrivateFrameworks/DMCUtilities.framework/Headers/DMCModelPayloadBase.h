// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMCMODELPAYLOADBASE_H
#define DMCMODELPAYLOADBASE_H

@class NSSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DMCModelPayloadBase : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSSet *unknownPayloadKeys; // ivar: _unknownPayloadKeys


+(BOOL)supportsSecureCoding;
+(id)load:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
+(id)loadData:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(BOOL)_loadObjectOfClass:(Class)arg0 fromDictionary:(id)arg1 usingKey:(id)arg2 isRequired:(BOOL)arg3 defaultValue:(id)arg4 payloadValue:(*id)arg5 error:(*id)arg6 ;
-(BOOL)getModelObjectFromDictionary:(id)arg0 usingKey:(id)arg1 classType:(Class)arg2 isRequired:(BOOL)arg3 defaultValue:(id)arg4 serializationType:(short)arg5 payloadValue:(*id)arg6 error:(*id)arg7 ;
-(BOOL)loadArrayFromDictionary:(id)arg0 usingKey:(id)arg1 forKeyPath:(id)arg2 classType:(Class)arg3 nested:(BOOL)arg4 isRequired:(BOOL)arg5 defaultValue:(id)arg6 serializationType:(short)arg7 error:(*id)arg8 ;
// -(BOOL)loadArrayFromDictionary:(id)arg0 usingKey:(id)arg1 forKeyPath:(id)arg2 validator:(id)arg3 isRequired:(unk)arg4 defaultValue:(BOOL)arg5 error:(id)arg6  ;
-(BOOL)loadBooleanFromDictionary:(id)arg0 usingKey:(id)arg1 forKeyPath:(id)arg2 isRequired:(BOOL)arg3 defaultValue:(id)arg4 error:(*id)arg5 ;
-(BOOL)loadDataFromDictionary:(id)arg0 usingKey:(id)arg1 forKeyPath:(id)arg2 isRequired:(BOOL)arg3 defaultValue:(id)arg4 serializationType:(short)arg5 error:(*id)arg6 ;
-(BOOL)loadDateFromDictionary:(id)arg0 usingKey:(id)arg1 forKeyPath:(id)arg2 isRequired:(BOOL)arg3 defaultValue:(id)arg4 serializationType:(short)arg5 error:(*id)arg6 ;
-(BOOL)loadDictionaryFromDictionary:(id)arg0 usingKey:(id)arg1 forKeyPath:(id)arg2 classType:(Class)arg3 isRequired:(BOOL)arg4 defaultValue:(id)arg5 serializationType:(short)arg6 error:(*id)arg7 ;
-(BOOL)loadFloatFromDictionary:(id)arg0 usingKey:(id)arg1 forKeyPath:(id)arg2 isRequired:(BOOL)arg3 defaultValue:(id)arg4 error:(*id)arg5 ;
-(BOOL)loadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(BOOL)loadIntegerFromDictionary:(id)arg0 usingKey:(id)arg1 forKeyPath:(id)arg2 isRequired:(BOOL)arg3 defaultValue:(id)arg4 error:(*id)arg5 ;
-(BOOL)loadStringFromDictionary:(id)arg0 usingKey:(id)arg1 forKeyPath:(id)arg2 isRequired:(BOOL)arg3 defaultValue:(id)arg4 error:(*id)arg5 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createNestedObjectWithClass:(Class)arg0 serializationType:(short)arg1 parentKey:(id)arg2 payload:(id)arg3 error:(*id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(id)serializeAsDataWithType:(short)arg0 error:(*id)arg1 ;
-(id)serializeWithType:(short)arg0 ;
-(void)_serializeItemIntoDictionary:(id)arg0 usingKey:(id)arg1 value:(id)arg2 isRequired:(BOOL)arg3 isDefaultValue:(BOOL)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeUnknownKeysFrom:(id)arg0 parentKey:(id)arg1 ;
// -(void)serializeArrayIntoDictionary:(id)arg0 usingKey:(id)arg1 value:(id)arg2 itemSerializer:(id)arg3 isRequired:(unk)arg4 defaultValue:(BOOL)arg5  ;
-(void)serializeBooleanIntoDictionary:(id)arg0 usingKey:(id)arg1 value:(id)arg2 isRequired:(BOOL)arg3 defaultValue:(id)arg4 ;
-(void)serializeDataIntoDictionary:(id)arg0 usingKey:(id)arg1 value:(id)arg2 isRequired:(BOOL)arg3 defaultValue:(id)arg4 serializationType:(short)arg5 ;
-(void)serializeDateIntoDictionary:(id)arg0 usingKey:(id)arg1 value:(id)arg2 isRequired:(BOOL)arg3 defaultValue:(id)arg4 serializationType:(short)arg5 ;
// -(void)serializeDictionaryIntoDictionary:(id)arg0 usingKey:(id)arg1 value:(id)arg2 dictSerializer:(id)arg3 isRequired:(unk)arg4 defaultValue:(BOOL)arg5  ;
-(void)serializeFloatIntoDictionary:(id)arg0 usingKey:(id)arg1 value:(id)arg2 isRequired:(BOOL)arg3 defaultValue:(id)arg4 ;
-(void)serializeIntegerIntoDictionary:(id)arg0 usingKey:(id)arg1 value:(id)arg2 isRequired:(BOOL)arg3 defaultValue:(id)arg4 ;
-(void)serializeStringIntoDictionary:(id)arg0 usingKey:(id)arg1 value:(id)arg2 isRequired:(BOOL)arg3 defaultValue:(id)arg4 ;


@end


#endif