// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLPINDOORCMPEDOMETER_H
#define CLPINDOORCMPEDOMETER_H

@class PBCodable;
@protocol NSCopying;



@interface CLPIndoorCMPedometer : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) float activeTime; // ivar: _activeTime
@property (nonatomic) float distance; // ivar: _distance
@property (nonatomic) CGFloat firstStepTime; // ivar: _firstStepTime
@property (nonatomic) int floorsAscended; // ivar: _floorsAscended
@property (nonatomic) int floorsDescended; // ivar: _floorsDescended
@property (nonatomic) BOOL hasActiveTime;
@property (nonatomic) BOOL hasDistance;
@property (nonatomic) BOOL hasFirstStepTime;
@property (nonatomic) BOOL hasFloorsAscended;
@property (nonatomic) BOOL hasFloorsDescended;
@property (nonatomic) BOOL hasNumberOfSteps;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int numberOfSteps; // ivar: _numberOfSteps
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


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