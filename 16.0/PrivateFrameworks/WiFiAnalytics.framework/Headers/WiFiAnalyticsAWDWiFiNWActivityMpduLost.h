// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WIFIANALYTICSAWDWIFINWACTIVITYMPDULOST_H
#define WIFIANALYTICSAWDWIFINWACTIVITYMPDULOST_H

@class PBCodable;
@protocol NSCopying;


#import "WiFiAnalyticsAWDWiFiNWActivityMpduWME.h"

@interface WiFiAnalyticsAWDWiFiNWActivityMpduLost : PBCodable <NSCopying>



@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityMpduWME *bALost; // ivar: _bALost
@property (readonly, nonatomic) BOOL hasBALost;
@property (readonly, nonatomic) BOOL hasNonBALost;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityMpduWME *nonBALost; // ivar: _nonBALost


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