// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFAUTOFILLPASSKEY_H
#define SFAUTOFILLPASSKEY_H

@class WBSAutoFillPasskey, NSString, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SFAutoFillPasskeyIdentifier.h"

@interface SFAutoFillPasskey : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) WBSAutoFillPasskey *corePasskey; // ivar: _corePasskey
@property (readonly, copy, nonatomic) SFAutoFillPasskeyIdentifier *identifier;
@property (readonly, nonatomic) NSString *relyingPartyIdentifier;
@property (readonly, nonatomic) NSData *userHandle;
@property (readonly, nonatomic) NSString *username;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCoreAutoFillPasskey:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif