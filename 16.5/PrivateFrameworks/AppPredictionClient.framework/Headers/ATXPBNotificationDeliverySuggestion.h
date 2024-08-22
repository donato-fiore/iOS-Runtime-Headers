// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXPBNOTIFICATIONDELIVERYSUGGESTION_H
#define ATXPBNOTIFICATIONDELIVERYSUGGESTION_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "ATXPBInterruptionManagerTuningSuggestion.h"
#import "ATXPBNotificationPromotingSuggestion.h"
#import "ATXPBNotificationQuietingSuggestion.h"
#import "ATXPBSendMessagesToDigestSuggestion.h"
#import "ATXPBSendToDigestSuggestion.h"
#import "ATXPBNotificationSmartPauseSuggestion.h"
#import "ATXPBTurnOffNotificationsForAppSuggestion.h"
#import "ATXPBUrgencyTuningSuggestion.h"

@interface ATXPBNotificationDeliverySuggestion : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *entityIdentifier; // ivar: _entityIdentifier
@property (readonly, nonatomic) BOOL hasEntityIdentifier;
@property (readonly, nonatomic) BOOL hasInterruptionManagerTuning;
@property (nonatomic) BOOL hasOneofNotificationDeliverySuggestion;
@property (readonly, nonatomic) BOOL hasPromoting;
@property (readonly, nonatomic) BOOL hasQuieting;
@property (nonatomic) BOOL hasScope;
@property (readonly, nonatomic) BOOL hasSendMessagesToDigest;
@property (readonly, nonatomic) BOOL hasSendToDigest;
@property (readonly, nonatomic) BOOL hasSmartPause;
@property (nonatomic) BOOL hasTimestamp;
@property (readonly, nonatomic) BOOL hasTriggerNotificationUUID;
@property (readonly, nonatomic) BOOL hasTurnOffNotificationsForApp;
@property (readonly, nonatomic) BOOL hasUrgencyTuning;
@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) ATXPBInterruptionManagerTuningSuggestion *interruptionManagerTuning; // ivar: _interruptionManagerTuning
@property (nonatomic) int oneofNotificationDeliverySuggestion; // ivar: _oneofNotificationDeliverySuggestion
@property (retain, nonatomic) ATXPBNotificationPromotingSuggestion *promoting; // ivar: _promoting
@property (retain, nonatomic) ATXPBNotificationQuietingSuggestion *quieting; // ivar: _quieting
@property (nonatomic) int scope; // ivar: _scope
@property (retain, nonatomic) ATXPBSendMessagesToDigestSuggestion *sendMessagesToDigest; // ivar: _sendMessagesToDigest
@property (retain, nonatomic) ATXPBSendToDigestSuggestion *sendToDigest; // ivar: _sendToDigest
@property (retain, nonatomic) ATXPBNotificationSmartPauseSuggestion *smartPause; // ivar: _smartPause
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (retain, nonatomic) NSString *triggerNotificationUUID; // ivar: _triggerNotificationUUID
@property (retain, nonatomic) ATXPBTurnOffNotificationsForAppSuggestion *turnOffNotificationsForApp; // ivar: _turnOffNotificationsForApp
@property (retain, nonatomic) ATXPBUrgencyTuningSuggestion *urgencyTuning; // ivar: _urgencyTuning
@property (retain, nonatomic) NSString *uuid; // ivar: _uuid


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)oneofNotificationDeliverySuggestionAsString:(int)arg0 ;
-(int)StringAsOneofNotificationDeliverySuggestion:(id)arg0 ;
-(void)clearOneofValuesForOneofNotificationDeliverySuggestion;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif