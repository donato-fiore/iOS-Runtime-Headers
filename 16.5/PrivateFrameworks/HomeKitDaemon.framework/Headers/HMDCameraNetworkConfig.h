// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERANETWORKCONFIG_H
#define HMDCAMERANETWORKCONFIG_H

@class HMFObject, NSString, NSNumber;
@protocol NSCopying;



@interface HMDCameraNetworkConfig : HMFObject <NSCopying>

 {
    ? _ipv4SockAddress;
    ? _ipv6SockAddress;
}


@property (retain, nonatomic) NSString *ipAddress; // ivar: _ipAddress
@property (nonatomic) BOOL ipv6; // ivar: _ipv6
@property (retain, nonatomic) NSNumber *rtpPort; // ivar: _rtpPort


+(id)localIPAddress;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithAddress:(id)arg0 ipv6:(BOOL)arg1 rtpPort:(id)arg2 ;


@end


#endif