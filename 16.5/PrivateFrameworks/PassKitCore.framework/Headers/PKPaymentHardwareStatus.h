// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTHARDWARESTATUS_H
#define PKPAYMENTHARDWARESTATUS_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKPaymentHardwareStatus : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic, getter=_isDemoModeActive) BOOL _isDemoModeActive;
@property (nonatomic) BOOL canDecryptBAAEncryptedData; // ivar: _canDecryptBAAEncryptedData
@property (readonly, nonatomic) BOOL canMakeLocalPayments;
@property (readonly, nonatomic) BOOL canMakePayments;
@property (nonatomic) BOOL canMakeRemotePayments; // ivar: _canMakeRemotePayments
@property (readonly, nonatomic) BOOL canMakeVirtualCardPayments;
@property (nonatomic) BOOL hasRemoteDevices; // ivar: _hasRemoteDevices
@property (nonatomic) BOOL hasSecureElement; // ivar: _hasSecureElement
@property (nonatomic, getter=isInFailForward) BOOL inFailForward; // ivar: _inFailForward
@property (nonatomic) BOOL isSRD; // ivar: _isSRD
@property (nonatomic, getter=isPrimaryUser) BOOL primaryUser; // ivar: _primaryUser
@property (nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)_canMakeLocalPaymentsNeedingSecureIntent:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif