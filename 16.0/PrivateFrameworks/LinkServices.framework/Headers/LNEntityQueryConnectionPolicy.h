// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNENTITYQUERYCONNECTIONPOLICY_H
#define LNENTITYQUERYCONNECTIONPOLICY_H

@class LNEffectiveBundleIdentifier, NSString;

#import <Foundation/Foundation.h>


@interface LNEntityQueryConnectionPolicy : NSObject

@property (readonly, nonatomic) LNEffectiveBundleIdentifier *effectiveBundleIdentifier; // ivar: _effectiveBundleIdentifier
@property (readonly, nonatomic) NSString *entityQueryIdentifier; // ivar: _entityQueryIdentifier
@property (readonly, nonatomic) NSString *entityQueryMangledTypeName; // ivar: _entityQueryMangledTypeName


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)connectionWithError:(*id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEntityQueryIdentifier:(id)arg0 entityQueryMangledTypeName:(id)arg1 effectiveBundleIdentifier:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif