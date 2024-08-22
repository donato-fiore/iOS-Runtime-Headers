// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFAUTOFILLPASSKEYIDENTIFIER_H
#define SFAUTOFILLPASSKEYIDENTIFIER_H

@class WBSPublicKeyCredentialIdentifier, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SFAutoFillPasskeyIdentifier : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) WBSPublicKeyCredentialIdentifier *coreIdentifier; // ivar: _coreIdentifier
@property (readonly, copy, nonatomic) NSString *credentialID;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCoreIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif