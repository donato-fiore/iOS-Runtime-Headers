// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WIFIAWAREDISCOVERYRESULT_H
#define WIFIAWAREDISCOVERYRESULT_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "WiFiMACAddress.h"
#import "WiFiAwarePublishServiceSpecificInfo.h"

@interface WiFiAwareDiscoveryResult : NSObject <NSSecureCoding>

 {
    NSInteger _datapathCipherSuite;
    NSInteger _fsdFunction;
    unsigned char _subscribeID;
}


@property (readonly, nonatomic) BOOL datapathSecurityRequired;
@property (readonly, nonatomic) BOOL datapathSupported; // ivar: _datapathSupported
@property (readonly, nonatomic) BOOL furtherServiceDiscoveryRequired;
@property (readonly, nonatomic) unsigned char publishID; // ivar: _publishID
@property (readonly, nonatomic) WiFiMACAddress *publisherAddress; // ivar: _publisherAddress
@property (readonly, nonatomic) NSInteger rssi; // ivar: _rssi
@property (readonly, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (readonly, nonatomic) WiFiAwarePublishServiceSpecificInfo *serviceSpecificInfo; // ivar: _serviceSpecificInfo


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)serviceSpecificInfoEqual:(id)arg0 ;
-(NSInteger)datapathCipherSuite;
-(NSInteger)fsdFunction;
-(char *)fsdFunctionString;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithServiceName:(id)arg0 serviceSpecificInfo:(id)arg1 publishID:(unsigned char)arg2 subscribeID:(unsigned char)arg3 publisherAddressKey:(id)arg4 datapathSupported:(BOOL)arg5 datapathCipherSuite:(NSInteger)arg6 fsdFunction:(NSInteger)arg7 rssi:(NSInteger)arg8 ;
-(unsigned char)subscribeID;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif