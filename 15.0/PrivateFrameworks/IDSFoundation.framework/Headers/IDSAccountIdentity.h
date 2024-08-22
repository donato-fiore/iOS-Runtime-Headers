// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSACCOUNTIDENTITY_H
#define IDSACCOUNTIDENTITY_H

@class NSString;
@protocol ENAccountKey;

#import <Foundation/Foundation.h>

#import "IDSMPFullAccountIdentity.h"
#import "IDSPublicAccountIdentity.h"
#import "IDSMPFullServiceIdentityAdmin.h"
#import "IDSMPFullAccountIdentityCluster.h"
#import "IDSMPFullServiceIdentitySigning.h"

@interface IDSAccountIdentity : NSObject <ENAccountKey>



@property (readonly, nonatomic) IDSMPFullAccountIdentity *accountIdentity;
@property (readonly, nonatomic) IDSPublicAccountIdentity *accountPublicKey;
@property (readonly, nonatomic) IDSMPFullServiceIdentityAdmin *adminIdentity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) IDSMPFullAccountIdentityCluster *identityCluster; // ivar: _identityCluster
@property (readonly, nonatomic) IDSMPFullServiceIdentitySigning *signingIdentity;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFullCluster:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif