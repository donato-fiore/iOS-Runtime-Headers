// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HMFNETADDRESSIPV4_H
#define _HMFNETADDRESSIPV4_H



#import "HMFNetAddressInternal.h"

@interface _HMFNetAddressIPV4 : HMFNetAddressInternal

@property (readonly, nonatomic) *sockaddr_in internal; // ivar: _internal


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)addressFamily;
-(NSUInteger)hash;
-(id)addressString;
-(id)dataUsingEncoding:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithSocketAddress:(struct sockaddr *)arg0 ;
-(void)dealloc;


@end


#endif