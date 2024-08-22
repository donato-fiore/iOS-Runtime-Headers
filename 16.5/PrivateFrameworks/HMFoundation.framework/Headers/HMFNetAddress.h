// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMFNETADDRESS_H
#define HMFNETADDRESS_H

@class NSString;


#import "HMFObject.h"
#import "HMFNetAddressInternal.h"

@interface HMFNetAddress : HMFObject

@property (readonly, nonatomic) NSUInteger addressFamily;
@property (readonly, copy, nonatomic) NSString *addressString;
@property (readonly, nonatomic) HMFNetAddressInternal *internal; // ivar: _internal


+(id)localAddress;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)dataUsingEncoding:(NSUInteger)arg0 ;
-(id)description;
-(id)init;
-(id)initWithHostname:(id)arg0 ;
-(id)initWithSocketAddress:(struct sockaddr *)arg0 ;


@end


#endif