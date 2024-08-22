// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BOOKMARKSBARVIEW_H
#define BOOKMARKSBARVIEW_H

@class UIView, NSMutableArray, UIButton, WebBookmark, NSString;
@protocol BookmarksBarLabelButtonDelegate, BookmarksNavigationControllerDelegate, UIPopoverPresentationControllerDelegate, _SFNavigationIntentHandling, BookmarksBarViewDelegate, LinkPreviewProvider, TabGroupProvider;


#import "BookmarksNavigationController.h"

@interface BookmarksBarView : UIView <BookmarksBarLabelButtonDelegate, BookmarksNavigationControllerDelegate, UIPopoverPresentationControllerDelegate, _SFNavigationIntentHandling>

 {
    NSMutableArray *_bookmarkBarLabels;
    int _bookmarkBarID;
    UIButton *_moreBookmarksButton;
    WebBookmark *_moreBookmarksParent;
    unsigned int _moreBookmarksOffset;
    UIButton *_buttonUsedToShowNavigationController;
    BOOL _isShowingNavigationController;
    BookmarksNavigationController *_bookmarksNavigationController;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BookmarksBarViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<LinkPreviewProvider> *linkPreviewProvider; // ivar: _linkPreviewProvider
@property (weak, nonatomic) NSObject<_SFNavigationIntentHandling> *navigationIntentHandler; // ivar: _navigationIntentHandler
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<TabGroupProvider> *tabGroupProvider;


-(id)containingBookmarkForNavigationController:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_buttonTapped:(id)arg0 ;
-(void)_clearBookmarksNavigationController;
-(void)_createAllLabelButtons;
-(void)_dismissCurrentBookmarksPopover;
-(void)_presentCurrentBookmarksPopoverFromButton:(id)arg0 animated:(BOOL)arg1 ;
-(void)_receivedBookmarksChangedNotification:(id)arg0 ;
-(void)_reloadBookmarkLabels;
-(void)_setButtonUsedToShowNavigationController:(id)arg0 ;
-(void)bookmarksBarLabelButtonDidSelectOpenInNewTab:(id)arg0 ;
-(void)bookmarksNavigationControllerDidReload:(id)arg0 ;
-(void)bookmarksNavigationControllerReloadDidFail:(id)arg0 ;
-(void)bookmarksNavigationControllerViewDidAppear:(id)arg0 ;
-(void)bookmarksNavigationControllerViewDidDisappear:(id)arg0 ;
-(void)dealloc;
-(void)dispatchNavigationIntent:(id)arg0 ;
-(void)handleNavigationIntent:(id)arg0 completion:(id)arg1 ;
-(void)layoutSubviews;
-(void)popoverPresentationController:(id)arg0 willRepositionPopoverToRect:(struct CGRect *)arg1 inView:(*id)arg2 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif