// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PXDISPLAYASSETINDEXSUBFETCHRESULT_H
#define _PXDISPLAYASSETINDEXSUBFETCHRESULT_H

@class NSIndexSet, NSString;
@protocol PXDisplayAssetFetchResult, PXDisplayAsset;

#import <Foundation/Foundation.h>


@interface _PXDisplayAssetIndexSubfetchResult : NSObject <PXDisplayAssetFetchResult>

 {
    id<PXDisplayAssetFetchResult> *_originalFetchResult;
    NSIndexSet *_indexSet;
    *NSInteger _indexMap;
}


@property (readonly, nonatomic) NSInteger count; // ivar: _count
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<PXDisplayAsset> *firstObject;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<PXDisplayAsset> *lastObject;
@property (readonly) Class superclass;


-(BOOL)containsObject:(id)arg0 ;
-(NSUInteger)cachedCountOfAssetsWithMediaType:(NSInteger)arg0 ;
-(NSUInteger)countOfAssetsWithMediaType:(NSInteger)arg0 ;
-(id)initWithFetchResult:(id)arg0 indexSet:(id)arg1 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(id)objectsAtIndexes:(id)arg0 ;
-(id)thumbnailAssetAtIndex:(NSUInteger)arg0 ;
-(void)dealoc;


@end


#endif