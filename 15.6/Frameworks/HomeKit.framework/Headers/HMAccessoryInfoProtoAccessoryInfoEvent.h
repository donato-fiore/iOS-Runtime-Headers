// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMACCESSORYINFOPROTOACCESSORYINFOEVENT_H
#define HMACCESSORYINFOPROTOACCESSORYINFOEVENT_H

@class PBCodable;
@protocol NSCopying;


#import "HMAccessoryInfoProtoWifiNetworkInfoEvent.h"

@interface HMAccessoryInfoProtoAccessoryInfoEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int accessoryInfoEvent; // ivar: _accessoryInfoEvent
@property (nonatomic) BOOL hasAccessoryInfoEvent;
@property (nonatomic) BOOL hasReadOnly;
@property (readonly, nonatomic) BOOL hasWifiNetworkInfo;
@property (nonatomic) BOOL readOnly; // ivar: _readOnly
@property (retain, nonatomic) HMAccessoryInfoProtoWifiNetworkInfoEvent *wifiNetworkInfo; // ivar: _wifiNetworkInfo


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)accessoryInfoEventAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsAccessoryInfoEvent:(id)arg0 ;
-(void)clearOneofValuesForAccessoryInfoEvent;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif