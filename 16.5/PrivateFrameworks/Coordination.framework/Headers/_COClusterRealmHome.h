// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _COCLUSTERREALMHOME_H
#define _COCLUSTERREALMHOME_H

@class NSUUID;


#import "COClusterRealm.h"

@interface _COClusterRealmHome : COClusterRealm

@property (readonly, copy, nonatomic) NSUUID *specificHomeUUID; // ivar: _specificHomeUUID


+(BOOL)supportsSecureCoding;
+(id)realmForCurrent;
+(id)realmWithHomeKitHomeIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_identifierForGroupResult:(id)arg0 ;
-(id)_initWithPredicate:(id)arg0 forHome:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)activate:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif