// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFAUTHENTICATIONREQUEST_H
#define SBFAUTHENTICATIONREQUEST_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SBFAuthenticationRequest : NSObject

@property (readonly, copy, nonatomic) id *handler; // ivar: _handler
@property (readonly, copy, nonatomic) NSString *passcode; // ivar: _passcode
@property (readonly, nonatomic) NSInteger source; // ivar: _source
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(id)_initWithType:(NSUInteger)arg0 source:(NSInteger)arg1 passcode:(id)arg2 handler:(id)arg3 ;
-(id)description;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initForBiometricAuthenticationWithSource:(NSInteger)arg0 ;
-(id)initForBiometricAuthenticationWithSource:(NSInteger)arg0 handler:(id)arg1 ;
-(id)initForPasscode:(id)arg0 source:(NSInteger)arg1 ;
-(id)initForPasscode:(id)arg0 source:(NSInteger)arg1 handler:(id)arg2 ;
-(id)publicDescription;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif