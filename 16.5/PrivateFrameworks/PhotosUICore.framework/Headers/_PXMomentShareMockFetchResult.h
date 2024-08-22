// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PXMOMENTSHAREMOCKFETCHRESULT_H
#define _PXMOMENTSHAREMOCKFETCHRESULT_H

@class NSArray, NSString;
@protocol PXDisplayAssetFetchResult, PXDisplayAsset;

#import <Foundation/Foundation.h>


@interface _PXMomentShareMockFetchResult : NSObject <PXDisplayAssetFetchResult>

 {
    NSArray *_assets;
}


@property (readonly, nonatomic) NSInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<PXDisplayAsset> *firstObject;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<PXDisplayAsset> *lastObject;
@property (readonly) Class superclass;


+(id)momentShareMockFetchResultWithPhotosCount:(NSUInteger)arg0 videosCount:(NSUInteger)arg1 ;
-(BOOL)containsObject:(id)arg0 ;
-(NSUInteger)cachedCountOfAssetsWithMediaType:(NSInteger)arg0 ;
-(NSUInteger)countOfAssetsWithMediaType:(NSInteger)arg0 ;
-(id)initWithAssets:(id)arg0 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(id)objectsAtIndexes:(id)arg0 ;
-(id)thumbnailAssetAtIndex:(NSUInteger)arg0 ;


@end


#endif