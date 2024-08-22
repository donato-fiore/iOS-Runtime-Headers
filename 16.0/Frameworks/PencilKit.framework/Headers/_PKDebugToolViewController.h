// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PKDEBUGTOOLVIEWCONTROLLER_H
#define _PKDEBUGTOOLVIEWCONTROLLER_H

@class UIViewController, NSString, UIButton, UILabel, UICollectionView, NSArray;
@protocol UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UIPopoverPresentationControllerDelegate, PKInkAttributesPickerDelegate;


#import "PKTiledView.h"

@interface _PKDebugToolViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UIPopoverPresentationControllerDelegate, PKInkAttributesPickerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIButton *dismissButton; // ivar: _dismissButton
@property (readonly, nonatomic) UILabel *doNotFileBugsLabel; // ivar: _doNotFileBugsLabel
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) PKTiledView *tiledView; // ivar: _tiledView
@property (readonly, nonatomic) UICollectionView *toolCollectionView; // ivar: _toolCollectionView
@property (readonly, nonatomic) NSArray *tools; // ivar: _tools


-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)_images;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)_dismissPane;
-(void)_populateTools;
-(void)_showInkAttributesPickerFromView:(id)arg0 frame:(struct CGRect )arg1 ink:(id)arg2 shouldHideArrow:(BOOL)arg3 completion:(id)arg4 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)inkAttributesPickerDidChangeSelectedInk:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif