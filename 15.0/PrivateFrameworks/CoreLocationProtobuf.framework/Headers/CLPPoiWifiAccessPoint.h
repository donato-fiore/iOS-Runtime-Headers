// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLPPOIWIFIACCESSPOINT_H
#define CLPPOIWIFIACCESSPOINT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface CLPPoiWifiAccessPoint : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat age; // ivar: _age
@property (nonatomic) int channel; // ivar: _channel
@property (nonatomic) BOOL hasAge;
@property (nonatomic) BOOL hasScanTimestamp;
@property (retain, nonatomic) NSString *mac; // ivar: _mac
@property (nonatomic) int rssi; // ivar: _rssi
@property (nonatomic) CGFloat scanTimestamp; // ivar: _scanTimestamp


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