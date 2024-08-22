// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UARPTLVMEASUREDFTABPAYLOAD_H
#define UARPTLVMEASUREDFTABPAYLOAD_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UARPTLVMeasuredFTABPayload : NSObject <NSCopying, NSSecureCoding>



@property BOOL effectiveProductionMode; // ivar: _effectiveProductionMode
@property BOOL effectiveSecurityMode; // ivar: _effectiveSecurityMode
@property NSInteger hashAlgorithm; // ivar: _hashAlgorithm
@property BOOL isTrusted; // ivar: _isTrusted
@property (copy) NSString *payload4cc; // ivar: _payload4cc
@property (copy) NSString *payloadLongname; // ivar: _payloadLongname


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif