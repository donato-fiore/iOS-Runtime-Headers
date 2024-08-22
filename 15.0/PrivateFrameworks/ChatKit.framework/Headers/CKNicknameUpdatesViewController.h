// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKNICKNAMEUPDATESVIEWCONTROLLER_H
#define CKNICKNAMEUPDATESVIEWCONTROLLER_H

@class UIViewController, UICollectionViewCompositionalLayout, UICollectionViewDiffableDataSource, NSString, NSArray;
@protocol UICollectionViewDelegate, CKNicknameUpdatesCollectionViewCellDelegate, CKNicknameUpdatesViewControllerDelegate;


#import "CKNicknameUpdatesCollectionView.h"

@interface CKNicknameUpdatesViewController : UIViewController <UICollectionViewDelegate, CKNicknameUpdatesCollectionViewCellDelegate>



@property (retain, nonatomic) CKNicknameUpdatesCollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) UICollectionViewCompositionalLayout *collectionViewLayout; // ivar: _collectionViewLayout
@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKNicknameUpdatesViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *nicknameUpdates; // ivar: _nicknameUpdates
@property (readonly) Class superclass;


-(BOOL)canBecomeFirstResponder;
-(NSUInteger)cellOrderForIndexPath:(id)arg0 ;
-(id)cellForItemInCollectionView:(id)arg0 atIndexPath:(id)arg1 withIdentifier:(id)arg2 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)_doneButtonTapped:(id)arg0 ;
-(void)_nicknameStateChanged:(id)arg0 ;
-(void)dealloc;
-(void)reloadData;
-(void)updateCell:(id)arg0 selectedAction:(NSUInteger)arg1 sourceView:(id)arg2 ;
-(void)updatePreferredContentSize;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif