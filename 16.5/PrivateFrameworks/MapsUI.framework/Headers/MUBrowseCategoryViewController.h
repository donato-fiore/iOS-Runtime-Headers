// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUBROWSECATEGORYVIEWCONTROLLER_H
#define MUBROWSECATEGORYVIEWCONTROLLER_H

@class UIViewController, NSArray, UIColor, NSLayoutConstraint, NSString, MKMapItem, UIFont;
@protocol UICollectionViewDelegate, UICollectionViewDataSource, MUBrowseCategoryViewControllerDelegate;


#import "MUBrowseCategoryCollectionView.h"
#import "MUFixedToTopCollectionViewFlowLayout.h"

@interface MUBrowseCategoryViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource>



@property (retain, nonatomic) NSArray *browseItems; // ivar: _browseItems
@property (readonly, nonatomic) NSArray *buttons;
@property (retain, nonatomic) UIColor *cellTitleLabelTextColor; // ivar: _cellTitleLabelTextColor
@property (retain, nonatomic) MUBrowseCategoryCollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) NSLayoutConstraint *collectionViewBottomConstraint; // ivar: _collectionViewBottomConstraint
@property (retain, nonatomic) MUFixedToTopCollectionViewFlowLayout *collectionViewFlowLayout; // ivar: _collectionViewFlowLayout
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MUBrowseCategoryViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableBottomPadding; // ivar: _disableBottomPadding
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MKMapItem *mapItem; // ivar: _mapItem
@property (nonatomic) CGSize preferredCellSize; // ivar: _preferredCellSize
@property (retain, nonatomic) UIFont *preferredCellTitleLabelFont; // ivar: _preferredCellTitleLabelFont
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)didDisplayCategoriesNotificationName;
-(id)initWithMapItem:(id)arg0 ;
-(id)willStartDisplayCategoriesNotificationName;
-(int)placeCardTypeForAnalytics;
-(void)_ppt_postNotificationName:(id)arg0 object:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)contentSizeCategoryDidChange:(id)arg0 ;
-(void)setupCollectionView;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateCellTitleLabelTextColor;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif