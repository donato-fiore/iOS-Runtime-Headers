// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DKCOMPONENTIDENTITY_H
#define DKCOMPONENTIDENTITY_H

@class NSString, NSSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "DKCanonicalVersion.h"

@interface DKComponentIdentity : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString *domain; // ivar: _domain
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSSet *resources; // ivar: _resources
@property (readonly, nonatomic) NSString *type; // ivar: _type
@property (readonly, nonatomic) DKCanonicalVersion *version; // ivar: _version


+(BOOL)supportsSecureCoding;
+(id)componentIdentityWithDomain:(id)arg0 version:(id)arg1 resources:(id)arg2 ;
+(id)componentIdentityWithType:(id)arg0 identifier:(id)arg1 version:(id)arg2 resources:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToComponentIdentity:(id)arg0 ;
-(BOOL)isNewerThan:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDomain:(id)arg0 version:(id)arg1 resources:(id)arg2 ;
-(id)initWithType:(id)arg0 identifier:(id)arg1 version:(id)arg2 resources:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif