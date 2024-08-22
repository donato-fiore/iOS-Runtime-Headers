// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCSECURITYKEYPUBLICKEYCREDENTIALLOGINCHOICE_H
#define ASCSECURITYKEYPUBLICKEYCREDENTIALLOGINCHOICE_H

@class NSString, WBSPublicKeyCredentialIdentifier, NSUUID;
@protocol ASCLoginChoiceProtocol;

#import <Foundation/Foundation.h>


@interface ASCSecurityKeyPublicKeyCredentialLoginChoice : NSObject <ASCLoginChoiceProtocol>



@property (readonly, nonatomic) NSInteger credentialKind; // ivar: _credentialKind
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) WBSPublicKeyCredentialIdentifier *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSUInteger loginChoiceKind;
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSUUID *publicKeyCredentialOperationUUID; // ivar: _publicKeyCredentialOperationUUID
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithKind:(NSInteger)arg0 name:(id)arg1 displayName:(id)arg2 identifier:(id)arg3 publicKeyCredentialOperationUUID:(id)arg4 ;
-(id)initAssertionPlaceholderChoice;
-(id)initRegistrationChoiceWithOptions:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 displayName:(id)arg1 identifier:(id)arg2 publicKeyCredentialOperationUUID:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif