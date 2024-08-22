// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSLEGACYDEVICEMESSAGEPROTECTIONCYPHER_H
#define IDSLEGACYDEVICEMESSAGEPROTECTIONCYPHER_H

@class NSString;
@protocol ENCypher;

#import <Foundation/Foundation.h>

#import "IDSMPPublicLegacyIdentity.h"

@interface IDSLegacyDeviceMessageProtectionCypher : NSObject <ENCypher>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) IDSMPPublicLegacyIdentity *publicIdentity; // ivar: _publicIdentity
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)cypherWithEndpoint:(id)arg0 error:(*id)arg1 ;
-(id)_fullIdentityFromAccountIdentity:(id)arg0 error:(*id)arg1 ;
-(id)cypherData:(id)arg0 withAccountIdentity:(id)arg1 identifier:(*id)arg2 error:(*id)arg3 ;
-(id)decypherData:(id)arg0 withAccountIdentity:(id)arg1 signingDevicePublicKey:(id)arg2 identifier:(id)arg3 error:(*id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPublicIdentity:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif