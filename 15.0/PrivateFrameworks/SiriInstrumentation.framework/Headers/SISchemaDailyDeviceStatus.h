// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SISCHEMADAILYDEVICESTATUS_H
#define SISCHEMADAILYDEVICESTATUS_H

@class NSString, NSData, NSArray;


#import "SISchemaTopLevelUnionType.h"
#import "SISchemaActiveStatus.h"
#import "SISchemaAggregatedMetrics.h"
#import "SISchemaEnabledStatus.h"
#import "SISchemaMultiUserSetup.h"
#import "SISchemaMultiUserState.h"
#import "SISchemaPersonalization.h"

@interface SISchemaDailyDeviceStatus : SISchemaTopLevelUnionType {
    ? _has;
}


@property (retain, nonatomic) SISchemaActiveStatus *activeStatus; // ivar: _activeStatus
@property (retain, nonatomic) SISchemaAggregatedMetrics *aggregatedMetrics; // ivar: _aggregatedMetrics
@property (nonatomic) NSInteger assistantRecordPublishTimestampMs; // ivar: _assistantRecordPublishTimestampMs
@property (nonatomic) NSInteger clientDeviceSamplingTimestampMs; // ivar: _clientDeviceSamplingTimestampMs
@property (copy, nonatomic) NSString *deviceBuild; // ivar: _deviceBuild
@property (copy, nonatomic) NSString *deviceOs; // ivar: _deviceOs
@property (copy, nonatomic) NSString *deviceType; // ivar: _deviceType
@property (retain, nonatomic) SISchemaEnabledStatus *enabledStatus; // ivar: _enabledStatus
@property (nonatomic) BOOL hasActiveStatus; // ivar: _hasActiveStatus
@property (nonatomic) BOOL hasAggregatedMetrics; // ivar: _hasAggregatedMetrics
@property (nonatomic) BOOL hasAssistantRecordPublishTimestampMs;
@property (nonatomic) BOOL hasClientDeviceSamplingTimestampMs;
@property (nonatomic) BOOL hasDeviceBuild; // ivar: _hasDeviceBuild
@property (nonatomic) BOOL hasDeviceOs; // ivar: _hasDeviceOs
@property (nonatomic) BOOL hasDeviceType; // ivar: _hasDeviceType
@property (nonatomic) BOOL hasEnabledStatus; // ivar: _hasEnabledStatus
@property (nonatomic) BOOL hasLocale; // ivar: _hasLocale
@property (nonatomic) BOOL hasMultiUserSetup; // ivar: _hasMultiUserSetup
@property (nonatomic) BOOL hasMultiUserState; // ivar: _hasMultiUserState
@property (nonatomic) BOOL hasPersonalization; // ivar: _hasPersonalization
@property (nonatomic) BOOL hasSharedUserId; // ivar: _hasSharedUserId
@property (nonatomic) BOOL hasSiriDeviceID; // ivar: _hasSiriDeviceID
@property (nonatomic) BOOL hasSiriInputLocale;
@property (nonatomic) BOOL hasSiriSpeechID; // ivar: _hasSiriSpeechID
@property (nonatomic) BOOL hasSpokenNotificationsControlCenterModuleEnabled;
@property (nonatomic) BOOL hasSpokenNotificationsWhitelistSettings;
@property (nonatomic) BOOL hasSpokenNotificationsproxCardSeen;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *linkedAccessoryStates; // ivar: _linkedAccessoryStates
@property (copy, nonatomic) NSString *locale; // ivar: _locale
@property (retain, nonatomic) SISchemaMultiUserSetup *multiUserSetup; // ivar: _multiUserSetup
@property (retain, nonatomic) SISchemaMultiUserState *multiUserState; // ivar: _multiUserState
@property (retain, nonatomic) SISchemaPersonalization *personalization; // ivar: _personalization
@property (copy, nonatomic) NSString *sharedUserId; // ivar: _sharedUserId
@property (copy, nonatomic) NSString *siriDeviceID; // ivar: _siriDeviceID
@property (nonatomic) int siriInputLocale; // ivar: _siriInputLocale
@property (copy, nonatomic) NSString *siriSpeechID; // ivar: _siriSpeechID
@property (nonatomic) BOOL spokenNotificationsControlCenterModuleEnabled; // ivar: _spokenNotificationsControlCenterModuleEnabled
@property (nonatomic) int spokenNotificationsWhitelistSettings; // ivar: _spokenNotificationsWhitelistSettings
@property (nonatomic) BOOL spokenNotificationsproxCardSeen; // ivar: _spokenNotificationsproxCardSeen


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)linkedAccessoryStateCount;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)linkedAccessoryStateAtIndex:(NSUInteger)arg0 ;
-(id)qualifiedMessageName;
-(int)getAnyEventType;
-(void)addLinkedAccessoryState:(id)arg0 ;
-(void)clearLinkedAccessoryState;
-(void)writeTo:(id)arg0 ;


@end


#endif