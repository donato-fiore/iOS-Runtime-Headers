// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKSTICKERDETAILVIEWCONTROLLER_H
#define CKSTICKERDETAILVIEWCONTROLLER_H

@class UIViewController, NSArray, NSString, UITableView, UIVisualEffectView;
@protocol UITableViewDelegate, UITableViewDataSource, CKAdaptivePresentedControllerProtocol, CKStickerDetailViewControllerDelegate;



@interface CKStickerDetailViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, CKAdaptivePresentedControllerProtocol>



@property (retain, nonatomic) NSArray *chatItems; // ivar: _chatItems
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKStickerDetailViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL preserveModalPresentationStyle; // ivar: _preserveModalPresentationStyle
@property (nonatomic) BOOL shouldHidePresentingWindow;
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView
@property (retain, nonatomic) UIVisualEffectView *visualEffectView; // ivar: _visualEffectView
@property (nonatomic) BOOL wantsWindowedPresentation; // ivar: _wantsWindowedPresentation


-(BOOL)constrainToPresentingVCBounds;
-(BOOL)shouldAutorotate;
-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_deleteSwipeActionForIndexPath:(id)arg0 ;
-(id)initWithStickerChatItems:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg1 ;
-(void)_viewButtonTapped:(id)arg0 ;
-(void)deleteStickerAtIndexPath:(id)arg0 ;
-(void)loadView;
-(void)stickerDetailViewControllerCloseButtonPressed:(id)arg0 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif