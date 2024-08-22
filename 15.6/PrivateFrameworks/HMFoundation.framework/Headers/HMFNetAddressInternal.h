// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMFNETADDRESSINTERNAL_H
#define HMFNETADDRESSINTERNAL_H

@class NSString;


#import "HMFObject.h"

@interface HMFNetAddressInternal : HMFObject

@property (readonly, nonatomic) NSUInteger addressFamily; // ivar: _addressFamily
@property (readonly, copy, nonatomic) NSString *addressString; // ivar: _addressString


-(id)dataUsingEncoding:(NSUInteger)arg0 ;


@end


#endif