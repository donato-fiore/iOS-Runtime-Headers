// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HMFNETADDRESSIPV4_H
#define _HMFNETADDRESSIPV4_H



#import "HMFNetAddressInternal.h"

@interface _HMFNetAddressIPV4 : HMFNetAddressInternal {
    sockaddr_in _in;
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