// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPHOTOSDETAILSACTIONSTILINGLAYOUT_H
#define PXPHOTOSDETAILSACTIONSTILINGLAYOUT_H



#import "PXTilingLayout.h"

@interface PXPhotosDetailsActionsTilingLayout : PXTilingLayout {
    NSInteger _dataSourceIdentifier;
}


@property (readonly, nonatomic) NSInteger _numberOfSeparators; // ivar: __numberOfSeparators
@property (readonly, nonatomic) CGFloat interItemSpacing; // ivar: _interItemSpacing
@property (readonly, nonatomic) NSInteger numberOfItems; // ivar: _numberOfItems
@property (nonatomic) CGFloat rowHeight; // ivar: _rowHeight
@property (nonatomic) CGFloat separatorHeight; // ivar: _separatorHeight
@property (nonatomic) BOOL shouldInsetAllSeparators; // ivar: _shouldInsetAllSeparators
@property (nonatomic) BOOL shouldShowSeparators; // ivar: _shouldShowSeparators


-(BOOL)getGeometry:(struct PXTileGeometry *)arg0 group:(*NSUInteger)arg1 userData:(*id)arg2 forTileWithIdentifier:(struct PXTileIdentifier )arg3 ;
-(CGFloat)_contentWidth;
-(id)initWithNumberOfItems:(NSInteger)arg0 ;
-(struct CGRect )_frameForItemAtIndex:(NSInteger)arg0 ;
-(struct CGRect )_frameForSeparatorAtIndex:(NSInteger)arg0 ;
-(struct CGRect )contentBounds;
-(void)enumerateTilesInRect:(struct CGRect )arg0 withOptions:(id)arg1 usingBlock:(id)arg2 ;
-(void)prepareLayout;


@end


#endif