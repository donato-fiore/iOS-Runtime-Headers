// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICUSERIDENTITYCONTEXT_H
#define ICUSERIDENTITYCONTEXT_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ICUserIdentity.h"
#import "ICUserIdentityStore.h"

@interface ICUserIdentityContext : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) ICUserIdentity *identity; // ivar: _identity
@property (readonly, nonatomic) ICUserIdentityStore *identityStore; // ivar: _identityStore


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentity:(id)arg0 identityStore:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif