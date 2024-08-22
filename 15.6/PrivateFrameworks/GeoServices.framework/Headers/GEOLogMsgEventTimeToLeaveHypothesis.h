// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOLOGMSGEVENTTIMETOLEAVEHYPOTHESIS_H
#define GEOLOGMSGEVENTTIMETOLEAVEHYPOTHESIS_H

@class PBCodable;
@protocol NSCopying;



@interface GEOLogMsgEventTimeToLeaveHypothesis : PBCodable <NSCopying>

 {
    CGFloat _earliestArrivalOffset;
    CGFloat _earliestDepartureOffset;
    CGFloat _latestArrivalOffset;
    CGFloat _latestDepartureOffset;
    int _arrival;
    int _departure;
    unsigned int _numberOfReroutes;
    int _ttlUiNotificationShown;
    ? _flags;
}


@property (nonatomic) int arrival;
@property (nonatomic) int departure;
@property (nonatomic) CGFloat earliestArrivalOffset;
@property (nonatomic) CGFloat earliestDepartureOffset;
@property (nonatomic) BOOL hasArrival;
@property (nonatomic) BOOL hasDeparture;
@property (nonatomic) BOOL hasEarliestArrivalOffset;
@property (nonatomic) BOOL hasEarliestDepartureOffset;
@property (nonatomic) BOOL hasLatestArrivalOffset;
@property (nonatomic) BOOL hasLatestDepartureOffset;
@property (nonatomic) BOOL hasNumberOfReroutes;
@property (nonatomic) BOOL hasTtlUiNotificationShown;
@property (nonatomic) CGFloat latestArrivalOffset;
@property (nonatomic) CGFloat latestDepartureOffset;
@property (nonatomic) unsigned int numberOfReroutes;
@property (nonatomic) int ttlUiNotificationShown;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)arrivalAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)departureAsString:(int)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)ttlUiNotificationShownAsString:(int)arg0 ;
-(int)StringAsArrival:(id)arg0 ;
-(int)StringAsDeparture:(id)arg0 ;
-(int)StringAsTtlUiNotificationShown:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif