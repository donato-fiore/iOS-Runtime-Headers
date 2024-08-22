// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKRECENTSVIEWCONTROLLER_H
#define CKRECENTSVIEWCONTROLLER_H

@class MSStickerBrowserView, NSString, UILabel, NSMutableArray, NSMutableDictionary;
@protocol MSStickerBrowserViewDataSource, _MSStickerSendManagerDelegate, CKBrowserDragControllerDelegate;


#import "CKBrowserViewController.h"

@interface CKRecentsViewController : CKBrowserViewController <MSStickerBrowserViewDataSource, _MSStickerSendManagerDelegate, CKBrowserDragControllerDelegate>



@property (retain, nonatomic) MSStickerBrowserView *browserView; // ivar: _browserView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *draggingCompletionHandler; // ivar: _draggingCompletionHandler
@property (nonatomic) BOOL hasHandwritingRecents; // ivar: _hasHandwritingRecents
@property (nonatomic) BOOL hasStickerRecents; // ivar: _hasStickerRecents
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isLoadingRecents; // ivar: _isLoadingRecents
@property (retain, nonatomic) UILabel *noRecentsLabel; // ivar: _noRecentsLabel
@property (nonatomic, getter=isPreparingForDisplay) BOOL preparingForDisplay; // ivar: _preparingForDisplay
@property (retain, nonatomic) NSMutableArray *recentItems; // ivar: _recentItems
@property (retain, nonatomic) NSMutableDictionary *stickerCache; // ivar: _stickerCache
@property (readonly) Class superclass;


-(BOOL)dragManager:(id)arg0 canPeelItem:(id)arg1 ;
-(BOOL)dragManager:(id)arg0 canRotateItem:(id)arg1 ;
-(BOOL)dragManager:(id)arg0 canScaleItem:(id)arg1 ;
-(BOOL)dragManager:(id)arg0 shouldCancelDraggingForItem:(id)arg1 toDragTarget:(id)arg2 dropArea:(int)arg3 ;
-(BOOL)mayBeKeptInViewHierarchy;
-(BOOL)shouldShowChatChrome;
-(BOOL)stickerBrowserView:(id)arg0 shouldDrawBorderAroundSticker:(id)arg1 ;
-(NSInteger)_userInterfaceStyle;
-(NSInteger)numberOfStickersInStickerBrowserView:(id)arg0 ;
-(id)_stickerForMSSticker:(id)arg0 ;
-(id)initWithBalloonPlugin:(id)arg0 dataSource:(id)arg1 ;
-(id)requestSnapshotDataForPersistance;
-(id)stickerBrowserView:(id)arg0 stickerAtIndex:(NSInteger)arg1 ;
-(void)_loadRecentHandwritingsAndStickersWithCompletion:(id)arg0 ;
-(void)_postBrowserDidPrepareForDisplayNotificationIfNecessary;
-(void)_setContentOverlayInsets:(struct UIEdgeInsets )arg0 ;
-(void)dealloc;
-(void)didTransitionFromOrientation:(NSInteger)arg0 toOrientation:(NSInteger)arg1 ;
-(void)dragManager:(id)arg0 didDragItem:(id)arg1 toDragTarget:(id)arg2 ;
-(void)dragManager:(id)arg0 didEndDraggingItem:(id)arg1 toDragTarget:(id)arg2 dropArea:(int)arg3 ;
-(void)forceTearDownRemoteView;
-(void)insertSticker:(id)arg0 completionHandler:(id)arg1 ;
-(void)loadRecents;
-(void)loadView;
-(void)prepareForDisplay;
-(void)recentsUpdated;
-(void)resortAndReloadRecents;
-(void)saveSnapshotForBrowserViewController;
-(void)setupNoRecentsLabel;
-(void)startDragSticker:(id)arg0 frameInRemoteView:(struct CGRect )arg1 fence:(id)arg2 completionHandler:(id)arg3 ;
-(void)stickerDragCanceled;
-(void)stickerDragMoved:(id)arg0 frameInRemoteView:(struct CGRect )arg1 rotation:(CGFloat)arg2 scale:(CGFloat)arg3 fence:(id)arg4 completionHandler:(id)arg5 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif