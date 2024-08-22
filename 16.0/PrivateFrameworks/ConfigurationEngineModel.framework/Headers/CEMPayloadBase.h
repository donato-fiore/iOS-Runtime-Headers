// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEMPAYLOADBASE_H
#define CEMPAYLOADBASE_H

@class NSSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CEMPayloadBase : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy) NSSet *unknownPayloadKeys; // ivar: _unknownPayloadKeys


+(BOOL)supportsSecureCoding;
+(id)load:(id)arg0 error:(*id)arg1 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)_loadObjectOfClass:(Class)arg0 fromDictionary:(id)arg1 withKey:(id)arg2 isRequired:(BOOL)arg3 defaultValue:(id)arg4 error:(*id)arg5 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createNestedObjectWithClass:(Class)arg0 withParentKey:(id)arg1 withPayload:(id)arg2 error:(*id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)loadArrayFromDictionary:(id)arg0 withKey:(id)arg1 classType:(Class)arg2 nested:(BOOL)arg3 isRequired:(BOOL)arg4 defaultValue:(id)arg5 error:(*id)arg6 ;
// -(id)loadArrayFromDictionary:(id)arg0 withKey:(id)arg1 validator:(id)arg2 isRequired:(unk)arg3 defaultValue:(BOOL)arg4 error:(id)arg5  ;
-(id)loadBooleanFromDictionary:(id)arg0 withKey:(id)arg1 isRequired:(BOOL)arg2 defaultValue:(id)arg3 error:(*id)arg4 ;
-(id)loadDataFromDictionary:(id)arg0 withKey:(id)arg1 isRequired:(BOOL)arg2 defaultValue:(id)arg3 error:(*id)arg4 ;
-(id)loadDateFromDictionary:(id)arg0 withKey:(id)arg1 isRequired:(BOOL)arg2 defaultValue:(id)arg3 error:(*id)arg4 ;
-(id)loadDictionaryFromDictionary:(id)arg0 withKey:(id)arg1 classType:(Class)arg2 isRequired:(BOOL)arg3 defaultValue:(id)arg4 error:(*id)arg5 ;
-(id)loadFloatFromDictionary:(id)arg0 withKey:(id)arg1 isRequired:(BOOL)arg2 defaultValue:(id)arg3 error:(*id)arg4 ;
-(id)loadIntegerFromDictionary:(id)arg0 withKey:(id)arg1 isRequired:(BOOL)arg2 defaultValue:(id)arg3 error:(*id)arg4 ;
-(id)loadStringFromDictionary:(id)arg0 withKey:(id)arg1 isRequired:(BOOL)arg2 defaultValue:(id)arg3 error:(*id)arg4 ;
-(id)serializePayload;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;
-(void)_serializeItemIntoDictionary:(id)arg0 withKey:(id)arg1 withValue:(id)arg2 isRequired:(BOOL)arg3 isDefaultValue:(BOOL)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeUnknownKeysFrom:(id)arg0 withParentKey:(id)arg1 ;
// -(void)serializeArrayIntoDictionary:(id)arg0 withKey:(id)arg1 withValue:(id)arg2 itemSerializer:(id)arg3 isRequired:(unk)arg4 defaultValue:(BOOL)arg5  ;
-(void)serializeAssetIntoDictionary:(id)arg0 withKey:(id)arg1 withValue:(id)arg2 assetProvider:(id)arg3 transformType:(id)arg4 isRequired:(BOOL)arg5 defaultValue:(id)arg6 ;
-(void)serializeBooleanIntoDictionary:(id)arg0 withKey:(id)arg1 withValue:(id)arg2 isRequired:(BOOL)arg3 defaultValue:(id)arg4 ;
-(void)serializeDataIntoDictionary:(id)arg0 withKey:(id)arg1 withValue:(id)arg2 isRequired:(BOOL)arg3 defaultValue:(id)arg4 ;
-(void)serializeDateIntoDictionary:(id)arg0 withKey:(id)arg1 withValue:(id)arg2 isRequired:(BOOL)arg3 defaultValue:(id)arg4 ;
// -(void)serializeDictionaryIntoDictionary:(id)arg0 withKey:(id)arg1 withValue:(id)arg2 dictSerializer:(id)arg3 isRequired:(unk)arg4 defaultValue:(BOOL)arg5  ;
-(void)serializeFloatIntoDictionary:(id)arg0 withKey:(id)arg1 withValue:(id)arg2 isRequired:(BOOL)arg3 defaultValue:(id)arg4 ;
-(void)serializeIntegerIntoDictionary:(id)arg0 withKey:(id)arg1 withValue:(id)arg2 isRequired:(BOOL)arg3 defaultValue:(id)arg4 ;
-(void)serializeStringIntoDictionary:(id)arg0 withKey:(id)arg1 withValue:(id)arg2 isRequired:(BOOL)arg3 defaultValue:(id)arg4 ;


@end


#endif