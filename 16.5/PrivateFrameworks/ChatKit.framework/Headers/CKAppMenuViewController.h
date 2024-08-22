// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKAPPMENUVIEWCONTROLLER_H
#define CKAPPMENUVIEWCONTROLLER_H

@class UIViewController, UIVisualEffectView, UICollectionView, UICollectionViewDiffableDataSource, NSString, NSArray;
@protocol UICollectionViewDelegate, CKAppMenuCollectionViewCellDelegate, CKAppMenuViewControllerDelegate;



@interface CKAppMenuViewController : UIViewController <UICollectionViewDelegate, CKAppMenuCollectionViewCellDelegate>



@property (retain, nonatomic) UIVisualEffectView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKAppMenuViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *menuItems; // ivar: _menuItems
@property (readonly) Class superclass;


-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(struct CGSize )preferredContentSize;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)appMenuCollectionViewCell:(id)arg0 didHoverWithState:(NSInteger)arg1 ;
-(void)appMenuCollectionViewCellWasTapped:(id)arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)handleSelectionOfIndexPath:(id)arg0 ;
-(void)keyCommandEscape:(id)arg0 ;
-(void)keyCommandReturn:(id)arg0 ;
-(void)updateBackgroundVisualEffect;
-(void)viewDidLoad;


@end


#endif