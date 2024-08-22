// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VIDEOSEXTRASGRIDELEMENTVIEWCONTROLLER_H
#define VIDEOSEXTRASGRIDELEMENTVIEWCONTROLLER_H

@class UIView, NSArray, UICollectionView, NSString, IKGridElement;
@protocol UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout;


#import "VideosExtrasViewElementViewController.h"
#import "_VideosExtrasShelfCollectionViewLayout.h"
#import "_VideosExtrasGridHeaderView.h"
#import "VideosExtrasGridViewControllerStyle.h"

@interface VideosExtrasGridElementViewController : VideosExtrasViewElementViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>

 {
    UIView *_titleRule;
    NSArray *_titleRuleConstraints;
    NSArray *_headerViewConstraints;
    UICollectionView *_collectionView;
    _VideosExtrasShelfCollectionViewLayout *_flowLayout;
    _VideosExtrasGridHeaderView *_headerView;
}


@property (readonly, nonatomic) UICollectionView *collectionView;
@property (readonly, nonatomic) VideosExtrasGridViewControllerStyle *currentStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) VideosExtrasGridViewControllerStyle *extraLargeStyle; // ivar: _extraLargeStyle
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VideosExtrasGridViewControllerStyle *largeStyle; // ivar: _largeStyle
@property (retain, nonatomic) VideosExtrasGridViewControllerStyle *mediumStyle; // ivar: _mediumStyle
@property (nonatomic, getter=isShelfStyle) BOOL shelfStyle; // ivar: _shelfStyle
@property (retain, nonatomic) VideosExtrasGridViewControllerStyle *smallStyle; // ivar: _smallStyle
@property (readonly) Class superclass;
@property (readonly) IKGridElement *viewElement;
@property (retain, nonatomic) VideosExtrasGridViewControllerStyle *wideStyle; // ivar: _wideStyle


+(id)_defaultCellStyle;
+(id)_fontAttributesForTextStyle:(id)arg0 ;
+(id)extraLargeDetailStyle;
+(id)extraLargeGalleryStyle;
+(id)extraLargeStackGridStyle;
+(id)keyPathsForValuesAffectingContentScrollView;
+(id)largeDetailStyle;
+(id)largeGalleryStyle;
+(id)largeStackGridStyle;
+(id)mediumDetailStyle;
+(id)mediumGalleryStyle;
+(id)mediumStackGridStyle;
+(id)smallDetailStyle;
+(id)smallGalleryStyle;
+(id)smallStackGridStyle;
+(id)wideDetailStyle;
+(id)wideGalleryStyle;
+(id)wideStackGridStyle;
-(BOOL)_hasDescriptionText;
-(BOOL)_sectionIndexIsDescriptionSection:(NSInteger)arg0 ;
-(CGFloat)_cellSpacingForSection:(id)arg0 ;
-(CGFloat)collectionView:(id)arg0 layout:(id)arg1 minimumInteritemSpacingForSectionAtIndex:(NSInteger)arg2 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSInteger)preferredLayoutAttribute;
-(id)_cellStyleForSection:(id)arg0 ;
-(id)_lockupForIndexPath:(id)arg0 ;
-(id)_narrowStyle;
-(id)_sectionElementForIndex:(NSUInteger)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)contentScrollView;
-(id)initWithViewElement:(id)arg0 ;
-(id)preferredLayoutGuide;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct CGSize )preferredContentSize;
-(struct UIEdgeInsets )_sectionInsetsForSection:(id)arg0 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)_dynamicTypeDidChange;
-(void)_prepareLayout;
-(void)collectionView:(id)arg0 didHighlightItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif