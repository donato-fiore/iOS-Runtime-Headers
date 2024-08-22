// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTAVATARLIBRARYVIEWCONTROLLER_H
#define AVTAVATARLIBRARYVIEWCONTROLLER_H

@class UIViewController, UICollectionView, NSString, UILongPressGestureRecognizer;
@protocol UICollectionViewDelegate, UICollectionViewDataSource, AVTAvatarLibraryModelDelegate, AVTAvatarLibraryViewControllerDelegate;


#import "AVTUIEnvironment.h"
#import "_AVTAvatarRecordImageProvider.h"
#import "AVTAvatarLibraryModel.h"

@interface AVTAvatarLibraryViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, AVTAvatarLibraryModelDelegate>



@property (readonly, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AVTAvatarLibraryViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) AVTUIEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _AVTAvatarRecordImageProvider *imageProvider; // ivar: _imageProvider
@property (readonly, nonatomic) UILongPressGestureRecognizer *longPressGesture; // ivar: _longPressGesture
@property (readonly, nonatomic) AVTAvatarLibraryModel *model; // ivar: _model
@property (readonly) Class superclass;


-(BOOL)shouldUseLargeLayout;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initWithAvatarStore:(id)arg0 ;
-(id)initWithAvatarStore:(id)arg0 environment:(id)arg1 ;
-(id)initWithModel:(id)arg0 imageProvider:(id)arg1 environment:(id)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(NSInteger)arg2 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)didAddRecord:(id)arg0 ;
-(void)didDeleteRecord:(id)arg0 ;
-(void)didEditRecord:(id)arg0 ;
-(void)didLongPress:(id)arg0 ;
-(void)didTapDoneButton:(id)arg0 ;
-(void)didUpdateLibraryItems:(id)arg0 ;
-(void)dismissController:(id)arg0 completion:(id)arg1 ;
-(void)insertItemsAtIndexes:(id)arg0 deleteItemsAtIndexes:(id)arg1 reloadItemsAtIndexes:(id)arg2 ;
-(void)loadView;
-(void)presentUIViewController:(id)arg0 forItem:(id)arg1 ;
-(void)presetEditorViewController:(id)arg0 ;
-(void)updateVisibleHeaders;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif