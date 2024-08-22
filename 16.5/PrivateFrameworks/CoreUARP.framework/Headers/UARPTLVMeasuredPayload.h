// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UARPTLVMEASUREDPAYLOAD_H
#define UARPTLVMEASUREDPAYLOAD_H

@class NSNumber, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UARPTLVMeasuredPayload : NSObject <NSCopying, NSSecureCoding>



@property (retain) NSNumber *digestListSize; // ivar: _digestListSize
@property (retain) NSNumber *effectiveProductionMode; // ivar: _effectiveProductionMode
@property (retain) NSNumber *effectiveSecurityMode; // ivar: _effectiveSecurityMode
@property NSInteger hashAlgorithm; // ivar: _hashAlgorithm
@property (retain) NSNumber *isTrusted; // ivar: _isTrusted
@property (copy) NSString *payload4cc; // ivar: _payload4cc
@property (copy) NSString *payloadLongname; // ivar: _payloadLongname


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif