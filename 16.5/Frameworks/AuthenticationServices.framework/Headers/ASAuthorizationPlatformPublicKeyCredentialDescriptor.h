// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASAUTHORIZATIONPLATFORMPUBLICKEYCREDENTIALDESCRIPTOR_H
#define ASAUTHORIZATIONPLATFORMPUBLICKEYCREDENTIALDESCRIPTOR_H

@class ASCPublicKeyCredentialDescriptor, NSData, NSString;
@protocol ASAuthorizationPublicKeyCredentialDescriptor;

#import <Foundation/Foundation.h>


@interface ASAuthorizationPlatformPublicKeyCredentialDescriptor : NSObject <ASAuthorizationPublicKeyCredentialDescriptor>

 {
    os_unfair_lock_s _internalLock;
}


@property (readonly, nonatomic) ASCPublicKeyCredentialDescriptor *coreDescriptor;
@property (copy, nonatomic) NSData *credentialID; // ivar: _credentialID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCredentialID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif