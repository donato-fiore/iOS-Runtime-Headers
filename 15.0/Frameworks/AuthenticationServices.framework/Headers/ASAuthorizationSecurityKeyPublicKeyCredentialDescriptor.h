// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASAUTHORIZATIONSECURITYKEYPUBLICKEYCREDENTIALDESCRIPTOR_H
#define ASAUTHORIZATIONSECURITYKEYPUBLICKEYCREDENTIALDESCRIPTOR_H

@class ASCPublicKeyCredentialDescriptor, NSData, NSString, NSArray;
@protocol ASAuthorizationPublicKeyCredentialDescriptor;

#import <Foundation/Foundation.h>


@interface ASAuthorizationSecurityKeyPublicKeyCredentialDescriptor : NSObject <ASAuthorizationPublicKeyCredentialDescriptor>



@property (readonly, nonatomic) ASCPublicKeyCredentialDescriptor *coreDescriptor;
@property (copy, nonatomic) NSData *credentialID; // ivar: _credentialID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *transports; // ivar: _transports


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCredentialID:(id)arg0 transports:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif