// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKIDENTITYPROVISIONINGTRANSACTIONKEY_H
#define PKIDENTITYPROVISIONINGTRANSACTIONKEY_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKIdentityProvisioningTransactionKey : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSData *authorization; // ivar: _authorization
@property (readonly, nonatomic) NSData *casdAttestation; // ivar: _casdAttestation


+(BOOL)supportsSecureCoding;
-(id)initWithCASDAttestation:(id)arg0 authorization:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif