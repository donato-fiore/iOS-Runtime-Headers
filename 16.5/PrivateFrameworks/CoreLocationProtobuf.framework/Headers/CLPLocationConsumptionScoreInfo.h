// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLPLOCATIONCONSUMPTIONSCOREINFO_H
#define CLPLOCATIONCONSUMPTIONSCOREINFO_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface CLPLocationConsumptionScoreInfo : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *clientKey; // ivar: _clientKey
@property (readonly, nonatomic) BOOL hasClientKey;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) BOOL hasStartTime;
@property (nonatomic) BOOL hasStopTime;
@property (nonatomic) int score; // ivar: _score
@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (nonatomic) CGFloat stopTime; // ivar: _stopTime


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