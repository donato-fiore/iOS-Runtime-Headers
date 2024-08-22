// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUPHOTOSELECTIONENTRY_H
#define PUPHOTOSELECTIONENTRY_H

@class NSMutableSet, NSMutableIndexSet, PHAssetCollection, PHFetchResult, NSArray, NSIndexSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PUPhotoSelectionEntry : NSObject <NSCopying>

 {
    BOOL _hasValidAssetIndexes;
    NSMutableSet *_selectedAssets;
    NSMutableIndexSet *_selectedIndexes;
}


@property (readonly, nonatomic) PHAssetCollection *assetCollection; // ivar: _assetCollection
@property (readonly, nonatomic) PHFetchResult *fetchResult; // ivar: _fetchResult
@property (readonly, nonatomic) NSArray *selectedAssets;
@property (readonly, nonatomic) NSIndexSet *selectedIndexes;


-(BOOL)isIndexSelected:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAssetCollection:(id)arg0 fetchResult:(id)arg1 uniqueSelectedAssets:(id)arg2 ;
-(void)_ensureValidAssetIndexes;
-(void)deselectAssetsAtIndexes:(id)arg0 ;
-(void)enumerateSelectedAssetsWithBlock:(id)arg0 ;
-(void)handlePhotoLibraryChange:(id)arg0 ;
-(void)invalidateAllAssetIndexes;
-(void)selectAssetsAtIndexes:(id)arg0 ;


@end


#endif