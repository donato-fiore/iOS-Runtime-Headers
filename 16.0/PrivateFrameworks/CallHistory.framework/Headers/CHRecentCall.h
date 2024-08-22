// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHRECENTCALL_H
#define CHRECENTCALL_H

@class NSString, NSNumber, NSArray, CNContact, NSDate, NSDictionary, NSURL, INInteraction, NSDateInterval, NSUUID, NSSet;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CHPhoneBookIOSManager.h"

@interface CHRecentCall : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *addressBookCallerIDMultiValueId; // ivar: _addressBookCallerIDMultiValueId
@property (copy, nonatomic) NSString *addressBookRecordId; // ivar: _addressBookRecordId
@property BOOL answered; // ivar: _answered
@property (retain, nonatomic) NSNumber *bytesOfDataUsed; // ivar: _bytesOfDataUsed
@property (nonatomic) unsigned int callCategory; // ivar: _callCategory
@property (copy, nonatomic) NSArray *callOccurrences; // ivar: _callOccurrences
@property (nonatomic) unsigned int callStatus; // ivar: _callStatus
@property (nonatomic) unsigned int callType; // ivar: _callType
@property (copy, nonatomic) NSString *callerId; // ivar: _callerId
@property (nonatomic) unsigned int callerIdAvailability; // ivar: _callerIdAvailability
@property (copy, nonatomic, getter=callerIdForDisplay) NSString *callerIdFormatted; // ivar: _callerIdFormatted
@property (nonatomic) BOOL callerIdIsBlocked; // ivar: _callerIdIsBlocked
@property (copy, nonatomic) NSString *callerIdLabel; // ivar: _callerIdLabel
@property (copy, nonatomic) NSString *callerIdLocation; // ivar: _callerIdLocation
@property (copy, nonatomic) NSString *callerName; // ivar: _callerName
@property (readonly, copy) NSString *callerNetworkFirstName;
@property (copy, nonatomic) NSString *callerNetworkName;
@property (readonly, copy) NSString *callerNetworkSecondName;
@property (copy, nonatomic) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (copy, nonatomic) CNContact *contactRef; // ivar: _contactRef
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (copy, nonatomic) NSString *devicePhoneId; // ivar: _devicePhoneId
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (retain, nonatomic) NSNumber *disconnectedCause; // ivar: _disconnectedCause
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (retain, nonatomic) NSNumber *filteredOutReason; // ivar: _filteredOutReason
@property (nonatomic) NSInteger handleType; // ivar: _handleType
@property (retain, nonatomic) NSURL *imageURL; // ivar: _imageURL
@property (readonly, nonatomic) INInteraction *interaction;
@property (readonly, nonatomic) NSDateInterval *interactionDateInterval;
@property (readonly, nonatomic) BOOL isJunk;
@property (copy, nonatomic) NSString *isoCountryCode; // ivar: _isoCountryCode
@property (nonatomic) NSInteger junkConfidence; // ivar: _junkConfidence
@property (retain, nonatomic) NSUUID *localParticipantUUID; // ivar: _localParticipantUUID
@property (nonatomic) NSInteger mediaType; // ivar: _mediaType
@property (copy, nonatomic) NSString *mobileCountryCode; // ivar: _mobileCountryCode
@property (copy, nonatomic) NSString *mobileNetworkCode; // ivar: _mobileNetworkCode
@property BOOL mobileOriginated; // ivar: _mobileOriginated
@property (nonatomic) BOOL multiCall; // ivar: _multiCall
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSString *notificationThreadIdentifier;
@property (retain, nonatomic) NSUUID *outgoingLocalParticipantUUID; // ivar: _outgoingLocalParticipantUUID
@property (retain, nonatomic) NSUUID *participantGroupUUID; // ivar: _participantGroupUUID
@property (retain, nonatomic) CHPhoneBookIOSManager *phoneBookManager; // ivar: _phoneBookManager
@property (nonatomic) BOOL read; // ivar: _read
@property (copy, nonatomic) NSSet *remoteParticipantHandles; // ivar: _remoteParticipantHandles
@property (copy, nonatomic) NSString *serviceProvider; // ivar: _serviceProvider
@property (retain, nonatomic) NSNumber *timeToEstablish; // ivar: _timeToEstablish
@property (nonatomic) NSInteger ttyType; // ivar: _ttyType
@property (copy, nonatomic) NSString *uniqueId; // ivar: _uniqueId
@property (nonatomic) NSUInteger unreadCount; // ivar: _unreadCount
@property (nonatomic) NSInteger verificationStatus; // ivar: _verificationStatus


+(BOOL)supportsSecureCoding;
+(NSInteger)mediaTypeForCallCategory:(unsigned int)arg0 ;
+(NSInteger)ttyTypeForCallCategory:(unsigned int)arg0 ;
+(id)callCategoryAsString:(unsigned int)arg0 ;
+(id)callHandleTypeAsString:(NSInteger)arg0 ;
+(id)callMediaTypeAsString:(NSInteger)arg0 ;
+(id)callStatusAsString:(unsigned int)arg0 ;
+(id)callTTYTypeAsString:(NSInteger)arg0 ;
+(id)callTypeAsString:(unsigned int)arg0 ;
+(id)getLocationForCallerId:(id)arg0 andIsoCountryCode:(id)arg1 ;
+(id)predicateForCallsBetweenStartDate:(id)arg0 endDate:(id)arg1 ;
+(id)predicateForCallsLessThanDate:(id)arg0 ;
+(id)predicateForCallsWithAnyMediaTypes:(id)arg0 ;
+(id)predicateForCallsWithAnyRemoteParticipantHandleNormalizedValues:(id)arg0 ;
+(id)predicateForCallsWithAnyRemoteParticipantHandleTypes:(id)arg0 ;
+(id)predicateForCallsWithAnyRemoteParticipantHandleValues:(id)arg0 ;
+(id)predicateForCallsWithAnyRemoteParticipantHandles:(id)arg0 ;
+(id)predicateForCallsWithAnyServiceProviders:(id)arg0 ;
+(id)predicateForCallsWithAnyTTYTypes:(id)arg0 ;
+(id)predicateForCallsWithAnyUniqueIDs:(id)arg0 ;
+(id)predicateForCallsWithCategory:(unsigned int)arg0 ;
+(id)predicateForCallsWithMediaType:(NSInteger)arg0 ;
+(id)predicateForCallsWithRemoteParticipantCount:(NSInteger)arg0 ;
+(id)predicateForCallsWithRemoteParticipantHandle:(id)arg0 ;
+(id)predicateForCallsWithRemoteParticipantHandleNormalizedValue:(id)arg0 ;
+(id)predicateForCallsWithRemoteParticipantHandleType:(NSInteger)arg0 ;
+(id)predicateForCallsWithRemoteParticipantHandleValue:(id)arg0 ;
+(id)predicateForCallsWithServiceProvider:(id)arg0 ;
+(id)predicateForCallsWithStatus:(unsigned int)arg0 ;
+(id)predicateForCallsWithStatusAnswered:(BOOL)arg0 ;
+(id)predicateForCallsWithStatusJunk:(BOOL)arg0 ;
+(id)predicateForCallsWithStatusOriginated:(BOOL)arg0 ;
+(id)predicateForCallsWithStatusRead:(BOOL)arg0 ;
+(id)predicateForCallsWithTTYType:(NSInteger)arg0 ;
+(id)predicateForCallsWithUniqueID:(id)arg0 ;
+(id)serviceProviderForCallType:(unsigned int)arg0 ;
+(id)unarchivedObjectClasses;
+(id)unarchivedObjectFromData:(id)arg0 error:(*id)arg1 ;
+(unsigned int)categoryForCallType:(unsigned int)arg0 ;
+(unsigned int)categoryForMediaType:(NSInteger)arg0 andTTYType:(NSInteger)arg1 ;
+(unsigned int)getCallTypeForCategory:(unsigned int)arg0 andServiceProvider:(id)arg1 ;
-(BOOL)canCoalesceRemoteParticipantHandlesFromCall:(id)arg0 ;
-(BOOL)canCoalesceSyncWithRecentsStrategyWithCall:(id)arg0 ;
-(BOOL)canCoalesceWithCall:(id)arg0 withStrategy:(id)arg1 ;
-(BOOL)coalesceWithCall:(id)arg0 withStrategy:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRecentCall:(id)arg0 ;
-(NSInteger)countOfExcludedHandles;
-(NSUInteger)hash;
-(NSUInteger)numberOfOccurrences;
-(id)archivedDataWithError:(*id)arg0 ;
-(id)callOccurrencesArrayByAddingCallOccurrencesFromArray:(id)arg0 ;
-(id)coalescedCallWithCall:(id)arg0 usingStrategy:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)getLocalizedString:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)validRemoteParticipantHandles;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fetchAndSetContactIdentifier;
-(void)fetchAndSetFullContact;
-(void)fixCallTypeInfo;


@end


#endif