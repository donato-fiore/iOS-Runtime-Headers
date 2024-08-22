// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXPBDIGESTONBOARDINGLOGGINGEVENT_H
#define ATXPBDIGESTONBOARDINGLOGGINGEVENT_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface ATXPBDigestOnboardingLoggingEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *deliveryTimes; // ivar: _deliveryTimes
@property (nonatomic) BOOL didSelectShowMore; // ivar: _didSelectShowMore
@property (nonatomic) int digestOnboardingOutcome; // ivar: _digestOnboardingOutcome
@property (nonatomic) int entrySource; // ivar: _entrySource
@property (nonatomic) int finalUIShown; // ivar: _finalUIShown
@property (nonatomic) BOOL hasDidSelectShowMore;
@property (nonatomic) BOOL hasDigestOnboardingOutcome;
@property (nonatomic) BOOL hasEntrySource;
@property (nonatomic) BOOL hasFinalUIShown;
@property (readonly, nonatomic) BOOL hasSessionUUID;
@property (nonatomic) BOOL hasTimeTaken;
@property (retain, nonatomic) NSString *sessionUUID; // ivar: _sessionUUID
@property (nonatomic) CGFloat timeTaken; // ivar: _timeTaken


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deliveryTimesAtIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)digestOnboardingOutcomeAsString:(int)arg0 ;
-(id)entrySourceAsString:(int)arg0 ;
-(id)finalUIShownAsString:(int)arg0 ;
-(int)StringAsDigestOnboardingOutcome:(id)arg0 ;
-(int)StringAsEntrySource:(id)arg0 ;
-(int)StringAsFinalUIShown:(id)arg0 ;
-(void)addDeliveryTimes:(id)arg0 ;
-(void)clearDeliveryTimes;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif