// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASCPUBLICKEYCREDENTIALASSERTIONOPTIONS_H
#define ASCPUBLICKEYCREDENTIALASSERTIONOPTIONS_H

@class NSArray, NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASCPublicKeyCredentialAssertionOptions : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *allowedCredentials; // ivar: _allowedCredentials
@property (readonly, copy, nonatomic) NSData *challenge; // ivar: _challenge
@property (readonly, nonatomic) NSUInteger credentialKind; // ivar: _credentialKind
@property (readonly, copy, nonatomic) NSString *relyingPartyIdentifier; // ivar: _relyingPartyIdentifier


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKind:(NSUInteger)arg0 relyingParyIdentifier:(id)arg1 challenge:(id)arg2 allowedCredentials:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif