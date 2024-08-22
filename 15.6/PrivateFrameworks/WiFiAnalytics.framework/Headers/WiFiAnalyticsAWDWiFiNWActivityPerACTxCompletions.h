// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WIFIANALYTICSAWDWIFINWACTIVITYPERACTXCOMPLETIONS_H
#define WIFIANALYTICSAWDWIFINWACTIVITYPERACTXCOMPLETIONS_H

@class PBCodable;
@protocol NSCopying;



@interface WiFiAnalyticsAWDWiFiNWActivityPerACTxCompletions : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int ac; // ivar: _ac
@property (nonatomic) unsigned int dpsNotifications; // ivar: _dpsNotifications
@property (nonatomic) unsigned int durSinceLastEnqueue; // ivar: _durSinceLastEnqueue
@property (nonatomic) unsigned int durSinceLastEnqueueAtLastCheck; // ivar: _durSinceLastEnqueueAtLastCheck
@property (nonatomic) unsigned int durSinceLastFailedComp; // ivar: _durSinceLastFailedComp
@property (nonatomic) unsigned int durSinceLastSuccessfulComp; // ivar: _durSinceLastSuccessfulComp
@property (nonatomic) unsigned int expiredComp; // ivar: _expiredComp
@property (nonatomic) unsigned int failedComp; // ivar: _failedComp
@property (nonatomic) unsigned int failedCompletionsAtLastCheck; // ivar: _failedCompletionsAtLastCheck
@property (nonatomic) BOOL hasAc;
@property (nonatomic) BOOL hasDpsNotifications;
@property (nonatomic) BOOL hasDurSinceLastEnqueue;
@property (nonatomic) BOOL hasDurSinceLastEnqueueAtLastCheck;
@property (nonatomic) BOOL hasDurSinceLastFailedComp;
@property (nonatomic) BOOL hasDurSinceLastSuccessfulComp;
@property (nonatomic) BOOL hasExpiredComp;
@property (nonatomic) BOOL hasFailedComp;
@property (nonatomic) BOOL hasFailedCompletionsAtLastCheck;
@property (nonatomic) BOOL hasNoAckComp;
@property (nonatomic) BOOL hasOtherErrComp;
@property (nonatomic) BOOL hasQeuedPackets;
@property (nonatomic) BOOL hasSinceLastEnqueueHowManyFailed;
@property (nonatomic) BOOL hasSinceLastEnqueueHowManySuccess;
@property (nonatomic) BOOL hasSinceLastSuccessHowManyFailed;
@property (nonatomic) BOOL hasSuccess;
@property (nonatomic) BOOL hasSuccessfulCompletionsAtLastCheck;
@property (nonatomic) unsigned int noAckComp; // ivar: _noAckComp
@property (nonatomic) unsigned int otherErrComp; // ivar: _otherErrComp
@property (nonatomic) unsigned int qeuedPackets; // ivar: _qeuedPackets
@property (nonatomic) unsigned int sinceLastEnqueueHowManyFailed; // ivar: _sinceLastEnqueueHowManyFailed
@property (nonatomic) unsigned int sinceLastEnqueueHowManySuccess; // ivar: _sinceLastEnqueueHowManySuccess
@property (nonatomic) unsigned int sinceLastSuccessHowManyFailed; // ivar: _sinceLastSuccessHowManyFailed
@property (nonatomic) unsigned int success; // ivar: _success
@property (nonatomic) unsigned int successfulCompletionsAtLastCheck; // ivar: _successfulCompletionsAtLastCheck


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)acAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsAc:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif