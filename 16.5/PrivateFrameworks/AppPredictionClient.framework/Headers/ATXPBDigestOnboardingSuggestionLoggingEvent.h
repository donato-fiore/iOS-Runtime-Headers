// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXPBDIGESTONBOARDINGSUGGESTIONLOGGINGEVENT_H
#define ATXPBDIGESTONBOARDINGSUGGESTIONLOGGINGEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ATXPBDigestOnboardingSuggestionLoggingEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int digestOnboardingSuggestionOutcome; // ivar: _digestOnboardingSuggestionOutcome
@property (nonatomic) BOOL hasDigestOnboardingSuggestionOutcome;
@property (readonly, nonatomic) BOOL hasSessionUUID;
@property (nonatomic) BOOL hasTimeToResolution;
@property (retain, nonatomic) NSString *sessionUUID; // ivar: _sessionUUID
@property (nonatomic) CGFloat timeToResolution; // ivar: _timeToResolution


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)digestOnboardingSuggestionOutcomeAsString:(int)arg0 ;
-(int)StringAsDigestOnboardingSuggestionOutcome:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif