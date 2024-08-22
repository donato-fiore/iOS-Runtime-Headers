// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSWIFISCANRESULT_H
#define MTSWIFISCANRESULT_H

@class NSNumber, NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MTSWiFiScanResult : NSObject <NSCopying, NSSecureCoding>



@property (readonly) unsigned char band; // ivar: _band
@property (readonly) NSNumber *rssi; // ivar: _rssi
@property (readonly) unsigned char security; // ivar: _security
@property (readonly, copy) NSData *ssid; // ivar: _ssid


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSSID:(id)arg0 rssi:(id)arg1 security:(unsigned char)arg2 band:(unsigned char)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif