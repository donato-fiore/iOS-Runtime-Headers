// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GRRSCHEMAGRRFEATURE_H
#define GRRSCHEMAGRRFEATURE_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "GRRSchemaGRRStringList.h"

@interface GRRSchemaGRRFeature : SISchemaInstrumentationMessage

@property (retain, nonatomic) GRRSchemaGRRStringList *applicationsInForeground; // ivar: _applicationsInForeground
@property (nonatomic) unsigned int asrRank; // ivar: _asrRank
@property (nonatomic) BOOL canResolveContactByRelationship; // ivar: _canResolveContactByRelationship
@property (copy, nonatomic) NSString *configuredSiriLanguage; // ivar: _configuredSiriLanguage
@property (nonatomic) BOOL contactHasRequestedAddressDetail; // ivar: _contactHasRequestedAddressDetail
@property (nonatomic) CGFloat contactMatchConfidence; // ivar: _contactMatchConfidence
@property (nonatomic) BOOL deviceIsPlayingAudio; // ivar: _deviceIsPlayingAudio
@property (nonatomic) BOOL hasApplicationsInForeground; // ivar: _hasApplicationsInForeground
@property (nonatomic) BOOL hasAsrRank; // ivar: _hasAsrRank
@property (nonatomic) BOOL hasCanResolveContactByRelationship; // ivar: _hasCanResolveContactByRelationship
@property (nonatomic) BOOL hasConfiguredSiriLanguage; // ivar: _hasConfiguredSiriLanguage
@property (nonatomic) BOOL hasContactHasRequestedAddressDetail; // ivar: _hasContactHasRequestedAddressDetail
@property (nonatomic) BOOL hasContactMatchConfidence; // ivar: _hasContactMatchConfidence
@property (nonatomic) BOOL hasDeviceIsPlayingAudio; // ivar: _hasDeviceIsPlayingAudio
@property (nonatomic) BOOL hasInputOrigin; // ivar: _hasInputOrigin
@property (nonatomic) BOOL hasIsActiveAlarmPresent; // ivar: _hasIsActiveAlarmPresent
@property (nonatomic) BOOL hasIsActiveAppointmentPresent; // ivar: _hasIsActiveAppointmentPresent
@property (nonatomic) BOOL hasIsAnnounceEnabled; // ivar: _hasIsAnnounceEnabled
@property (nonatomic) BOOL hasIsAppInstalled; // ivar: _hasIsAppInstalled
@property (nonatomic) BOOL hasIsAppMatchPresent; // ivar: _hasIsAppMatchPresent
@property (nonatomic) BOOL hasIsAppRunning; // ivar: _hasIsAppRunning
@property (nonatomic) BOOL hasIsArtistPresent; // ivar: _hasIsArtistPresent
@property (nonatomic) BOOL hasIsAudioPlaying; // ivar: _hasIsAudioPlaying
@property (nonatomic) BOOL hasIsContactNameResolved; // ivar: _hasIsContactNameResolved
@property (nonatomic) BOOL hasIsEmailAvailable; // ivar: _hasIsEmailAvailable
@property (nonatomic) BOOL hasIsFollowUp; // ivar: _hasIsFollowUp
@property (nonatomic) BOOL hasIsMediaItemEntityPresent; // ivar: _hasIsMediaItemEntityPresent
@property (nonatomic) BOOL hasIsMessagingPossible; // ivar: _hasIsMessagingPossible
@property (nonatomic) BOOL hasIsMessagingPossibleForSendMessageIntent; // ivar: _hasIsMessagingPossibleForSendMessageIntent
@property (nonatomic) BOOL hasIsPhoneCallPossible; // ivar: _hasIsPhoneCallPossible
@property (nonatomic) BOOL hasIsPhoneCallPossibleForPhoneCallIntent; // ivar: _hasIsPhoneCallPossibleForPhoneCallIntent
@property (nonatomic) BOOL hasIsPhoneNumberAvailable; // ivar: _hasIsPhoneNumberAvailable
@property (nonatomic) BOOL hasIsPhoneNumberContactResolvable; // ivar: _hasIsPhoneNumberContactResolvable
@property (nonatomic) BOOL hasIsPreviousTurnSendEmptyMessage; // ivar: _hasIsPreviousTurnSendEmptyMessage
@property (nonatomic) BOOL hasIsSettingOn; // ivar: _hasIsSettingOn
@property (nonatomic) BOOL hasIsTimerActive; // ivar: _hasIsTimerActive
@property (nonatomic) BOOL hasIsVideoPlaying; // ivar: _hasIsVideoPlaying
@property (nonatomic) BOOL hasNumberOfContactsResolved; // ivar: _hasNumberOfContactsResolved
@property (nonatomic) BOOL hasPreviousFlowDomain; // ivar: _hasPreviousFlowDomain
@property (nonatomic) BOOL hasRequestTimeBeginMs; // ivar: _hasRequestTimeBeginMs
@property (nonatomic) BOOL hasSharingAppActive; // ivar: _hasSharingAppActive
@property (nonatomic) BOOL hasSharingEntityPresent; // ivar: _hasSharingEntityPresent
@property (nonatomic) BOOL hasSharingRecipientPresent; // ivar: _hasSharingRecipientPresent
@property (nonatomic) BOOL hasSmsAttachmentExists; // ivar: _hasSmsAttachmentExists
@property (nonatomic) BOOL hasSmsAttributeRecipientExists; // ivar: _hasSmsAttributeRecipientExists
@property (nonatomic) BOOL hasSmsAttributeSenderExists; // ivar: _hasSmsAttributeSenderExists
@property (nonatomic) BOOL hasSmsPhoneNumberMentioned; // ivar: _hasSmsPhoneNumberMentioned
@property (nonatomic) BOOL hasSmsTextPayloadExists; // ivar: _hasSmsTextPayloadExists
@property (nonatomic) BOOL hasTimeSinceLastValidRequestMs; // ivar: _hasTimeSinceLastValidRequestMs
@property (nonatomic) BOOL hasTopTopics; // ivar: _hasTopTopics
@property (copy, nonatomic) NSString *inputOrigin; // ivar: _inputOrigin
@property (nonatomic) BOOL isActiveAlarmPresent; // ivar: _isActiveAlarmPresent
@property (nonatomic) BOOL isActiveAppointmentPresent; // ivar: _isActiveAppointmentPresent
@property (nonatomic) BOOL isAnnounceEnabled; // ivar: _isAnnounceEnabled
@property (nonatomic) BOOL isAppInstalled; // ivar: _isAppInstalled
@property (nonatomic) BOOL isAppMatchPresent; // ivar: _isAppMatchPresent
@property (nonatomic) BOOL isAppRunning; // ivar: _isAppRunning
@property (nonatomic) BOOL isArtistPresent; // ivar: _isArtistPresent
@property (nonatomic) BOOL isAudioPlaying; // ivar: _isAudioPlaying
@property (nonatomic) BOOL isContactNameResolved; // ivar: _isContactNameResolved
@property (nonatomic) BOOL isEmailAvailable; // ivar: _isEmailAvailable
@property (nonatomic) BOOL isFollowUp; // ivar: _isFollowUp
@property (nonatomic) BOOL isMediaItemEntityPresent; // ivar: _isMediaItemEntityPresent
@property (nonatomic) BOOL isMessagingPossible; // ivar: _isMessagingPossible
@property (nonatomic) BOOL isMessagingPossibleForSendMessageIntent; // ivar: _isMessagingPossibleForSendMessageIntent
@property (nonatomic) BOOL isPhoneCallPossible; // ivar: _isPhoneCallPossible
@property (nonatomic) BOOL isPhoneCallPossibleForPhoneCallIntent; // ivar: _isPhoneCallPossibleForPhoneCallIntent
@property (nonatomic) BOOL isPhoneNumberAvailable; // ivar: _isPhoneNumberAvailable
@property (nonatomic) BOOL isPhoneNumberContactResolvable; // ivar: _isPhoneNumberContactResolvable
@property (nonatomic) BOOL isPreviousTurnSendEmptyMessage; // ivar: _isPreviousTurnSendEmptyMessage
@property (nonatomic) BOOL isSettingOn; // ivar: _isSettingOn
@property (nonatomic) BOOL isTimerActive; // ivar: _isTimerActive
@property (nonatomic) BOOL isVideoPlaying; // ivar: _isVideoPlaying
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int numberOfContactsResolved; // ivar: _numberOfContactsResolved
@property (copy, nonatomic) NSString *previousFlowDomain; // ivar: _previousFlowDomain
@property (nonatomic) NSUInteger requestTimeBeginMs; // ivar: _requestTimeBeginMs
@property (nonatomic) BOOL sharingAppActive; // ivar: _sharingAppActive
@property (nonatomic) BOOL sharingEntityPresent; // ivar: _sharingEntityPresent
@property (nonatomic) BOOL sharingRecipientPresent; // ivar: _sharingRecipientPresent
@property (nonatomic) BOOL smsAttachmentExists; // ivar: _smsAttachmentExists
@property (nonatomic) BOOL smsAttributeRecipientExists; // ivar: _smsAttributeRecipientExists
@property (nonatomic) BOOL smsAttributeSenderExists; // ivar: _smsAttributeSenderExists
@property (nonatomic) BOOL smsPhoneNumberMentioned; // ivar: _smsPhoneNumberMentioned
@property (nonatomic) BOOL smsTextPayloadExists; // ivar: _smsTextPayloadExists
@property (nonatomic) NSUInteger timeSinceLastValidRequestMs; // ivar: _timeSinceLastValidRequestMs
@property (retain, nonatomic) GRRSchemaGRRStringList *topTopics; // ivar: _topTopics
@property (readonly, nonatomic) NSUInteger whichFeature; // ivar: _whichFeature


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteApplicationsInForeground;
-(void)deleteAsrRank;
-(void)deleteCanResolveContactByRelationship;
-(void)deleteConfiguredSiriLanguage;
-(void)deleteContactHasRequestedAddressDetail;
-(void)deleteContactMatchConfidence;
-(void)deleteDeviceIsPlayingAudio;
-(void)deleteInputOrigin;
-(void)deleteIsActiveAlarmPresent;
-(void)deleteIsActiveAppointmentPresent;
-(void)deleteIsAnnounceEnabled;
-(void)deleteIsAppInstalled;
-(void)deleteIsAppMatchPresent;
-(void)deleteIsAppRunning;
-(void)deleteIsArtistPresent;
-(void)deleteIsAudioPlaying;
-(void)deleteIsContactNameResolved;
-(void)deleteIsEmailAvailable;
-(void)deleteIsFollowUp;
-(void)deleteIsMediaItemEntityPresent;
-(void)deleteIsMessagingPossible;
-(void)deleteIsMessagingPossibleForSendMessageIntent;
-(void)deleteIsPhoneCallPossible;
-(void)deleteIsPhoneCallPossibleForPhoneCallIntent;
-(void)deleteIsPhoneNumberAvailable;
-(void)deleteIsPhoneNumberContactResolvable;
-(void)deleteIsPreviousTurnSendEmptyMessage;
-(void)deleteIsSettingOn;
-(void)deleteIsTimerActive;
-(void)deleteIsVideoPlaying;
-(void)deleteNumberOfContactsResolved;
-(void)deletePreviousFlowDomain;
-(void)deleteRequestTimeBeginMs;
-(void)deleteSharingAppActive;
-(void)deleteSharingEntityPresent;
-(void)deleteSharingRecipientPresent;
-(void)deleteSmsAttachmentExists;
-(void)deleteSmsAttributeRecipientExists;
-(void)deleteSmsAttributeSenderExists;
-(void)deleteSmsPhoneNumberMentioned;
-(void)deleteSmsTextPayloadExists;
-(void)deleteTimeSinceLastValidRequestMs;
-(void)deleteTopTopics;
-(void)writeTo:(id)arg0 ;


@end


#endif