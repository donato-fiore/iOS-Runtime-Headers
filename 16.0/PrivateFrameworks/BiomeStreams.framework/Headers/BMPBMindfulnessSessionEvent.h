// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMPBMINDFULNESSSESSIONEVENT_H
#define BMPBMINDFULNESSSESSIONEVENT_H

@class PBCodable;
@protocol NSCopying;



@interface BMPBMindfulnessSessionEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasSessionType;
@property (nonatomic) BOOL hasStateType;
@property (nonatomic) int sessionType; // ivar: _sessionType
@property (nonatomic) int stateType; // ivar: _stateType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)sessionTypeAsString:(int)arg0 ;
-(id)stateTypeAsString:(int)arg0 ;
-(int)StringAsSessionType:(id)arg0 ;
-(int)StringAsStateType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif