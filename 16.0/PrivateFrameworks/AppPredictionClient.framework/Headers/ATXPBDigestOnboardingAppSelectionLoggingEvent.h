// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXPBDIGESTONBOARDINGAPPSELECTIONLOGGINGEVENT_H
#define ATXPBDIGESTONBOARDINGAPPSELECTIONLOGGINGEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ATXPBDigestOnboardingAppSelectionLoggingEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL addedToDigest; // ivar: _addedToDigest
@property (nonatomic) unsigned int avgNumBasicNotifications; // ivar: _avgNumBasicNotifications
@property (nonatomic) unsigned int avgNumMessageNotifications; // ivar: _avgNumMessageNotifications
@property (nonatomic) unsigned int avgNumTimeSensitiveNonMessageNotifications; // ivar: _avgNumTimeSensitiveNonMessageNotifications
@property (retain, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (nonatomic) BOOL hasAddedToDigest;
@property (nonatomic) BOOL hasAvgNumBasicNotifications;
@property (nonatomic) BOOL hasAvgNumMessageNotifications;
@property (nonatomic) BOOL hasAvgNumTimeSensitiveNonMessageNotifications;
@property (readonly, nonatomic) BOOL hasBundleId;
@property (nonatomic) BOOL hasRank;
@property (readonly, nonatomic) BOOL hasSessionUUID;
@property (nonatomic) BOOL hasWasShownInDigestOnboarding;
@property (nonatomic) unsigned int rank; // ivar: _rank
@property (retain, nonatomic) NSString *sessionUUID; // ivar: _sessionUUID
@property (nonatomic) BOOL wasShownInDigestOnboarding; // ivar: _wasShownInDigestOnboarding


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif