// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOLOGMSGSTATEDEVICEBASE_H
#define GEOLOGMSGSTATEDEVICEBASE_H

@class PBCodable;
@protocol NSCopying;



@interface GEOLogMsgStateDeviceBase : PBCodable <NSCopying>

 {
    int _deviceBatteryState;
    int _deviceInterfaceOrientation;
    BOOL _deviceInVehicle;
    ? _flags;
}


@property (nonatomic) int deviceBatteryState;
@property (nonatomic) BOOL deviceInVehicle;
@property (nonatomic) int deviceInterfaceOrientation;
@property (nonatomic) BOOL hasDeviceBatteryState;
@property (nonatomic) BOOL hasDeviceInVehicle;
@property (nonatomic) BOOL hasDeviceInterfaceOrientation;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)deviceBatteryStateAsString:(int)arg0 ;
-(id)deviceInterfaceOrientationAsString:(int)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(int)StringAsDeviceBatteryState:(id)arg0 ;
-(int)StringAsDeviceInterfaceOrientation:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif