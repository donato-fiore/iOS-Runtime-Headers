// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LIGHTHOUSE_BITACORA_PROTOSCHEDULESTATUS_H
#define LIGHTHOUSE_BITACORA_PROTOSCHEDULESTATUS_H

@class PBCodable;
@protocol NSCopying;



@interface LIGHTHOUSE_BITACORA_PROTOScheduleStatus : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasScheduled;
@property (nonatomic) BOOL scheduled; // ivar: _scheduled


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