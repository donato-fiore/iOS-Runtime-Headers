// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HMDIDSACCOUNTIDENTIFIER_H
#define _HMDIDSACCOUNTIDENTIFIER_H

@class NSString;


#import "HMDAccountIdentifier.h"

@interface _HMDIDSAccountIdentifier : HMDAccountIdentifier

@property (readonly, copy) NSString *identifierString; // ivar: _identifierString


+(BOOL)supportsSecureCoding;
+(id)namespace;
-(BOOL)isAuthenticated;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithIdentifierString:(id)arg0 ;
-(id)kind;
-(id)senderCorrelationIdentifier;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif