// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPTOCOLLECTIONTARGETLIBRARY_H
#define NPTOCOLLECTIONTARGETLIBRARY_H

@class NSHashTable, NSDictionary, NRDevice, NSDate;

#import <Foundation/Foundation.h>

#import "NPTOLibraryInfo.h"

@interface NPTOCollectionTargetLibrary : NSObject {
    NSHashTable *_observers;
    NPTOLibraryInfo *_libraryInfo;
    id *_libraryCollectionTargetMapChangeObserver;
    id *_syncingChangeObserver;
    id *_syncNeededChangeObserver;
    NSDictionary *_libraryAssetCollections;
}


@property (readonly, nonatomic) NSInteger collectionTarget; // ivar: _collectionTarget
@property (readonly, nonatomic) NRDevice *device; // ivar: _device
@property (readonly, nonatomic) NSDate *lastUpdatedDate;


-(BOOL)isSyncNeeded;
-(BOOL)isSyncingAssets;
-(BOOL)isSyncingAssetsInAssetCollection:(id)arg0 ;
-(NSUInteger)countOfAssetsInAssetCollection:(id)arg0 options:(id)arg1 ;
-(NSUInteger)countOfAssetsWithOptions:(id)arg0 ;
-(NSUInteger)expectedCountOfAssets;
-(NSUInteger)expectedCountOfAssetsInAssetCollection:(id)arg0 ;
-(id)assetCollections;
-(id)fetchAssetsInAssetCollection:(id)arg0 options:(id)arg1 ;
-(id)fetchAssetsWithOptions:(id)arg0 ;
-(id)fetchKeyAssetsInAssetCollection:(id)arg0 options:(id)arg1 ;
-(id)initWithCollectionTarget:(NSInteger)arg0 device:(id)arg1 ;
-(id)metadataForAssetCollection:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif