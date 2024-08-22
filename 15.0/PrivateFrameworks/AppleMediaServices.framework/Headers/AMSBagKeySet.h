// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSBAGKEYSET_H
#define AMSBAGKEYSET_H

@class NSSet;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AMSBagKeySet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) NSSet *keys; // ivar: _keys


+(BOOL)supportsSecureCoding;
+(id)bagKeySetCache;
+(id)registeredBagKeySetForProfile:(id)arg0 profileVersion:(id)arg1 ;
+(void)registerBagKeySet:(id)arg0 forProfile:(id)arg1 profileVersion:(id)arg2 ;
+(void)resetRegisteredBagKeySets;
-(BOOL)hasKey:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)bagKeyInfoForKey:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif