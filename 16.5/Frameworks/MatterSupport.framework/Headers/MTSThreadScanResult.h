// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSTHREADSCANRESULT_H
#define MTSTHREADSCANRESULT_H

@class NSNumber, NSData, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MTSThreadScanResult : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy) NSNumber *channel; // ivar: _channel
@property (readonly, copy) NSData *extendedAddress; // ivar: _extendedAddress
@property (readonly, copy) NSNumber *extendedPANID; // ivar: _extendedPANID
@property (readonly, copy) NSNumber *lqi; // ivar: _lqi
@property (readonly, copy) NSString *networkName; // ivar: _networkName
@property (readonly, copy) NSNumber *panID; // ivar: _panID
@property (readonly, copy) NSNumber *rssi; // ivar: _rssi
@property (readonly, copy) NSNumber *version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNetworkName:(id)arg0 panID:(id)arg1 extendedPANID:(id)arg2 channel:(id)arg3 extendedAddress:(id)arg4 rssi:(id)arg5 version:(id)arg6 lqi:(id)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif