// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVRMSTOUCHMESSAGE_H
#define TVRMSTOUCHMESSAGE_H

@class PBCodable;
@protocol NSCopying;



@interface TVRMSTouchMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int direction; // ivar: _direction
@property (nonatomic) BOOL hasDirection;
@property (nonatomic) BOOL hasRepeatCount;
@property (nonatomic) BOOL hasSessionIdentifier;
@property (nonatomic) unsigned int repeatCount; // ivar: _repeatCount
@property (nonatomic) int sessionIdentifier; // ivar: _sessionIdentifier


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