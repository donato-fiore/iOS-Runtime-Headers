// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASCPLATFORMPUBLICKEYCREDENTIALLOGINCHOICE_H
#define ASCPLATFORMPUBLICKEYCREDENTIALLOGINCHOICE_H

@class NSString, NSData;
@protocol ASCLoginChoiceProtocol;

#import <Foundation/Foundation.h>


@interface ASCPlatformPublicKeyCredentialLoginChoice : NSObject <ASCLoginChoiceProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isRegistrationRequest; // ivar: _isRegistrationRequest
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSString *relyingPartyIdentifier; // ivar: _relyingPartyIdentifier
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSData *userHandle; // ivar: _userHandle


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initAsRegistrationChoice:(BOOL)arg0 withName:(id)arg1 displayName:(id)arg2 userHandle:(id)arg3 relyingPartyIdentifier:(id)arg4 ;
-(id)initRegistrationChoiceWithOptions:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 displayName:(id)arg1 userHandle:(id)arg2 ;
-(id)initWithName:(id)arg0 displayName:(id)arg1 userHandle:(id)arg2 relyingPartyIdentifier:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif