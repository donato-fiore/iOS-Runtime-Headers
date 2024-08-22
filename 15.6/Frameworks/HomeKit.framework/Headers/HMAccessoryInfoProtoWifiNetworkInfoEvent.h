// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMACCESSORYINFOPROTOWIFINETWORKINFOEVENT_H
#define HMACCESSORYINFOPROTOWIFINETWORKINFOEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface HMAccessoryInfoProtoWifiNetworkInfoEvent : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasMacAddress;
@property (readonly, nonatomic) BOOL hasNetworkSSID;
@property (retain, nonatomic) NSString *macAddress; // ivar: _macAddress
@property (retain, nonatomic) NSString *networkSSID; // ivar: _networkSSID


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