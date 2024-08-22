// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTFUNCAMAVATARPICKERCONTROLLER_H
#define AVTFUNCAMAVATARPICKERCONTROLLER_H

@class UIViewController, UICollectionView, NSString, NSArray, UICollectionViewFlowLayout, UIView;
@protocol UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, AVTViewSessionProviderDelegate, AVTObjectViewController, AVTAvatarPicker, AVTAvatarPickerDelegate, NSObject, AVTUILogger, AVTPresenterDelegate, AVTAvatarRecord, AVTAvatarStoreInternal;


#import "AVTCenteringCollectionViewDelegate.h"
#import "AVTRenderingScope.h"
#import "AVTUIEnvironment.h"
#import "_AVTAvatarRecordImageProvider.h"
#import "AVTFunCamAvatarPickerCollectionViewLayout.h"
#import "AVTAvatarListImageItem.h"
#import "AVTFunCamAvatarPickerStyle.h"

@interface AVTFunCamAvatarPickerController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, AVTViewSessionProviderDelegate, AVTObjectViewController, AVTAvatarPicker>



@property (weak, nonatomic) NSObject<AVTAvatarPickerDelegate> *avatarPickerDelegate; // ivar: avatarPickerDelegate
@property (retain, nonatomic) AVTCenteringCollectionViewDelegate *centeringDelegate; // ivar: _centeringDelegate
@property (retain, nonatomic) NSObject<NSObject> *changeNotificationToken; // ivar: _changeNotificationToken
@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *editableRecords; // ivar: _editableRecords
@property (readonly, nonatomic) AVTRenderingScope *editableRecordsListRenderingScope; // ivar: _editableRecordsListRenderingScope
@property (readonly, nonatomic) AVTUIEnvironment *environment; // ivar: _environment
@property (retain, nonatomic) UICollectionViewFlowLayout *gridLayout; // ivar: _gridLayout
@property (readonly, nonatomic) AVTRenderingScope *gridRenderingScope; // ivar: _gridRenderingScope
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _AVTAvatarRecordImageProvider *imageProvider; // ivar: _imageProvider
@property (retain, nonatomic) NSArray *items; // ivar: _items
@property (nonatomic) CGRect lastUpdateViewBounds; // ivar: _lastUpdateViewBounds
@property (retain, nonatomic) AVTFunCamAvatarPickerCollectionViewLayout *listLayout; // ivar: _listLayout
@property (readonly, nonatomic) NSObject<AVTUILogger> *logger; // ivar: _logger
@property (nonatomic) NSUInteger mode; // ivar: _mode
@property (retain, nonatomic) AVTAvatarListImageItem *noneItem; // ivar: _noneItem
@property (weak, nonatomic) NSObject<AVTPresenterDelegate> *presenterDelegate; // ivar: presenterDelegate
@property (retain, nonatomic) NSArray *puppetRecords; // ivar: _puppetRecords
@property (retain, nonatomic) NSObject<AVTAvatarRecord> *selectedAvatarRecord; // ivar: _selectedAvatarRecord
@property (retain, nonatomic) NSObject<AVTAvatarStoreInternal> *store; // ivar: _store
@property (copy, nonatomic) AVTFunCamAvatarPickerStyle *style; // ivar: _style
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView *titlesClippingView; // ivar: _titlesClippingView
@property (retain, nonatomic) UICollectionView *titlesCollectionView; // ivar: _titlesCollectionView
@property (retain, nonatomic) UIView *titlesContainer; // ivar: _titlesContainer
@property (readonly, nonatomic) UIView *view;


+(id)createClippingViewForSize:(struct CGSize )arg0 ;
+(id)funCamAvatarPickerControllerForStore:(id)arg0 style:(id)arg1 ;
+(id)itemsFromRecords:(id)arg0 ;
+(id)newGridLayout;
+(id)sessionProviderWithEnvironment:(id)arg0 delegate:(id)arg1 ;
-(BOOL)canCreateAvatar;
-(BOOL)isDisplayingGridLayout;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)indexForRecord:(id)arg0 ;
-(NSInteger)indexForRecordIdentifier:(id)arg0 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)buildCollectionViewLayout;
-(id)buildTitlesCollectionViewLayout;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)indexPathForNoneItem;
-(id)initWithStore:(id)arg0 environment:(id)arg1 style:(id)arg2 ;
-(id)selectedIndexPath;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct CGSize )gridItemSize;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)buildCollectionView;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)loadView;
-(void)preloadAll;
-(void)reloadData;
-(void)reloadModel;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)selectAvatarRecordWithIdentifier:(id)arg0 animated:(BOOL)arg1 ;
-(void)selectItemAtCenterNotifyDelegate:(BOOL)arg0 ;
-(void)selectItemAtIndexPath:(id)arg0 animated:(BOOL)arg1 notifyDelegate:(BOOL)arg2 ;
-(void)selectItemForAvatarRecord:(id)arg0 animated:(BOOL)arg1 notifyDelegate:(BOOL)arg2 ;
-(void)sendSelectionEventToDelegateForItemAtIndexPath:(id)arg0 ;
-(void)sessionProviderDidEndCameraSession:(id)arg0 ;
-(void)sessionProviderWillStartCameraSession:(id)arg0 ;
-(void)startObservingChangesIfNeeded;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateTitlesClippingViewMask;
-(void)updateViewForCurrentMode;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif