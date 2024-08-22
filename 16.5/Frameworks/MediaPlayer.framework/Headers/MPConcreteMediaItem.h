// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCONCRETEMEDIAITEM_H
#define MPCONCRETEMEDIAITEM_H

@protocol NSCopying, MPCacheableConcreteMediaEntity, OS_dispatch_queue;


#import "MPMediaItem.h"
#import "MPMediaLibrary.h"
#import "MPConcreteMediaEntityPropertiesCache.h"

@interface MPConcreteMediaItem : MPMediaItem <NSCopying, MPCacheableConcreteMediaEntity>

 {
    MPMediaLibrary *_library;
    NSUInteger _persistentID;
    MPConcreteMediaEntityPropertiesCache *_propertiesCache;
    NSObject<OS_dispatch_queue> *_utilitySerialQueue;
}


@property (readonly, retain, nonatomic) MPConcreteMediaEntityPropertiesCache *cachedPropertyValues;


+(BOOL)supportsSecureCoding;
+(id)concreteMediaItemWithPersistentID:(NSUInteger)arg0 ;
+(id)concreteMediaItemWithPersistentID:(NSUInteger)arg0 library:(id)arg1 ;
+(id)createUncachedConcreteMediaItemWithPersistentID:(NSUInteger)arg0 library:(id)arg1 ;
-(BOOL)existsInLibrary;
-(BOOL)setValue:(id)arg0 forProperty:(id)arg1 ;
-(Class)classForCoder;
-(NSUInteger)persistentID;
-(id)_initWithPersistentID:(NSUInteger)arg0 library:(id)arg1 propertiesCache:(id)arg2 ;
-(id)_nonBatchableOrCachedValueForProperty:(id)arg0 needsFetch:(*BOOL)arg1 ;
-(id)cachedValueForProperty:(id)arg0 isCached:(*BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPersistentID:(NSUInteger)arg0 ;
-(id)initWithPersistentID:(NSUInteger)arg0 library:(id)arg1 ;
-(id)mediaLibrary;
-(id)valueForProperty:(id)arg0 ;
-(id)valuesForProperties:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateValuesForProperties:(id)arg0 usingBlock:(id)arg1 ;
-(void)incrementPlayCount;
-(void)invalidateCachedProperties;
-(void)setValue:(id)arg0 forProperty:(id)arg1 withCompletionBlock:(id)arg2 ;


@end


#endif