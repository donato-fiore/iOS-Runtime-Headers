// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGDUPLICATEKEY_H
#define SGDUPLICATEKEY_H

@class NSData;
@protocol NSCopying, SGEntityKey;

#import <Foundation/Foundation.h>

#import "SGDuplicateKey.h"

@interface SGDuplicateKey : NSObject <NSCopying>



@property (readonly, nonatomic) NSData *compositeHash;
@property (readonly, nonatomic) NSObject<SGEntityKey> *entityKey; // ivar: _entityKey
@property (readonly, nonatomic) NSInteger entityType; // ivar: _entityType
@property (readonly, nonatomic) SGDuplicateKey *parentKey; // ivar: _parentKey


+(BOOL)serializationPassesBasicScrutiny:(id)arg0 ;
+(id)duplicateKeyForCuratedEventWithExternalID:(id)arg0 ;
+(id)duplicateKeyForDeliveryWithProviderString:(id)arg0 trackingNumber:(id)arg1 parentKey:(id)arg2 ;
+(id)duplicateKeyForEmailWithSource:(id)arg0 messageId:(id)arg1 ;
+(id)duplicateKeyForInteraction:(id)arg0 fromBundleIdentifier:(id)arg1 ;
+(id)duplicateKeyForInteractionIdentifier:(id)arg0 fromBundleIdentifier:(id)arg1 ;
+(id)duplicateKeyForInteractionWithBundleId:(id)arg0 personHandle:(id)arg1 ;
+(id)duplicateKeyForMessage:(id)arg0 fromSource:(id)arg1 ;
+(id)duplicateKeyForNaturalLanguageEventWithStartDate:(id)arg0 endDate:(id)arg1 title:(id)arg2 participants:(id)arg3 parentKey:(id)arg4 ;
+(id)duplicateKeyForPseudoContactWithIdentity:(id)arg0 parentKey:(id)arg1 ;
+(id)duplicateKeyForPseudoEventWithGroupId:(id)arg0 parentKey:(id)arg1 ;
+(id)duplicateKeyForPseudoReminderWithGroupId:(id)arg0 withCreationTime:(struct SGUnixTimestamp_ )arg1 parentKey:(id)arg2 ;
+(id)duplicateKeyForSchemaOrg;
+(id)duplicateKeyForSearchableItem:(id)arg0 ;
+(id)duplicateKeyForTextMessageWithSource:(id)arg0 uniqueIdentifier:(id)arg1 ;
+(id)duplicateKeyForWebPageFromSource:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDuplicateKey:(id)arg0 ;
-(NSUInteger)hash;
-(id)bundleId;
-(id)contactDetailKey;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)curatedEventKey;
-(id)deliveryKey;
-(id)description;
-(id)emailKey;
-(id)initWithEntityKey:(id)arg0 entityType:(NSInteger)arg1 parentKey:(id)arg2 ;
-(id)initWithMessageIdHeaderValues:(id)arg0 accountIdentifier:(id)arg1 ;
-(id)initWithSearchableItem:(id)arg0 ;
-(id)initWithSerialized:(id)arg0 ;
-(id)initWithSerializedEntityKey:(id)arg0 entityType:(NSInteger)arg1 serializedParentKey:(id)arg2 ;
-(id)interactionKey;
-(id)messageKey;
-(id)pseudoContactKey;
-(id)pseudoEventKey;
-(id)pseudoReminderKey;
-(id)serialize;
-(id)textMessageKey;
-(id)webPageKey;


@end


#endif