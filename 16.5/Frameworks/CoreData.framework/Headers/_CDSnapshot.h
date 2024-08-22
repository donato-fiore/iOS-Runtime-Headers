// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CDSNAPSHOT_H
#define _CDSNAPSHOT_H

@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "NSManagedObjectID.h"

@interface _CDSnapshot : NSObject <NSCopying, NSMutableCopying>

 {
    int _cd_rc;
    int _cd_version;
    NSManagedObjectID *_cd_objectID;
    _snapshotFlags_st _cd_flags;
    unsigned char _cd_nullFlags_;
}




+(Class)classForEntity:(id)arg0 ;
+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(unsigned int)newBatchAllocation:(*id)arg0 count:(unsigned int)arg1 withOwnedObjectIDs:(*id)arg2 ;
+(void)_entityDeallocated;
+(void)_invalidateStaticCaches;
+(void)initialize;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)retainCount;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)mutableCopy;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)retain;
-(id)valueForKey:(id)arg0 ;
-(void)dealloc;
-(void)release;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif