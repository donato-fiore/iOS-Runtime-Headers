// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCONCRETEMEDIAITEMCOLLECTION_H
#define MPCONCRETEMEDIAITEMCOLLECTION_H

@protocol NSCopying, MPCacheableConcreteMediaEntity;


#import "MPMediaItemCollection.h"
#import "MPMediaQuery.h"
#import "MPMediaItem.h"
#import "MPConcreteMediaEntityPropertiesCache.h"

@interface MPConcreteMediaItemCollection : MPMediaItemCollection <NSCopying, MPCacheableConcreteMediaEntity>

 {
    NSInteger _identifier;
    MPMediaQuery *_itemsQuery;
    NSInteger _grouping;
    MPMediaItem *_representativeItem;
    MPConcreteMediaEntityPropertiesCache *_propertiesCache;
}


@property (readonly, retain, nonatomic) MPConcreteMediaEntityPropertiesCache *cachedPropertyValues;


+(BOOL)supportsSecureCoding;
+(id)createUncachedMediaItemCollectionWithIdentifier:(NSInteger)arg0 valuesForProperties:(id)arg1 itemsQuery:(id)arg2 grouping:(NSInteger)arg3 representativeItemIdentifier:(NSInteger)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)setValue:(id)arg0 forProperty:(id)arg1 ;
-(NSInteger)groupingType;
-(NSUInteger)count;
-(NSUInteger)hash;
-(NSUInteger)persistentID;
-(id)_initWithIdentifier:(NSInteger)arg0 valuesForProperties:(id)arg1 itemsQuery:(id)arg2 grouping:(NSInteger)arg3 representativeItemIdentifier:(NSInteger)arg4 propertiesCache:(id)arg5 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(NSInteger)arg0 itemsQuery:(id)arg1 grouping:(NSInteger)arg2 ;
-(id)initWithIdentifier:(NSInteger)arg0 valuesForProperties:(id)arg1 itemsQuery:(id)arg2 grouping:(NSInteger)arg3 representativeItemIdentifier:(NSInteger)arg4 ;
-(id)initWithMultiverseIdentifier:(id)arg0 library:(id)arg1 ;
-(id)items;
-(id)itemsQuery;
-(id)mediaLibrary;
-(id)representativeItem;
-(id)valueForProperty:(id)arg0 ;
-(id)valuesForProperties:(id)arg0 ;
-(void)_enumerateItemPersistentIDsUsingBlock:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateValuesForProperties:(id)arg0 usingBlock:(id)arg1 ;
-(void)invalidateCachedProperties;
-(void)setValue:(id)arg0 forProperty:(id)arg1 withCompletionBlock:(id)arg2 ;


@end


#endif