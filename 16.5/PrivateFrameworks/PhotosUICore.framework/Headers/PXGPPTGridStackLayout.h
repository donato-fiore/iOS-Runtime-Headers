// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGPPTGRIDSTACKLAYOUT_H
#define PXGPPTGRIDSTACKLAYOUT_H

@class UIColor, NSIndexSet, NSString;
@protocol PXGSublayoutProvider, PXGSolidColorSource, PXGAssetBadgeDecorationSource, PXGSelectionDecorationSource;


#import "PXGStackLayout.h"

@interface PXGPPTGridStackLayout : PXGStackLayout <PXGSublayoutProvider, PXGSolidColorSource, PXGAssetBadgeDecorationSource, PXGSelectionDecorationSource>

 {
    NSInteger _numberOfItemsPerSection;
    NSInteger _numberOfColumns;
    BOOL _useAssetBadgeDecoration;
    NSInteger _selectionDecorationStyle;
    BOOL _decorated;
    NSInteger _estimatedNumberOfRowsPerSection;
    UIColor *_spriteColor;
    NSIndexSet *_selectedItemsPerSection;
    PXAssetBadgeInfo _assetBadgeInfos;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)wantsAssetBadgeDecorationsInLayout:(id)arg0 ;
-(BOOL)wantsFileSizeBadgesInLayout:(id)arg0 ;
-(BOOL)wantsInteractiveFavoriteBadgesInLayout:(id)arg0 ;
-(NSInteger)overallSelectionOrderAtSpriteIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(NSInteger)selectionDecorationStyleInLayout:(id)arg0 ;
-(NSUInteger)selectionDecorationAdditionsInLayout:(id)arg0 ;
-(id)colorAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)initWithSettings:(id)arg0 ;
-(id)layout:(id)arg0 createSublayoutAtIndex:(NSInteger)arg1 ;
-(id)selectedSpriteIndexesInLayout:(id)arg0 ;
-(struct CGSize )layout:(id)arg0 estimatedContentSizeForSublayoutAtIndex:(NSInteger)arg1 referenceSize:(struct CGSize )arg2 ;
-(struct PXAssetBadgeInfo )assetBadgeInfoForAsset:(id)arg0 atSpriteIndex:(unsigned int)arg1 inLayout:(id)arg2 ;
-(void)_initializeBadgeInfos;
-(void)_initializeSelectedItems;


@end


#endif