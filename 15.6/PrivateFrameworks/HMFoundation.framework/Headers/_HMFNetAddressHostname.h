// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HMFNETADDRESSHOSTNAME_H
#define _HMFNETADDRESSHOSTNAME_H

@class NSString;


#import "HMFNetAddressInternal.h"

@interface _HMFNetAddressHostname : HMFNetAddressInternal

@property (readonly, copy, nonatomic) NSString *hostname; // ivar: _hostname


+(id)normalizedHostname:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)addressString;
-(id)init;
-(id)initWithHostname:(id)arg0 ;


@end


#endif