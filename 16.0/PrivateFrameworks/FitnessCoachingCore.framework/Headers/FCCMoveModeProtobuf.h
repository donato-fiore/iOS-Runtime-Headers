// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCCMOVEMODEPROTOBUF_H
#define FCCMOVEMODEPROTOBUF_H

@class PBCodable;
@protocol NSCopying;



@interface FCCMoveModeProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int delay; // ivar: _delay
@property (nonatomic) BOOL hasDelay;
@property (nonatomic) BOOL hasNextActivityMoveMode;
@property (nonatomic) BOOL hasNextActivityMoveModeStartDate;
@property (nonatomic) BOOL hasNotificationType;
@property (nonatomic) NSInteger nextActivityMoveMode; // ivar: _nextActivityMoveMode
@property (nonatomic) CGFloat nextActivityMoveModeStartDate; // ivar: _nextActivityMoveModeStartDate
@property (nonatomic) NSInteger notificationType; // ivar: _notificationType


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