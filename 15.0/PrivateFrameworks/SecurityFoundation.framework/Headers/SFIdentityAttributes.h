// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFIDENTITYATTRIBUTES_H
#define SFIDENTITYATTRIBUTES_H

@class NSString;
@protocol SFKeychainItemAttributes;

#import <Foundation/Foundation.h>

#import "_SFAsymmetricKeySpecifier.h"

@interface SFIdentityAttributes : NSObject <SFKeychainItemAttributes>

 {
    id *_identityAttributesInternal;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasCertificate;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identityName;
@property (readonly, copy, nonatomic) _SFAsymmetricKeySpecifier *keySpecifier;
@property (copy, nonatomic) NSString *localizedDescription;
@property (copy, nonatomic) NSString *localizedLabel;
@property (readonly, copy, nonatomic) NSString *persistentIdentifier; // ivar: persistentIdentifier
@property (readonly, copy, nonatomic) NSString *privateKeyDomain; // ivar: _privateKeyDomain
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif