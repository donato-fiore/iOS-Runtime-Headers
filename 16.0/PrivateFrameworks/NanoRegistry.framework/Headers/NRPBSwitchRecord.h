// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NRPBSWITCHRECORD_H
#define NRPBSWITCHRECORD_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface NRPBSwitchRecord : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat dateTimeInterval; // ivar: _dateTimeInterval
@property (retain, nonatomic) NSData *deviceIDBytes; // ivar: _deviceIDBytes
@property (nonatomic) BOOL hasDateTimeInterval;
@property (readonly, nonatomic) BOOL hasDeviceIDBytes;
@property (nonatomic) BOOL hasSwitchIndex;
@property (nonatomic) int switchIndex; // ivar: _switchIndex


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