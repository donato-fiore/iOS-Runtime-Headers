// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIQUICKLINKSVIEWCONTROLLER_H
#define SKUIQUICKLINKSVIEWCONTROLLER_H

@class UIViewController, UICollectionView, NSString, NSArray;
@protocol UICollectionViewDataSource, UICollectionViewDelegate, SKUIQuicklinksViewControllerDelegate;


#import "SKUIColorScheme.h"
#import "SKUIQuicklinksView.h"

@interface SKUIQuicklinksViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate>

 {
    UICollectionView *_collectionView;
    SKUIColorScheme *_colorScheme;
    SKUIQuicklinksView *_quicklinksView;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIQuicklinksViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *indexPathsForVisibleItems;
@property (copy, nonatomic) NSArray *links; // ivar: _links
@property (readonly) Class superclass;


-(NSInteger)_numberOfRows;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(struct CGRect )frameForLinkAtIndex:(NSInteger)arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)setColoringWithColorScheme:(id)arg0 ;
-(void)setTitle:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)willTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif