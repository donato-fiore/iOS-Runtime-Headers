// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APSDNSRESPONSE_H
#define APSDNSRESPONSE_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface APSDNSResponse : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *hostname; // ivar: _hostname
@property (readonly, nonatomic) NSArray *ipv4Address; // ivar: _ipv4Address
@property (readonly, nonatomic) NSArray *ipv6Address; // ivar: _ipv6Address


+(BOOL)supportsSecureCoding;
-(id)initResponseForHostname:(id)arg0 ipv4Address:(id)arg1 ipv6Address:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif