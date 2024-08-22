// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNAPPENTITYCONNECTIONPOLICY_H
#define LNAPPENTITYCONNECTIONPOLICY_H

@class NSString, LNEffectiveBundleIdentifier;

#import <Foundation/Foundation.h>


@interface LNAppEntityConnectionPolicy : NSObject

@property (readonly, copy, nonatomic) NSString *appBundleIdentifier; // ivar: _appBundleIdentifier
@property (readonly, nonatomic) NSString *appEntityIdentifier; // ivar: _appEntityIdentifier
@property (readonly, nonatomic) NSString *appEntityMangledTypeName; // ivar: _appEntityMangledTypeName
@property (readonly, nonatomic) LNEffectiveBundleIdentifier *effectiveBundleIdentifier; // ivar: _effectiveBundleIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)connectionWithError:(*id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAppEntityIdentifier:(id)arg0 appEntityMangledTypeName:(id)arg1 effectiveBundleIdentifier:(id)arg2 appBundleIdentifier:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif