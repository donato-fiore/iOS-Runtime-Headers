// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHTHUMBNAILASSET_H
#define PHTHUMBNAILASSET_H

@class NSKnownKeysDictionary, NSString, NSManagedObjectID;
@protocol _PLThumbnailLoadingAsset, PHThumbnailAsset, PHBatchFetchedPropertySet;

#import <Foundation/Foundation.h>

#import "PHPhotoLibrary.h"

@interface PHThumbnailAsset : NSObject <_PLThumbnailLoadingAsset, PHThumbnailAsset, PHBatchFetchedPropertySet>

 {
    NSKnownKeysDictionary *_dictionary;
}


@property (readonly, nonatomic) NSInteger cloudPlaceholderKind;
@property (readonly, nonatomic) BOOL complete;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSManagedObjectID *objectID; // ivar: _objectID
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger thumbnailIndex;


+(BOOL)useNoIndexSelf;
+(BOOL)useObjectFetchingContext;
+(NSInteger)batchSize;
+(NSInteger)cacheSize;
+(id)entityName;
+(id)fetchType;
+(id)propertiesToFetch;
+(id)propertiesToSortBy;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)effectiveThumbnailIndex;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithObjectID:(id)arg0 knownKeysDictionary:(id)arg1 photoLibrary:(id)arg2 ;


@end


#endif