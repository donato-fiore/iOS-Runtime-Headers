// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTSTICKERVIEWCONTROLLER_H
#define AVTSTICKERVIEWCONTROLLER_H

@class UIViewController, NSString, NSArray, NSArray<AVTStickerPack>, UIView;
@protocol AVTStickerPagingControllerDelegate, AVTStickerPagingControllerDelegate, AVTAvatarPickerDelegate, AVTAvatarRecordDataSourceObserver, AVTPresenterDelegate, AVTPaddleViewDelegate, AVTObjectViewController, AVTUIViewSnapshotProvider, AVTStickerDisclosureValidationDelegate, AVTStickerViewControllerImageDelegate, AVTUILogger, AVTStickerSelectionDelegate, AVTStickerSheetControllerProvider, AVTAvatarStore;


#import "AVTSimpleAvatarPicker.h"
#import "AVTAvatarPickerDataSource.h"
#import "AVTUIEnvironment.h"
#import "AVTPaddleView.h"
#import "AVTStickerPagingController.h"
#import "AVTAvatarRecordDataSource.h"
#import "AVTStickerTaskScheduler.h"
#import "AVTViewSessionProvider.h"

@interface AVTStickerViewController : UIViewController <AVTStickerPagingControllerDelegate, AVTStickerPagingControllerDelegate, AVTAvatarPickerDelegate, AVTAvatarRecordDataSourceObserver, AVTPresenterDelegate, AVTPaddleViewDelegate, AVTObjectViewController, AVTUIViewSnapshotProvider>



@property (nonatomic) BOOL allowEditing; // ivar: _allowEditing
@property (readonly, nonatomic) BOOL allowPeel; // ivar: _allowPeel
@property (retain, nonatomic) AVTSimpleAvatarPicker *avatarPicker; // ivar: _avatarPicker
@property (retain, nonatomic) AVTAvatarPickerDataSource *avatarPickerDataSource; // ivar: _avatarPickerDataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<AVTStickerDisclosureValidationDelegate> *disclosureValidationDelegate; // ivar: _disclosureValidationDelegate
@property (readonly, nonatomic) AVTUIEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<AVTStickerViewControllerImageDelegate> *imageDelegate; // ivar: _imageDelegate
@property (readonly, nonatomic) NSObject<AVTUILogger> *logger; // ivar: _logger
@property (retain, nonatomic) AVTPaddleView *paddleView; // ivar: _paddleView
@property (retain, nonatomic) AVTStickerPagingController *pagingController; // ivar: _pagingController
@property (weak, nonatomic) NSObject<AVTPresenterDelegate> *presenterDelegate; // ivar: presenterDelegate
@property (readonly, nonatomic) AVTAvatarRecordDataSource *recordDataSource; // ivar: _recordDataSource
@property (retain, nonatomic) NSString *selectedRecordIdentifier; // ivar: _selectedRecordIdentifier
@property (nonatomic) BOOL shouldHideUserInfoView; // ivar: _shouldHideUserInfoView
@property (retain, nonatomic) NSArray *stickerConfigurationNames; // ivar: _stickerConfigurationNames
@property (retain, nonatomic) NSArray<AVTStickerPack> *stickerPacks; // ivar: _stickerPacks
@property (weak, nonatomic) NSObject<AVTStickerSelectionDelegate> *stickerSelectionDelegate; // ivar: _stickerSelectionDelegate
@property (weak, nonatomic) NSObject<AVTStickerSheetControllerProvider> *stickerSheetControllerProvider; // ivar: _stickerSheetControllerProvider
@property (readonly, nonatomic) NSObject<AVTAvatarStore> *store; // ivar: _store
@property (readonly) Class superclass;
@property (retain, nonatomic) AVTStickerTaskScheduler *taskScheduler; // ivar: _taskScheduler
@property (readonly, nonatomic) UIView *view;
@property (retain, nonatomic) AVTViewSessionProvider *viewSessionProvider; // ivar: _viewSessionProvider


+(CGFloat)headerEdgeMarginForEnvironment:(id)arg0 ;
+(CGFloat)headerHeightForWidth:(CGFloat)arg0 interitemSpacing:(CGFloat)arg1 environment:(id)arg2 ;
+(NSUInteger)minimumNumberOfVisibleItemForWidth:(CGFloat)arg0 environment:(id)arg1 ;
+(id)inUseStickerPack;
+(id)stickerViewControllerForStore:(id)arg0 allowEditing:(BOOL)arg1 allowPeel:(BOOL)arg2 ;
+(id)stickerViewControllerForStore:(id)arg0 fetchRequest:(id)arg1 stickerPacks:(id)arg2 stickerConfigurationNames:(id)arg3 avtViewSessionProvider:(id)arg4 allowEditing:(BOOL)arg5 allowPeel:(BOOL)arg6 ;
+(id)stickersAvatarsFetchRequest;
-(BOOL)allowAvatarCreation;
-(BOOL)avatarPicker:(id)arg0 shouldPresentMemojiEditorForAvatarRecord:(id)arg1 ;
-(BOOL)shouldPresentPaddleView;
-(CGFloat)headerMaxY;
-(id)initWithStore:(id)arg0 fetchRequest:(id)arg1 stickerPacks:(id)arg2 stickerConfigurationNames:(id)arg3 selectedRecordIdentifier:(id)arg4 allowEditing:(BOOL)arg5 allowPeel:(BOOL)arg6 environment:(id)arg7 ;
-(void)avatarPicker:(id)arg0 didSelectAvatarRecord:(id)arg1 ;
-(void)avatarPickerDidEndCameraSession:(id)arg0 ;
-(void)avatarPickerWillStartCameraSession:(id)arg0 ;
-(void)clearStickerSelection;
-(void)dataSource:(id)arg0 didAddRecord:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)dataSource:(id)arg0 didEditRecord:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)dataSource:(id)arg0 didRemoveRecord:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)dismissAvatarUIControllerAnimated:(BOOL)arg0 ;
-(void)dismissPaddleViewIfNecessary;
-(void)editCurrentMemoji;
-(void)paddleViewTapped:(id)arg0 ;
-(void)paddleViewWantsToBeDismissed:(id)arg0 ;
-(void)presentAvatarUIController:(id)arg0 animated:(BOOL)arg1 ;
-(void)presentMemojiEditorForCreation;
-(void)presentPaddleViewIfNeeded;
-(void)reloadData;
-(void)reloadPickerView;
-(void)selectAvatarRecordAtIndex:(NSInteger)arg0 hideHeader:(BOOL)arg1 ;
-(void)selectDefaultAvatarIfNeeded;
-(void)selectRecordForIdentifier:(id)arg0 ;
-(void)significantRecordChangeInDataSource:(id)arg0 ;
-(void)snapshotInBlock:(id)arg0 ;
-(void)stickerControllerDidEnterBackground;
-(void)stickerControllerWillEnterForeground;
-(void)stickerPagingController:(id)arg0 pageDidScrollToOffset:(struct CGPoint )arg1 ;
-(void)swipeLeftWithDelay:(NSInteger)arg0 forCompletionHandler:(id)arg1 ;
-(void)swipeRightWithDelay:(NSInteger)arg0 forCompletionHandler:(id)arg1 ;
-(void)updateHeaderPositionWithContentOffset:(struct CGPoint )arg0 ;
-(void)updateHeaderSize;
-(void)updatePaddleViewLayoutIfNecessary;
-(void)updatePagingControllerInsets;
-(void)updateScrollToShowAvatarPicker:(BOOL)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif