// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WIFIANALYTICSAWDWIFIUSBEVENTNOTIFICATION_H
#define WIFIANALYTICSAWDWIFIUSBEVENTNOTIFICATION_H

@class PBCodable;
@protocol NSCopying;



@interface WiFiAnalyticsAWDWiFiUSBEventNotification : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger durationSinceUSBEventInSeconds; // ivar: _durationSinceUSBEventInSeconds
@property (nonatomic) BOOL hasDurationSinceUSBEventInSeconds;
@property (nonatomic) BOOL hasIsVendorApple;
@property (nonatomic) BOOL hasSmartCCADesenseSupported;
@property (nonatomic) BOOL hasUsbAction;
@property (nonatomic) BOOL hasUsbTotal;
@property (nonatomic) BOOL isVendorApple; // ivar: _isVendorApple
@property (nonatomic) BOOL smartCCADesenseSupported; // ivar: _smartCCADesenseSupported
@property (nonatomic) unsigned int usbAction; // ivar: _usbAction
@property (nonatomic) unsigned int usbTotal; // ivar: _usbTotal


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