// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VIDEOSEXTRASMAINTEMPLATEVIEWCONTROLLER_H
#define VIDEOSEXTRASMAINTEMPLATEVIEWCONTROLLER_H

@class UICollectionViewFlowLayout, NSLayoutConstraint, UICollectionView, NSString, NSIndexPath, NSArray, UIView;
@protocol UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate, VideosExtrasMainMenuSectionMetricsDataSource;


#import "VideosExtrasTemplateViewController.h"
#import "VideosExtrasMainMenuSectionMetrics.h"

@interface VideosExtrasMainTemplateViewController : VideosExtrasTemplateViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate, VideosExtrasMainMenuSectionMetricsDataSource>

 {
    VideosExtrasMainMenuSectionMetrics *_mainMenuMetrics;
    UICollectionViewFlowLayout *_collectionViewLayout;
    NSLayoutConstraint *_collectionViewHeightConstraint;
    UICollectionView *_menuBarCollectionView;
    BOOL _hasHadMenuSelection;
}


@property (readonly, nonatomic) CGFloat collectionViewHeight;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<UICollectionViewDelegate> *didSelectDelegate; // ivar: _didSelectDelegate
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSIndexPath *indexPathOfFeaturedItem;
@property (readonly, nonatomic) NSArray *mainMenuItemElements;
@property (readonly, nonatomic) UIView *menuBarView; // ivar: _menuBarView
@property (readonly) Class superclass;


-(BOOL)_collectionView:(id)arg0 indexPathShouldDisplayAsSelected:(id)arg1 ;
-(BOOL)_isFeatureItemAtIndexPath:(id)arg0 ;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(BOOL)showsPlaceholder;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfItemsForSectionMetrics:(id)arg0 ;
-(id)_menuItems;
-(id)_textElementAtIndex:(NSInteger)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithDocument:(id)arg0 options:(id)arg1 context:(id)arg2 ;
-(id)templateElement;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct CGSize )sectionMetrics:(id)arg0 sizeForItemAtIndex:(NSInteger)arg1 withFontDescriptor:(id)arg2 ;
-(void)_configureCell:(id)arg0 forIndexPath:(id)arg1 ;
-(void)_dynamicTypeChanged;
-(void)_prepareCollectionView;
-(void)_prepareLayout;
-(void)_recalculateSizes;
-(void)_startBackgroundAudio;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif