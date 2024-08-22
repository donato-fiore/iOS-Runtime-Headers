// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUGRIDRENDEREDSTRIP_H
#define PUGRIDRENDEREDSTRIP_H

@class UICollectionReusableView, UIView, NSArray;
@protocol PUGridRenderedStripDataSource;


#import "PUSectionedGridLayout.h"

@interface PUGridRenderedStrip : UICollectionReusableView

@property (nonatomic, setter=_setNeedsRendering:) BOOL _needsRendering; // ivar: __needsRendering
@property (readonly, nonatomic) UIView *_sideExtendedContentView; // ivar: __sideExtendedContentView
@property (nonatomic) int backgroundColorValue; // ivar: _backgroundColorValue
@property (nonatomic) NSUInteger contentExtenderType; // ivar: _contentExtenderType
@property (weak, nonatomic) NSObject<PUGridRenderedStripDataSource> *dataSource; // ivar: _dataSource
@property (nonatomic) BOOL extendsToTop; // ivar: _extendsToTop
@property (nonatomic) CGSize interItemSpacing; // ivar: _interItemSpacing
@property (nonatomic) CGFloat itemContentScale; // ivar: _itemContentScale
@property (retain, nonatomic) NSArray *itemIndexPaths; // ivar: _itemIndexPaths
@property (nonatomic) CGSize itemSize; // ivar: _itemSize
@property (weak, nonatomic) PUSectionedGridLayout *layout; // ivar: _layout
@property (nonatomic) CGFloat leftContentInset; // ivar: _leftContentInset
@property (readonly, nonatomic) NSInteger numberOfColumns;
@property (readonly, nonatomic) UIView *topContentView; // ivar: _topContentView
@property (readonly, nonatomic) _NSRange visualItemRange; // ivar: _visualItemRange
@property (readonly, nonatomic) NSInteger visualSectionIndex; // ivar: _visualSectionIndex


-(BOOL)_disableRasterizeInAnimations;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_render;
-(void)_updateExtendedContents;
-(void)applyLayoutAttributes:(id)arg0 ;
-(void)setNeedsRendering;


@end


#endif