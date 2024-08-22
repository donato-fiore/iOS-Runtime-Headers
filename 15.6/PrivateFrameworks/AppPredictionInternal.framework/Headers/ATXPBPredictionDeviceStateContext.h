// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXPBPREDICTIONDEVICESTATECONTEXT_H
#define ATXPBPREDICTIONDEVICESTATECONTEXT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ATXPBPredictionDeviceStateContext : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasInAirplaneMode;
@property (nonatomic) BOOL hasOnWifi;
@property (readonly, nonatomic) BOOL hasWifiSSID;
@property (nonatomic) BOOL inAirplaneMode; // ivar: _inAirplaneMode
@property (nonatomic) BOOL onWifi; // ivar: _onWifi
@property (retain, nonatomic) NSString *wifiSSID; // ivar: _wifiSSID


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