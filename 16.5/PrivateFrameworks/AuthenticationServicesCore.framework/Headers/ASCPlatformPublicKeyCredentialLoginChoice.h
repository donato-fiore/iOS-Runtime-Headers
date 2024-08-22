// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCPLATFORMPUBLICKEYCREDENTIALLOGINCHOICE_H
#define ASCPLATFORMPUBLICKEYCREDENTIALLOGINCHOICE_H

@class NSString, WBSPublicKeyCredentialIdentifier, NSUUID;
@protocol ASCLoginChoiceProtocol;

#import <Foundation/Foundation.h>


@interface ASCPlatformPublicKeyCredentialLoginChoice : NSObject <ASCLoginChoiceProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) WBSPublicKeyCredentialIdentifier *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isRegistrationRequest; // ivar: _isRegistrationRequest
@property (readonly, nonatomic) NSUInteger loginChoiceKind;
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSUUID *publicKeyCredentialOperationUUID; // ivar: _publicKeyCredentialOperationUUID
@property (readonly, copy, nonatomic) NSString *relyingPartyIdentifier; // ivar: _relyingPartyIdentifier
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *userHandle; // ivar: _userHandle
@property (readonly, copy, nonatomic) NSString *userVisibleName;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initAsRegistrationChoice:(BOOL)arg0 withName:(id)arg1 displayName:(id)arg2 identifier:(id)arg3 userHandle:(id)arg4 relyingPartyIdentifier:(id)arg5 publicKeyCredentialOperationUUID:(id)arg6 ;
-(id)initRegistrationChoiceWithOptions:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 displayName:(id)arg1 identifier:(id)arg2 userHandle:(id)arg3 relyingPartyIdentifier:(id)arg4 publicKeyCredentialOperationUUID:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif