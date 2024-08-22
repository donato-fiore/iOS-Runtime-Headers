// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PLGENERICALBUM_H
#define _PLGENERICALBUM_H

@class NSMutableSet, NSNumber;


#import "PLManagedObject.h"
#import "PLManagedAsset.h"
#import "PLManagedFolder.h"

@interface _PLGenericAlbum : PLManagedObject

@property (retain, nonatomic) NSMutableSet *albumLists;
@property (nonatomic) int cachedCount;
@property (nonatomic) int cachedPhotosCount;
@property (nonatomic) int cachedVideosCount;
@property (retain, nonatomic) PLManagedAsset *customKeyAsset;
@property (nonatomic) BOOL customSortAscending;
@property (nonatomic) int customSortKey;
@property (retain, nonatomic) NSNumber *kind;
@property (retain, nonatomic) PLManagedFolder *parentFolder;
@property (nonatomic) int pendingItemsCount;
@property (nonatomic) int pendingItemsType;
@property (nonatomic) NSInteger syncEventOrderKey;


+(id)entityName;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg0 ;


@end


#endif