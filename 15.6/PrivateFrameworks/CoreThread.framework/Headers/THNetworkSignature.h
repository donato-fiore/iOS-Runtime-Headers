// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef THNETWORKSIGNATURE_H
#define THNETWORKSIGNATURE_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface THNetworkSignature : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSData *ipv4NwSignature; // ivar: _ipv4NwSignature
@property (readonly, nonatomic) NSData *ipv6NwSignature; // ivar: _ipv6NwSignature


+(BOOL)supportsSecureCoding;
-(id)initSignaturesWithArrays:(char *)arg0 ipv4BytesLen:(int)arg1 ipv6Bytes:(char *)arg2 ipv6BytesLen:(int)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSignatures:(id)arg0 ipv6NwSignature:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif