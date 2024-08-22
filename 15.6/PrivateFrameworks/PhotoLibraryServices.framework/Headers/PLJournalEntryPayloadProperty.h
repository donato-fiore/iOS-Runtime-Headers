// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLJOURNALENTRYPAYLOADPROPERTY_H
#define PLJOURNALENTRYPAYLOADPROPERTY_H

@class NSString, NSSet, NSDictionary;

#import <Foundation/Foundation.h>

#import "PLJournalEntryPayloadProperty.h"

@interface PLJournalEntryPayloadProperty : NSObject {
    BOOL _requiresConversion;
}


@property (readonly, nonatomic) BOOL isToManySubRelationship; // ivar: _isToManySubRelationship
@property (readonly, nonatomic) BOOL isUUIDKey; // ivar: _isUUIDKey
@property (readonly, nonatomic) NSString *key; // ivar: _key
@property (retain, nonatomic) PLJournalEntryPayloadProperty *parentProperty; // ivar: _parentProperty
@property (readonly, nonatomic) NSSet *relatedEntityPropertyNames; // ivar: _relatedEntityPropertyNames
@property (readonly, nonatomic) BOOL requiresConversion;
@property (readonly, nonatomic) BOOL shouldPrefetchRelationship; // ivar: _shouldPrefetchRelationship
@property (readonly, nonatomic) NSString *subRelationshipEntityName; // ivar: _subRelationshipEntityName
@property (readonly, nonatomic) NSDictionary *subRelationshipProperties; // ivar: _subRelationshipProperties
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(id)payloadPropertyForUUID;
+(id)payloadPropertyWithKey:(id)arg0 andType:(NSUInteger)arg1 ;
+(id)payloadPropertyWithKey:(id)arg0 andType:(NSUInteger)arg1 requiresConversion:(BOOL)arg2 ;
+(id)payloadPropertyWithKey:(id)arg0 relatedEntityPropertyNames:(id)arg1 shouldPrefetchRelationship:(BOOL)arg2 ;
+(id)payloadPropertyWithKey:(id)arg0 subRelationshipProperties:(id)arg1 subRelationshipEntityName:(id)arg2 isToMany:(BOOL)arg3 ;
-(BOOL)isEqualToKey:(id)arg0 ;
-(id)description;
-(id)initWithKey:(id)arg0 andType:(NSUInteger)arg1 subRelationshipProperties:(id)arg2 subRelationshipEntityName:(id)arg3 requiresConversion:(BOOL)arg4 relatedEntityPropertyNames:(id)arg5 isUUIDKey:(BOOL)arg6 isToManySubRelationship:(BOOL)arg7 shouldPrefetchRelationship:(BOOL)arg8 ;


@end


#endif