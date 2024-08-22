// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASCSECURITYKEYPUBLICKEYCREDENTIALLOGINCHOICE_H
#define ASCSECURITYKEYPUBLICKEYCREDENTIALLOGINCHOICE_H

@class NSString, NSData;
@protocol ASCLoginChoiceProtocol;

#import <Foundation/Foundation.h>


@interface ASCSecurityKeyPublicKeyCredentialLoginChoice : NSObject <ASCLoginChoiceProtocol>



@property (readonly, nonatomic) NSInteger credentialKind; // ivar: _credentialKind
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger loginChoiceKind;
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSData *userHandle; // ivar: _userHandle


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithKind:(NSInteger)arg0 name:(id)arg1 displayName:(id)arg2 userHandle:(id)arg3 ;
-(id)initAssertionPlaceholderChoice;
-(id)initRegistrationChoice;
-(id)initRegistrationChoiceWithOptions:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 displayName:(id)arg1 userHandle:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif