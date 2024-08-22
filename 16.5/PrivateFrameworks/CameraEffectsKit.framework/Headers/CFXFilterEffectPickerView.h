// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CFXFILTEREFFECTPICKERVIEW_H
#define CFXFILTEREFFECTPICKERVIEW_H

@class UILabel, UIView, NSIndexPath, UISelectionFeedbackGenerator;
@protocol CFXFilterEffectPickerViewDataSource, CFXFilterEffectPickerViewDelegate;


#import "CFXEffectPickerView.h"
#import "JTCollectionView.h"
#import "JTCollectionViewFlowLayout.h"

@interface CFXFilterEffectPickerView : CFXEffectPickerView

@property (nonatomic) NSUInteger cachedEffectCount; // ivar: _cachedEffectCount
@property (weak, nonatomic) JTCollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) JTCollectionViewFlowLayout *collectionViewLayout; // ivar: _collectionViewLayout
@property (retain, nonatomic) UILabel *compactSelectedTitleView; // ivar: _compactSelectedTitleView
@property (retain, nonatomic) UIView *compactSelectionView; // ivar: _compactSelectionView
@property (weak, nonatomic) UIView *contentView; // ivar: _contentView
@property (weak, nonatomic) NSObject<CFXFilterEffectPickerViewDataSource> *dataSource; // ivar: dataSource
@property (weak, nonatomic) NSObject<CFXFilterEffectPickerViewDelegate> *delegate; // ivar: delegate
@property (nonatomic, getter=isDisplayingExpandedLayout) BOOL displayExpandedLayout; // ivar: _displayExpandedLayout
@property (retain, nonatomic) NSIndexPath *lastScrollIndexPath; // ivar: _lastScrollIndexPath
@property (nonatomic) CGSize lastViewSize; // ivar: _lastViewSize
@property (nonatomic) CGPoint previousScrollOffset; // ivar: _previousScrollOffset
@property (retain, nonatomic) UISelectionFeedbackGenerator *selectionFeedbackGenerator; // ivar: _selectionFeedbackGenerator


-(BOOL)isDisplayingCompactLayout;
-(NSUInteger)selectedIndex;
-(id)effectPickerCellNibName;
-(id)effectPickerCellReuseIdentifier;
-(id)effectPickerNibName;
-(id)indexPathForCenterOfCollectionView;
-(id)layoutAttributesForNearestItemToCenterWithOffset:(struct CGPoint )arg0 ;
-(void)CFX_selectInitialItem;
-(void)CFX_selectItemAtCellIndex:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)CFX_updateTitleForCenterItemAtIndex:(NSInteger)arg0 ;
-(void)buildCompactSelectionViews;
-(void)configureCell:(id)arg0 ;
-(void)configureCollectionViewLayout;
-(void)didScrollCollectionView;
-(void)didSelectItemAtCellIndex:(NSUInteger)arg0 ;
-(void)layoutSubviews;
-(void)orientationDidChange;
-(void)reloadData;
-(void)removeCompactSelectionViews;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)selectCenterItem;
-(void)selectEffectWithIdentifier:(id)arg0 ;
-(void)subviewsDidLoad;
-(void)updatePreviewEffectsWhenReloadComplete;


@end


#endif