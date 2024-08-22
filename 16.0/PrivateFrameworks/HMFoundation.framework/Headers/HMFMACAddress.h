// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMFMACADDRESS_H
#define HMFMACADDRESS_H

@protocol NSCopying, NSSecureCoding;


#import "HMFHardwareAddress.h"

@interface HMFMACAddress : HMFHardwareAddress <NSCopying, NSSecureCoding>





-(id)initWithAddressData:(id)arg0 ;
-(id)initWithAddressString:(id)arg0 length:(NSUInteger)arg1 ;
-(id)initWithMACAddressString:(id)arg0 ;


@end


#endif