// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXPBNOTIFICATIONSMARTPAUSESUGGESTION_H
#define ATXPBNOTIFICATIONSMARTPAUSESUGGESTION_H

@class PBCodable;
@protocol NSCopying;



@interface ATXPBNotificationSmartPauseSuggestion : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat expirationTimestamp; // ivar: _expirationTimestamp
@property (nonatomic) BOOL hasExpirationTimestamp;
@property (nonatomic) BOOL hasPauseDuration;
@property (nonatomic) CGFloat pauseDuration; // ivar: _pauseDuration


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