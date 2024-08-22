// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGENTITYTAG_H
#define SGENTITYTAG_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SGEntityTag : NSObject <NSCopying>



@property (readonly, nonatomic) BOOL indexed; // ivar: _indexed
@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) BOOL stored; // ivar: _stored
@property (readonly, nonatomic) BOOL tracked; // ivar: _tracked
@property (readonly, nonatomic) NSString *value; // ivar: _value


+(id)allDay;
+(id)allTags;
+(id)appleMailMessageId:(id)arg0 fromSource:(id)arg1 ;
+(id)calendarAppUsageLevel:(float)arg0 ;
+(id)categoryTagWithCategoryType:(int)arg0 ;
+(id)confidenceScore:(float)arg0 ;
+(id)contactDetail:(id)arg0 ;
+(id)containsEntityExtraction:(NSInteger)arg0 ;
+(id)defaultDuration;
+(id)domain:(id)arg0 ;
+(id)ekEventAvailabilityState:(id)arg0 ;
+(id)eventHash:(id)arg0 ;
+(id)eventMetadata:(id)arg0 ;
+(id)extraKey:(id)arg0 ;
+(id)extractedBoat;
+(id)extractedBus;
+(id)extractedCarRental;
+(id)extractedEvent;
+(id)extractedEventCancellation;
+(id)extractedFlight;
+(id)extractedFood;
+(id)extractedFromTemplateWithName:(id)arg0 ;
+(id)extractedFromTemplateWithShortName:(id)arg0 ;
+(id)extractedHotel;
+(id)extractedMovie;
+(id)extractedSocial;
+(id)extractedTicket;
+(id)extractedTrain;
+(id)fieldReverseMapped:(id)arg0 ;
+(id)fromCalendarAttachment;
+(id)fromExtractedDomain;
+(id)fromForwardedMessage;
+(id)fromInteraction;
+(id)fromReply;
+(id)fromSync;
+(id)fromTextMessage;
+(id)fullyDissected;
+(id)geocodingModeAddressOnly;
+(id)geocodingModeAddressThenPOI;
+(id)geocodingModeAddressWithCanonicalSearch;
+(id)geocodingModePOIOnly;
+(id)hardName;
+(id)human;
+(id)inhuman;
+(id)intentResponseUserActivityString:(id)arg0 ;
+(id)interactionBundleId:(id)arg0 ;
+(id)interactionContactIdentifier:(id)arg0 ;
+(id)interactionGroupId:(id)arg0 ;
+(id)interactionId:(id)arg0 ;
+(id)interactionTeamId:(id)arg0 ;
+(id)isPartiallyDownloaded;
+(id)isSent;
+(id)mailAppUsageLevel:(unsigned char)arg0 ;
+(id)mailingListId:(id)arg0 ;
+(id)messageWithMailMessageKey:(id)arg0 ;
+(id)messageWithMessageId:(id)arg0 fromSource:(id)arg1 ;
+(id)messagesAppUsageLevel:(unsigned char)arg0 ;
+(id)naturalLanguageEvent;
+(id)naturalLanguageEventAttributes:(NSUInteger)arg0 ;
+(id)naturalLanguageEventLanguageID:(id)arg0 ;
+(id)naturalLanguageEventTypeIdentifier:(id)arg0 ;
+(id)participantCount:(unsigned char)arg0 ;
+(id)poiFilters:(id)arg0 ;
+(id)remember:(id)arg0 ;
+(id)reminderHash:(id)arg0 ;
+(id)reminderMetadata:(id)arg0 ;
+(id)reservationContainerReference:(id)arg0 ;
+(id)reservationContainerReferenceWithData:(id)arg0 ;
+(id)reservationItemReferences:(id)arg0 ;
+(id)reservationItemReferencesWithData:(id)arg0 ;
+(id)resolveName:(id)arg0 ;
+(id)schemaOrg:(id)arg0 ;
+(id)significantSender;
+(id)tagForLabel:(id)arg0 value:(id)arg1 ;
+(id)templateException;
+(id)testTag:(int)arg0 ;
+(id)textCalendarAttachment:(id)arg0 ;
+(id)timezoneIdentifier:(id)arg0 ;
+(id)titleGeneratedFromSubject;
+(id)titleGeneratedFromTemplate;
+(id)url:(id)arg0 ;
+(id)usedBubblesCount:(unsigned char)arg0 ;
+(void)initialize;
+(void)rememberLabel:(id)arg0 stored:(BOOL)arg1 indexed:(BOOL)arg2 tracked:(BOOL)arg3 ;
+(void)tombstoneLabel:(id)arg0 ;
-(BOOL)isAppleMailMessageId;
-(BOOL)isCalendarAppUsageLevel;
-(BOOL)isConfidenceScore;
-(BOOL)isContactDetail;
-(BOOL)isDomain;
-(BOOL)isEKEventAvailabilityState;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToEntityTag:(id)arg0 ;
-(BOOL)isEventHash;
-(BOOL)isEventMetadata;
-(BOOL)isExtraKey;
-(BOOL)isExtractedEventCategory;
-(BOOL)isFieldReverseMapped;
-(BOOL)isIntentResponseUserActivityString;
-(BOOL)isInteractionBundleId;
-(BOOL)isInteractionContactIdentifier;
-(BOOL)isInteractionGroupId;
-(BOOL)isInteractionId;
-(BOOL)isInteractionTeamId;
-(BOOL)isMailAppUsageLevel;
-(BOOL)isMailingListId;
-(BOOL)isMessagesAppUsageLevel;
-(BOOL)isNaturalLanguageEventAttributes;
-(BOOL)isNaturalLanguageEventLanguageID;
-(BOOL)isNaturalLanguageEventTypeIdentifier;
-(BOOL)isPOIFilters;
-(BOOL)isParticipantCount;
-(BOOL)isReminderHash;
-(BOOL)isReminderMetadata;
-(BOOL)isReservationContainerReference;
-(BOOL)isReservationItemReferences;
-(BOOL)isSchemaOrg;
-(BOOL)isTemplateName;
-(BOOL)isTemplateShortName;
-(BOOL)isUrl;
-(BOOL)isUsedBubblesCount;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)eventMetadata;
-(id)initWithLabel:(id)arg0 stored:(BOOL)arg1 indexed:(BOOL)arg2 tracked:(BOOL)arg3 ;
-(id)initWithLabel:(id)arg0 value:(id)arg1 stored:(BOOL)arg2 indexed:(BOOL)arg3 tracked:(BOOL)arg4 ;
-(id)intentResponseUserActivityString;
-(id)name;
-(id)reminderMetadata;
-(id)reservationContainerReference;
-(id)reservationItemReferences;


@end


#endif