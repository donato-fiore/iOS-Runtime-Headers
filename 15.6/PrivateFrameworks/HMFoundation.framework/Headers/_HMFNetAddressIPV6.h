// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HMFNETADDRESSIPV6_H
#define _HMFNETADDRESSIPV6_H



#import "HMFNetAddressInternal.h"

@interface _HMFNetAddressIPV6 : HMFNetAddressInternal {
    sockaddr_in6 _in6;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)addressFamily;
-(NSUInteger)hash;
-(id)addressString;
-(id)dataUsingEncoding:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithSocketAddress:(struct sockaddr *)arg0 ;


@end


#endif