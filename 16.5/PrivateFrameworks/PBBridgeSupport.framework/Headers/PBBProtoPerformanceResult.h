// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBBPROTOPERFORMANCERESULT_H
#define PBBPROTOPERFORMANCERESULT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface PBBProtoPerformanceResult : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *activityType; // ivar: _activityType
@property (readonly, nonatomic) BOOL hasActivityType;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasTimeDelta;
@property (nonatomic) BOOL hasTimeEnded;
@property (nonatomic) BOOL hasTimeStarted;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) CGFloat timeDelta; // ivar: _timeDelta
@property (nonatomic) CGFloat timeEnded; // ivar: _timeEnded
@property (nonatomic) CGFloat timeStarted; // ivar: _timeStarted


+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)detailedDescription;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif