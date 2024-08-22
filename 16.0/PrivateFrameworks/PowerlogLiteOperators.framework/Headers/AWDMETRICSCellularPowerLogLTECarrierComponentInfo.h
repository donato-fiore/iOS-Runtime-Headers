// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AWDMETRICSCELLULARPOWERLOGLTECARRIERCOMPONENTINFO_H
#define AWDMETRICSCELLULARPOWERLOGLTECARRIERCOMPONENTINFO_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface AWDMETRICSCellularPowerLogLTECarrierComponentInfo : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *carrierInfos; // ivar: _carrierInfos
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned int subsId; // ivar: _subsId
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


+(Class)carrierInfoType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)carrierInfoAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addCarrierInfo:(id)arg0 ;
-(void)clearCarrierInfos;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif