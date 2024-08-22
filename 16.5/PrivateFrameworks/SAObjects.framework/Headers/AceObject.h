// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACEOBJECT_H
#define ACEOBJECT_H

@class NSNumber, NSString, NSMutableDictionary, NSData;
@protocol AceObject;

#import <Foundation/Foundation.h>


@interface AceObject : NSObject <AceObject>

 {
    NSNumber *_deserializationDuration;
    NSNumber *_mutatingCommand;
}


@property (copy, nonatomic) NSString *aceId; // ivar: _aceId
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableDictionary *dict; // ivar: _dict
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL mutatingCommand;
@property (readonly, nonatomic) NSData *plistData; // ivar: _plistData
@property (copy, nonatomic) NSString *refId; // ivar: _refId
@property (readonly) Class superclass;
@property (copy, nonatomic) NSNumber *usefulnessScore; // ivar: _usefulnessScore


+(BOOL)supportsSecureCoding;
+(id)_aceObjectWithMutableDictionary:(id)arg0 ;
+(id)_aceObjectWithMutableDictionary:(id)arg0 context:(id)arg1 ;
+(id)_filteredDictionaryForKeySet:(id)arg0 plistData:(id)arg1 ;
+(id)_newAceObjectWithMutableDictionary:(id)arg0 ;
+(id)aceObjectArrayWithDictionaryArray:(id)arg0 baseClass:(Class)arg1 ;
+(id)aceObjectArrayWithDictionaryArray:(id)arg0 baseClass:(Class)arg1 context:(id)arg2 ;
+(id)aceObjectArrayWithDictionaryArray:(id)arg0 baseProtocol:(id)arg1 ;
+(id)aceObjectArrayWithDictionaryArray:(id)arg0 baseProtocol:(id)arg1 context:(id)arg2 ;
+(id)aceObjectDictionaryWithDictionary:(id)arg0 baseClass:(Class)arg1 ;
+(id)aceObjectDictionaryWithDictionary:(id)arg0 baseClass:(Class)arg1 context:(id)arg2 ;
+(id)aceObjectDictionaryWithDictionary:(id)arg0 baseProtocol:(id)arg1 ;
+(id)aceObjectDictionaryWithDictionary:(id)arg0 baseProtocol:(id)arg1 context:(id)arg2 ;
+(id)aceObjectWithDictionary:(id)arg0 ;
+(id)aceObjectWithDictionary:(id)arg0 context:(id)arg1 ;
+(id)aceObjectWithGenericCommand:(id)arg0 ;
+(id)aceObjectWithGenericCommand:(id)arg0 context:(id)arg1 ;
+(id)aceObjectWithPlistData:(id)arg0 ;
+(id)dictionaryArrayWithAceObjectArray:(id)arg0 ;
+(id)dictionaryWithAceObjectDictionary:(id)arg0 ;
+(id)newAceObjectWithDictionary:(id)arg0 context:(id)arg1 ;
+(id)newAceObjectWithGenericCommand:(id)arg0 context:(id)arg1 ;
-(BOOL)_isDeserialized;
-(BOOL)hasArrayForPropertyForKey:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithMutableDictionary:(id)arg0 ;
-(id)_initWithPlistData:(id)arg0 aceId:(id)arg1 refId:(id)arg2 usefulnessScore:(id)arg3 mutatingCommand:(id)arg4 ;
-(id)_serializedData;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deserializationDuration;
-(id)encodedClassName;
-(id)forceEagerDeserialization;
-(id)fullDescription;
-(id)groupIdentifier;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)properties;
-(id)propertyForKey:(id)arg0 ;
-(id)propertyForKeyWithoutDeserializing:(id)arg0 ;
-(id)topLevelPropertyForKey:(id)arg0 ;
-(void)_appendDescriptionOfObject:(id)arg0 toString:(id)arg1 atDepth:(NSUInteger)arg2 withPrefixes:(id)arg3 hint:(id)arg4 ;
-(void)_deserializeFromPlistData;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setProperty:(id)arg0 forKey:(id)arg1 ;
-(void)setTopLevelProperty:(id)arg0 forKey:(id)arg1 ;
-(void)updateUsingSet:(id)arg0 add:(id)arg1 remove:(id)arg2 ;


@end


#endif