// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCNETWORKADDRESS_H
#define VCNETWORKADDRESS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VCNetworkAddress : NSObject

@property (copy, nonatomic) NSString *interfaceName; // ivar: _interfaceName
@property (copy, nonatomic) NSString *ip; // ivar: _ip
@property (nonatomic) unsigned short ipVersion; // ivar: _ipVersion
@property (nonatomic) unsigned short port; // ivar: _port


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isIPv6;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(int)getSockaddrStorage:(struct sockaddr_storage *)arg0 size:(*NSUInteger)arg1 ;
-(void)dealloc;


@end


#endif