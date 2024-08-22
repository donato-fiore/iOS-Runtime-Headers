// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCNETWORKADDRESS_H
#define AVCNETWORKADDRESS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AVCNetworkAddress : NSObject

@property (copy, nonatomic) NSString *interfaceName; // ivar: interfaceName
@property (copy, nonatomic) NSString *ip; // ivar: ip
@property (nonatomic) BOOL isIPv6; // ivar: isIPv6
@property (nonatomic) unsigned short port; // ivar: port


-(id)init;
-(void)dealloc;


@end


#endif