// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWADDRESSENDPOINT_H
#define NWADDRESSENDPOINT_H

@class NSData, NSString;


#import "NWHostEndpoint.h"

@interface NWAddressEndpoint : NWHostEndpoint

@property (readonly, nonatomic) *sockaddr address;
@property (readonly, nonatomic) NSData *addressData;
@property (readonly, nonatomic) NSUInteger addressFamily;
@property (readonly, nonatomic) NSString *addressString;
@property (readonly, nonatomic) NSString *addressStringNoPort;


+(id)endpointWithAddress:(struct sockaddr *)arg0 ;
+(id)endpointWithHostname:(id)arg0 port:(id)arg1 ;
+(unsigned int)endpointType;
-(id)descriptionWithIndent:(int)arg0 showFullContent:(BOOL)arg1 ;
-(id)ethernetAddress;


@end


#endif