// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLTPBBULLETIN_H
#define BLTPBBULLETIN_H

@class PBCodable, NSMutableArray, NSData, NSString;
@protocol NSCopying;


#import "BLTPBCommunicationContext.h"
#import "BLTPBAction.h"
#import "BLTPBSectionIcon.h"

@interface BLTPBBulletin : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *additionalAttachments; // ivar: _additionalAttachments
@property (retain, nonatomic) NSData *alertSuppressionContexts; // ivar: _alertSuppressionContexts
@property (retain, nonatomic) NSData *alertSuppressionContextsNulls; // ivar: _alertSuppressionContextsNulls
@property (retain, nonatomic) NSData *attachment; // ivar: _attachment
@property (retain, nonatomic) NSString *attachmentID; // ivar: _attachmentID
@property (nonatomic) unsigned int attachmentType; // ivar: _attachmentType
@property (retain, nonatomic) NSString *attachmentURL; // ivar: _attachmentURL
@property (retain, nonatomic) NSString *bulletinID; // ivar: _bulletinID
@property (retain, nonatomic) NSString *category; // ivar: _category
@property (retain, nonatomic) NSString *categoryID; // ivar: _categoryID
@property (retain, nonatomic) BLTPBCommunicationContext *communicationContext; // ivar: _communicationContext
@property (nonatomic) BOOL containsUpdateIcon; // ivar: _containsUpdateIcon
@property (nonatomic) BOOL containsUpdatedAttachment; // ivar: _containsUpdatedAttachment
@property (retain, nonatomic) NSString *contentType; // ivar: _contentType
@property (retain, nonatomic) NSData *context; // ivar: _context
@property (retain, nonatomic) NSData *contextNulls; // ivar: _contextNulls
@property (nonatomic) CGFloat date; // ivar: _date
@property (retain, nonatomic) BLTPBAction *dismissAction; // ivar: _dismissAction
@property (retain, nonatomic) NSString *dismissalID; // ivar: _dismissalID
@property (nonatomic) unsigned int feed; // ivar: _feed
@property (readonly, nonatomic) BOOL hasAlertSuppressionContexts;
@property (readonly, nonatomic) BOOL hasAlertSuppressionContextsNulls;
@property (readonly, nonatomic) BOOL hasAttachment;
@property (readonly, nonatomic) BOOL hasAttachmentID;
@property (nonatomic) BOOL hasAttachmentType;
@property (readonly, nonatomic) BOOL hasAttachmentURL;
@property (readonly, nonatomic) BOOL hasBulletinID;
@property (readonly, nonatomic) BOOL hasCategory;
@property (readonly, nonatomic) BOOL hasCategoryID;
@property (readonly, nonatomic) BOOL hasCommunicationContext;
@property (nonatomic) BOOL hasContainsUpdateIcon;
@property (nonatomic) BOOL hasContainsUpdatedAttachment;
@property (readonly, nonatomic) BOOL hasContentType;
@property (readonly, nonatomic) BOOL hasContext;
@property (readonly, nonatomic) BOOL hasContextNulls;
@property (nonatomic) BOOL hasCriticalIcon; // ivar: _hasCriticalIcon
@property (nonatomic) BOOL hasDate;
@property (readonly, nonatomic) BOOL hasDismissAction;
@property (readonly, nonatomic) BOOL hasDismissalID;
@property (nonatomic) BOOL hasHasCriticalIcon;
@property (readonly, nonatomic) BOOL hasHeader;
@property (readonly, nonatomic) BOOL hasIcon;
@property (nonatomic) BOOL hasIgnoresQuietMode;
@property (nonatomic) BOOL hasInterruptionLevel;
@property (nonatomic) BOOL hasLoading;
@property (readonly, nonatomic) BOOL hasMessageTitle;
@property (nonatomic) BOOL hasPreemptsPresentedAlert;
@property (nonatomic) BOOL hasPublicationDate;
@property (readonly, nonatomic) BOOL hasPublisherBulletinID;
@property (readonly, nonatomic) BOOL hasRecordID;
@property (readonly, nonatomic) BOOL hasReplyToken;
@property (nonatomic) BOOL hasRequiredExpirationDate;
@property (readonly, nonatomic) BOOL hasSectionDisplayName;
@property (readonly, nonatomic) BOOL hasSectionID;
@property (nonatomic) BOOL hasSectionSubtype;
@property (readonly, nonatomic) BOOL hasSnoozeAction;
@property (readonly, nonatomic) BOOL hasSockPuppetAppBundleID;
@property (readonly, nonatomic) BOOL hasSoundAccountIdentifier;
@property (nonatomic) BOOL hasSoundAlertType;
@property (nonatomic) BOOL hasSoundAudioVolume;
@property (nonatomic) BOOL hasSoundMaximumDuration;
@property (nonatomic) BOOL hasSoundShouldIgnoreRingerSwitch;
@property (nonatomic) BOOL hasSoundShouldRepeat;
@property (readonly, nonatomic) BOOL hasSoundToneIdentifier;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (nonatomic) BOOL hasSuppressDelayForForwardedBulletins;
@property (readonly, nonatomic) BOOL hasTeamID;
@property (readonly, nonatomic) BOOL hasThreadID;
@property (readonly, nonatomic) BOOL hasTitle;
@property (nonatomic) BOOL hasTurnsOnDisplay;
@property (readonly, nonatomic) BOOL hasUniversalSectionID;
@property (retain, nonatomic) NSString *header; // ivar: _header
@property (retain, nonatomic) BLTPBSectionIcon *icon; // ivar: _icon
@property (nonatomic) BOOL ignoresQuietMode; // ivar: _ignoresQuietMode
@property (nonatomic) BOOL includesSound; // ivar: _includesSound
@property (nonatomic) unsigned int interruptionLevel; // ivar: _interruptionLevel
@property (nonatomic) BOOL loading; // ivar: _loading
@property (retain, nonatomic) NSString *messageTitle; // ivar: _messageTitle
@property (retain, nonatomic) NSMutableArray *peopleIDs; // ivar: _peopleIDs
@property (nonatomic) BOOL preemptsPresentedAlert; // ivar: _preemptsPresentedAlert
@property (nonatomic) CGFloat publicationDate; // ivar: _publicationDate
@property (retain, nonatomic) NSString *publisherBulletinID; // ivar: _publisherBulletinID
@property (retain, nonatomic) NSString *recordID; // ivar: _recordID
@property (retain, nonatomic) NSString *replyToken; // ivar: _replyToken
@property (nonatomic) CGFloat requiredExpirationDate; // ivar: _requiredExpirationDate
@property (retain, nonatomic) NSString *sectionDisplayName; // ivar: _sectionDisplayName
@property (retain, nonatomic) NSString *sectionID; // ivar: _sectionID
@property (nonatomic) int sectionSubtype; // ivar: _sectionSubtype
@property (retain, nonatomic) BLTPBAction *snoozeAction; // ivar: _snoozeAction
@property (retain, nonatomic) NSString *sockPuppetAppBundleID; // ivar: _sockPuppetAppBundleID
@property (retain, nonatomic) NSString *soundAccountIdentifier; // ivar: _soundAccountIdentifier
@property (nonatomic) int soundAlertType; // ivar: _soundAlertType
@property (nonatomic) CGFloat soundAudioVolume; // ivar: _soundAudioVolume
@property (nonatomic) CGFloat soundMaximumDuration; // ivar: _soundMaximumDuration
@property (nonatomic) BOOL soundShouldIgnoreRingerSwitch; // ivar: _soundShouldIgnoreRingerSwitch
@property (nonatomic) BOOL soundShouldRepeat; // ivar: _soundShouldRepeat
@property (retain, nonatomic) NSString *soundToneIdentifier; // ivar: _soundToneIdentifier
@property (retain, nonatomic) NSMutableArray *subsectionIDs; // ivar: _subsectionIDs
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) NSMutableArray *supplementaryActions; // ivar: _supplementaryActions
@property (nonatomic) BOOL suppressDelayForForwardedBulletins; // ivar: _suppressDelayForForwardedBulletins
@property (retain, nonatomic) NSString *teamID; // ivar: _teamID
@property (retain, nonatomic) NSString *threadID; // ivar: _threadID
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) BOOL turnsOnDisplay; // ivar: _turnsOnDisplay
@property (retain, nonatomic) NSString *universalSectionID; // ivar: _universalSectionID


+(id)_handleThumbnailResponse:(id)arg0 attachmentMetadata:(id)arg1 transcodedAttachmentSaveURL:(id)arg2 wantsData:(BOOL)arg3 imageContentType:(id)arg4 ;
+(id)bulletinWithBBBulletin:(id)arg0 sockPuppetAppBundleID:(id)arg1 observer:(id)arg2 feed:(NSUInteger)arg3 teamID:(id)arg4 universalSectionID:(id)arg5 shouldUseExpirationDate:(BOOL)arg6 replyToken:(id)arg7 gizmoLegacyPublisherBulletinID:(id)arg8 gizmoLegacyCategoryID:(id)arg9 gizmoSectionID:(id)arg10 gizmoSectionSubtype:(id)arg11 useUserInfoForContext:(BOOL)arg12 removeSubtitleForOlderWatches:(BOOL)arg13 ;
+(id)imageContentTypeForImageAttachment:(id)arg0 ;
+(void)_addAttachmentsFromBBBulletin:(id)arg0 toBLTPBBulletin:(id)arg1 observer:(id)arg2 attachOption:(NSUInteger)arg3 completion:(id)arg4 ;
+(void)_attachmentFromBBAttachmentMetadata:(id)arg0 bulletin:(id)arg1 observer:(id)arg2 fileOption:(NSUInteger)arg3 attachOption:(NSUInteger)arg4 completion:(id)arg5 ;
+(void)bulletinWithBBBulletin:(id)arg0 sockPuppetAppBundleID:(id)arg1 observer:(id)arg2 feed:(NSUInteger)arg3 teamID:(id)arg4 universalSectionID:(id)arg5 shouldUseExpirationDate:(BOOL)arg6 replyToken:(id)arg7 gizmoLegacyPublisherBulletinID:(id)arg8 gizmoLegacyCategoryID:(id)arg9 gizmoSectionID:(id)arg10 gizmoSectionSubtype:(id)arg11 useUserInfoForContext:(BOOL)arg12 removeSubtitleForOlderWatches:(BOOL)arg13 attachOption:(NSUInteger)arg14 completion:(id)arg15 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)additionalAttachmentsAtIndex:(NSUInteger)arg0 ;
-(id)attachmentKey:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)description;
-(id)dictionaryRepresentation;
-(id)peopleIDsAtIndex:(NSUInteger)arg0 ;
-(id)publisherMatchID;
-(id)subsectionIDsAtIndex:(NSUInteger)arg0 ;
-(id)supplementaryActionsAtIndex:(NSUInteger)arg0 ;
-(void)addAdditionalAttachments:(id)arg0 ;
-(void)addPeopleIDs:(id)arg0 ;
-(void)addSubsectionIDs:(id)arg0 ;
-(void)addSupplementaryActions:(id)arg0 ;
-(void)clearAdditionalAttachments;
-(void)clearPeopleIDs;
-(void)clearSupplementaryActions;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif