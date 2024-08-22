// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CTASCIIADDRESS_H
#define CTASCIIADDRESS_H

@class NSString;
@protocol NSCopying, CTMessageAddress;

#import <Foundation/Foundation.h>


@interface CTAsciiAddress : NSObject <NSCopying, CTMessageAddress>



@property (readonly) NSString *address; // ivar: _address


+(id)asciiAddressWithString:(id)arg0 ;
-(id)canonicalFormat;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)encodedString;
-(id)initWithAddress:(id)arg0 ;


@end


#endif