// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CDINTERACTION_H
#define _CDINTERACTION_H

@class NSString, NSArray, NSURL, NSDate;
@protocol _CDPDataPoint, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_CDContact.h"

@interface _CDInteraction : NSObject <_CDPDataPoint, NSSecureCoding>



@property (retain) NSString *account; // ivar: _account
@property (retain) NSArray *attachments; // ivar: _attachments
@property (retain) NSString *bundleId; // ivar: _bundleId
@property (retain) NSURL *contentURL; // ivar: _contentURL
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSString *derivedIntentIdentifier; // ivar: _derivedIntentIdentifier
@property (readonly, copy) NSString *description;
@property NSInteger direction; // ivar: _direction
@property (retain) NSString *domainIdentifier; // ivar: _domainIdentifier
@property (retain) NSDate *endDate; // ivar: _endDate
@property (nonatomic) BOOL forcePersistInteraction; // ivar: _forcePersistInteraction
@property (retain) NSString *groupName; // ivar: _groupName
@property (readonly) NSUInteger hash;
@property BOOL isResponse; // ivar: _isResponse
@property (retain) NSArray *keywords; // ivar: _keywords
@property (retain) NSString *locationUUID; // ivar: _locationUUID
@property (nonatomic) BOOL mailShareSheetDeletionCandidate; // ivar: _mailShareSheetDeletionCandidate
@property NSInteger mechanism; // ivar: _mechanism
@property (retain) NSString *nsUserName; // ivar: _nsUserName
@property (readonly, nonatomic) NSArray *peopleIdentifiers;
@property (retain) NSArray *recipients; // ivar: _recipients
@property NSInteger selfParticipantStatus; // ivar: _selfParticipantStatus
@property (retain) _CDContact *sender; // ivar: _sender
@property (retain) NSDate *startDate; // ivar: _startDate
@property (readonly) Class superclass;
@property (retain) NSString *targetBundleId; // ivar: _targetBundleId
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) NSString *title;
@property (retain) NSDate *updateDate; // ivar: _updateDate
@property (readonly, nonatomic) BOOL userIsSender;
@property (readonly, nonatomic) BOOL userIsThreadInitiator;
@property (retain) NSString *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
+(id)generateConversationIdFromInteractionRecipients:(id)arg0 ;
+(id)recipientIdentifiersFromMobileMailConversationId:(id)arg0 ;
+(id)shareSheetInteractionFromINInteraction:(id)arg0 bundleID:(id)arg1 nsUserName:(id)arg2 knowledgeStore:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValidInteraction;
-(id)descriptionOfArray:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithINInteraction:(id)arg0 bundleID:(id)arg1 nsUserName:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif