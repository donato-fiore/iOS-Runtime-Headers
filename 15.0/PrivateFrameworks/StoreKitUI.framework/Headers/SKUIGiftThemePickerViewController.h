// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIGIFTTHEMEPICKERVIEWCONTROLLER_H
#define SKUIGIFTTHEMEPICKERVIEWCONTROLLER_H

@class UIImage, UIPageControl, UITapGestureRecognizer, NSArray, NSString;
@protocol SKUIGiftConfigurationObserver, UICollectionViewDataSource, UICollectionViewDelegate;


#import "SKUIGiftStepViewController.h"
#import "SKUIGiftThemePickerFlowLayout.h"
#import "SKUIGiftThemeCollectionView.h"

@interface SKUIGiftThemePickerViewController : SKUIGiftStepViewController <SKUIGiftConfigurationObserver, UICollectionViewDataSource, UICollectionViewDelegate>

 {
    BOOL _animatingScrollView;
    SKUIGiftThemePickerFlowLayout *_flowLayout;
    SKUIGiftThemeCollectionView *_collectionView;
    UIImage *_itemImage;
    UIPageControl *_pageControl;
    NSInteger _selectedThemeIndex;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSArray *_themes;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isIPadLarge;
-(CGFloat)_cardHeight:(id)arg0 ;
-(CGFloat)_cardWidth;
-(CGFloat)_collectionViewWidth:(id)arg0 ;
-(CGFloat)_scrollInsetHorizontal:(id)arg0 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)_collectionView;
-(id)_flowLayout;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithGift:(id)arg0 configuration:(id)arg1 ;
-(void)_backgroundTapAction:(id)arg0 ;
-(void)_layoutCollectionViewWithTraits:(id)arg0 ;
-(void)_nextAction:(id)arg0 ;
-(void)_setItemImage:(id)arg0 error:(id)arg1 ;
-(void)_setSelectedThemeIndex:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)dealloc;
-(void)giftConfigurationController:(id)arg0 didLoadImageForTheme:(id)arg1 ;
-(void)loadView;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif