// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASCAPPLEIDCREDENTIAL_H
#define ASCAPPLEIDCREDENTIAL_H

@class AKAuthorization, NSString, NSData;
@protocol ASCCredentialProtocol;

#import <Foundation/Foundation.h>


@interface ASCAppleIDCredential : NSObject <ASCCredentialProtocol>



@property (readonly, nonatomic) AKAuthorization *authorization; // ivar: _authorization
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSData *identityToken; // ivar: _identityToken
@property (readonly, copy, nonatomic) NSString *state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *user; // ivar: _user


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAuthorization:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUser:(id)arg0 identityToken:(id)arg1 state:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif