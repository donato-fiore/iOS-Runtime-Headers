// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CDINTERACTIONADVISORSETTINGS_H
#define _CDINTERACTIONADVISORSETTINGS_H

@class NSString, NSSet, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _CDInteractionAdvisorSettings : NSObject <NSCopying, NSSecureCoding>



@property BOOL aggregateByIdentifier; // ivar: _aggregateByIdentifier
@property (retain) NSString *callerBundleId; // ivar: _callerBundleId
@property (retain) NSSet *constrainAccounts; // ivar: _constrainAccounts
@property (retain) NSSet *constrainBundleIds; // ivar: _constrainBundleIds
@property (retain) NSSet *constrainDirections; // ivar: _constrainDirections
@property (retain) NSSet *constrainDomainIdentifiers; // ivar: _constrainDomainIdentifiers
@property (retain) NSSet *constrainIdentifiers; // ivar: _constrainIdentifiers
@property (retain) NSSet *constrainKeywords; // ivar: _constrainKeywords
@property (retain) NSSet *constrainLocationUUIDs; // ivar: _constrainLocationUUIDs
@property NSInteger constrainMaxRecipientCount; // ivar: _constrainMaxRecipientCount
@property (retain) NSSet *constrainMechanisms; // ivar: _constrainMechanisms
@property (retain) NSSet *constrainPersonIdType; // ivar: _constrainPersonIdType
@property (retain) NSSet *constrainPersonIds; // ivar: _constrainPersonIds
@property (retain) NSSet *constrainRecipients; // ivar: _constrainRecipients
@property (retain) NSSet *constrainSenders; // ivar: _constrainSenders
@property (retain, nonatomic) NSString *consumerIdentifier; // ivar: _consumerIdentifier
@property (retain) NSString *contactPrefix; // ivar: _contactPrefix
@property (retain) NSSet *ignoreContactIdentifiers; // ivar: _ignoreContactIdentifiers
@property (retain) NSSet *ignoreInteractionUUIDs; // ivar: _ignoreInteractionUUIDs
@property (retain) NSDate *interactionDate; // ivar: _interactionDate
@property (retain) NSString *interactionLocationUUID; // ivar: _interactionLocationUUID
@property (retain) NSString *interactionTitle; // ivar: _interactionTitle
@property BOOL requireOutgoingInteraction; // ivar: _requireOutgoingInteraction
@property NSUInteger resultLimit; // ivar: _resultLimit
@property (retain) NSSet *seedIdentifiers; // ivar: _seedIdentifiers
@property BOOL useFuture; // ivar: _useFuture


+(BOOL)supportsSecureCoding;
+(id)extractContactIdentifiers:(id)arg0 ;
+(id)interactionAdvisorSettingsDefault;
-(id)contactPredicate;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)interactionPredicate;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif