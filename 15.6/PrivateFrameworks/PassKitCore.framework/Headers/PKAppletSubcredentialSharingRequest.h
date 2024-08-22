// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKAPPLETSUBCREDENTIALSHARINGREQUEST_H
#define PKAPPLETSUBCREDENTIALSHARINGREQUEST_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKAppletSubcredential.h"
#import "PKAppletSubcredentialEntitlement.h"
#import "PKPaymentPass.h"

@interface PKAppletSubcredentialSharingRequest : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) PKAppletSubcredential *credential; // ivar: _credential
@property (readonly, copy, nonatomic) NSString *credentialIdentifier; // ivar: _credentialIdentifier
@property (retain, nonatomic) PKAppletSubcredentialEntitlement *entitlement; // ivar: _entitlement
@property (nonatomic, getter=isForLocalDevice) BOOL forLocalDevice; // ivar: _forLocalDevice
@property (retain, nonatomic) PKPaymentPass *pass; // ivar: _pass
@property (readonly, copy, nonatomic) NSString *passIdentifier; // ivar: _passIdentifier
@property (copy, nonatomic) NSString *recipientIdentifier; // ivar: _recipientIdentifier
@property (copy, nonatomic) NSString *recipientName; // ivar: _recipientName


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)credentialForPass:(id)arg0 ;
-(id)credentialWithIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPaymentPass:(id)arg0 ;
-(id)invitations;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif