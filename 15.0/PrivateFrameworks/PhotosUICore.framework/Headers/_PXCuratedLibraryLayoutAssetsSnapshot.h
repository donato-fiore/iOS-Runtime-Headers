// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PXCURATEDLIBRARYLAYOUTASSETSSNAPSHOT_H
#define _PXCURATEDLIBRARYLAYOUTASSETSSNAPSHOT_H

@class NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PXAssetsDataSource.h"

@interface _PXCuratedLibraryLayoutAssetsSnapshot : NSObject {
    PXAssetsDataSource *_dataSource;
    NSDictionary *_spriteSnapshotIndexByAssetIdentifier;
    NSInteger _spriteSnapshotsCount;
    NSInteger _spriteSnapshotsCapacity;
    *? _spriteSnapshots;
}


@property (retain, nonatomic) NSObject<NSCopying> *dominantAssetIdentifier;
@property (readonly, nonatomic) CGRect fullyVisibleRect; // ivar: _fullyVisibleRect
@property (nonatomic) CGPoint offset; // ivar: _offset
@property (readonly, nonatomic) CGRect visibleRect; // ivar: _visibleRect
@property (readonly, nonatomic) NSInteger zoomLevel; // ivar: _zoomLevel


-(NSInteger)_addSpriteSnapshot:(struct ? )arg0 ;
-(id)assetIdentifierForAssetReference:(id)arg0 ;
-(id)initWithLayout:(id)arg0 ;
-(struct ? )spriteSnapshotForAssetWithIdentifier:(id)arg0 ;
-(void)dealloc;
-(void)enumerateAssetIdentifiersUsingBlock:(id)arg0 ;
-(void)enumerateAssetInfoForGeometries:(struct ? *)arg0 styles:(struct ? *)arg1 infos:(struct ? *)arg2 count:(unsigned int)arg3 options:(NSUInteger)arg4 usingBlock:(id)arg5 ;


@end


#endif