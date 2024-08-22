// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMPBSLEEPMODEEVENT_H
#define BMPBSLEEPMODEEVENT_H

@class PBCodable;
@protocol NSCopying;



@interface BMPBSleepModeEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat expectedEndDate; // ivar: _expectedEndDate
@property (nonatomic) BOOL hasExpectedEndDate;
@property (nonatomic) BOOL hasSleepModeChangeReason;
@property (nonatomic) BOOL hasSleepModeState;
@property (nonatomic) int sleepModeChangeReason; // ivar: _sleepModeChangeReason
@property (nonatomic) int sleepModeState; // ivar: _sleepModeState


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)sleepModeChangeReasonAsString:(int)arg0 ;
-(id)sleepModeStateAsString:(int)arg0 ;
-(int)StringAsSleepModeChangeReason:(id)arg0 ;
-(int)StringAsSleepModeState:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif