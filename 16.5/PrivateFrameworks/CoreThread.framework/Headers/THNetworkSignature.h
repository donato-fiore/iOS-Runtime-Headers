// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef THNETWORKSIGNATURE_H
#define THNETWORKSIGNATURE_H

@class NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface THNetworkSignature : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSData *ipv4NwSignature; // ivar: _ipv4NwSignature
@property (readonly, nonatomic) NSData *ipv6NwSignature; // ivar: _ipv6NwSignature
@property (readonly, nonatomic) NSString *wifiPassword; // ivar: _wifiPassword
@property (readonly, nonatomic) NSString *wifiSSID; // ivar: _wifiSSID


+(BOOL)supportsSecureCoding;
-(id)initSignaturesWithArrays:(char *)arg0 ipv4BytesLen:(int)arg1 ipv6Bytes:(char *)arg2 ipv6BytesLen:(int)arg3 wifSSID:(id)arg4 wifiPassword:(id)arg5 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSignatures:(id)arg0 ipv6NwSignature:(id)arg1 wifSSID:(id)arg2 wifiPassword:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif