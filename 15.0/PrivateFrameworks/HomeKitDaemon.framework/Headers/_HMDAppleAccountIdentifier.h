// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HMDAPPLEACCOUNTIDENTIFIER_H
#define _HMDAPPLEACCOUNTIDENTIFIER_H

@class NSString;


#import "HMDAccountIdentifier.h"

@interface _HMDAppleAccountIdentifier : HMDAccountIdentifier {
    os_unfair_lock_s _lock;
    NSString *_accountMergeID;
}


@property (readonly, copy) NSString *identifierString; // ivar: _identifierString


+(BOOL)supportsSecureCoding;
+(id)namespace;
-(BOOL)isAuthenticated;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithIdentifierString:(id)arg0 ;
-(id)senderCorrelationIdentifier;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateAppleAccountSenderCorrelationIdentifier:(id)arg0 ;


@end


#endif