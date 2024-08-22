// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXMEMORIESUITILESOURCE_H
#define PXMEMORIESUITILESOURCE_H

@class NSMutableSet, NSString, NSIndexSet;
@protocol PXReusableObjectPoolDelegate, PXTileSource, PXTilingControllerPreheatHandler, PXMemoriesUITileSourceDelegate;

#import <Foundation/Foundation.h>

#import "PXFeedDateFormatter.h"
#import "PXPhotoKitUIMediaProvider.h"
#import "PXUIScrollViewController.h"
#import "PXReusableObjectPool.h"

@interface PXMemoriesUITileSource : NSObject <PXReusableObjectPoolDelegate, PXTileSource, PXTilingControllerPreheatHandler>

 {
    NSMutableSet *_checkedOutTiles;
    ? _delegateRespondsTo;
}


@property (readonly, nonatomic) PXFeedDateFormatter *_dateFormatter; // ivar: __dateFormatter
@property (readonly, nonatomic) PXPhotoKitUIMediaProvider *_mediaProvider; // ivar: __mediaProvider
@property (readonly, nonatomic) NSUInteger _memoriesStyle; // ivar: __memoriesStyle
@property (nonatomic) BOOL canRenderTextAsynchronously; // ivar: _canRenderTextAsynchronously
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXMemoriesUITileSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSIndexSet *providingTilesForKinds; // ivar: _providingTilesForKinds
@property (readonly, nonatomic) PXUIScrollViewController *scrollViewController; // ivar: _scrollViewController
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXReusableObjectPool *viewTilePool; // ivar: _viewTilePool


-(*void)_tileForIdentifier:(struct PXTileIdentifier )arg0 layout:(id)arg1 ;
-(*void)checkOutTileForIdentifier:(struct PXTileIdentifier )arg0 layout:(id)arg1 ;
-(BOOL)providesTileForIdentifier:(struct PXTileIdentifier )arg0 ;
-(id)_assetsBySizeWithTileIdentifiers:(struct PXTileIdentifier *)arg0 withGeometries:(struct PXTileGeometry *)arg1 count:(NSUInteger)arg2 ;
-(id)initWithScrollViewController:(id)arg0 memoriesStyle:(NSUInteger)arg1 ;
-(void)_dateFormatterChanged:(id)arg0 ;
-(void)_getImageRequester:(*id)arg0 title:(*id)arg1 subtitle:(*id)arg2 forIndexPath:(struct PXSimpleIndexPath )arg3 dataSource:(id)arg4 ;
-(void)_updateDateLabelTile:(id)arg0 ;
-(void)checkInTile:(*void)arg0 withIdentifier:(struct PXTileIdentifier )arg1 ;
-(void)dealloc;
-(void)reusableObjectPool:(id)arg0 didCreateReusableObject:(id)arg1 ;
-(void)reusableObjectPool:(id)arg0 didEvictReusableObject:(id)arg1 ;
-(void)startPreheatingTilesForIdentifiers:(struct PXTileIdentifier *)arg0 withGeometries:(struct PXTileGeometry *)arg1 count:(NSUInteger)arg2 context:(*void)arg3 ;
-(void)stopPreheatingTilesForIdentifiers:(struct PXTileIdentifier *)arg0 withGeometries:(struct PXTileGeometry *)arg1 count:(NSUInteger)arg2 context:(*void)arg3 ;


@end


#endif