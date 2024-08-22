// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCONCRETESYNCIDENTITY_H
#define HDCONCRETESYNCIDENTITY_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "HDSyncIdentityEntity.h"
#import "HDSyncIdentity.h"

@interface HDConcreteSyncIdentity : NSObject <NSCopying>



@property (readonly, copy, nonatomic) HDSyncIdentityEntity *entity; // ivar: _entity
@property (readonly, copy, nonatomic) HDSyncIdentity *identity; // ivar: _identity


+(id)new;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif