// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASCODABLECLOUDKITSAMPLE_H
#define ASCODABLECLOUDKITSAMPLE_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface ASCodableCloudKitSample : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat endDate; // ivar: _endDate
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) BOOL hasStartDate;
@property (readonly, nonatomic) BOOL hasUuid;
@property (nonatomic) CGFloat startDate; // ivar: _startDate
@property (retain, nonatomic) NSData *uuid; // ivar: _uuid


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