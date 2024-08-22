// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDPBHOMELIGHTBRIGHTNESSEVENT_H
#define HMDPBHOMELIGHTBRIGHTNESSEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface HMDPBHomeLightBrightnessEvent : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *accessoryUUID; // ivar: _accessoryUUID
@property (retain, nonatomic) NSString *brightness; // ivar: _brightness
@property (retain, nonatomic) NSString *characteristicUUID; // ivar: _characteristicUUID
@property (readonly, nonatomic) BOOL hasAccessoryUUID;
@property (readonly, nonatomic) BOOL hasBrightness;
@property (readonly, nonatomic) BOOL hasCharacteristicUUID;
@property (readonly, nonatomic) BOOL hasHomeUUID;
@property (retain, nonatomic) NSString *homeUUID; // ivar: _homeUUID


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