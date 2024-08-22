// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKEFFECTSELECTIONVIEWCONTROLLER_H
#define CKEFFECTSELECTIONVIEWCONTROLLER_H

@class UIViewController, UICollectionView, UICollectionViewDiffableDataSource, NSString, UIColor, NSArray;
@protocol UICollectionViewDelegate, CKEffectSelectionViewControllerDelegate;


#import "CKFullScreenEffectManager.h"

@interface CKEffectSelectionViewController : UIViewController <UICollectionViewDelegate>



@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKEffectSelectionViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CKFullScreenEffectManager *fsem; // ivar: _fsem
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIColor *labelColor; // ivar: _labelColor
@property (nonatomic) BOOL labelUsesDarkVibrancy; // ivar: _labelUsesDarkVibrancy
@property (retain, nonatomic) NSString *selectedEffectIdentifier;
@property (retain, nonatomic) NSArray *sendEffects; // ivar: _sendEffects
@property (readonly) Class superclass;


+(id)orderedEffectIdentifiers;
-(BOOL)becomeFirstResponder;
-(CGFloat)maxCellHeight;
-(id)effectImageForIndexPath:(id)arg0 ;
-(id)effectTitleForIndexPath:(id)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif