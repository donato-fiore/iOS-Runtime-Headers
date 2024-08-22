// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COCLUSTERMEMBERROLESNAPSHOT_H
#define COCLUSTERMEMBERROLESNAPSHOT_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "COClusterMember.h"
#import "COClusterRole.h"

@interface COClusterMemberRoleSnapshot : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) COClusterMember *member; // ivar: _member
@property (readonly, nonatomic) COClusterRole *role; // ivar: _role
@property (nonatomic, getter=isStale) BOOL stale; // ivar: _stale


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSnapshot:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMember:(id)arg0 role:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif