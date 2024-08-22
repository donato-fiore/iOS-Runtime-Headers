// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIKEYBOARDMEDIACONTROLLER_H
#define UIKEYBOARDMEDIACONTROLLER_H

@class NSString;
@protocol UIKeyboardMediaServiceRemoteViewControllerDelegate, UIKeyboardMediaControllerDelegate;

#import <Foundation/Foundation.h>

#import "UIViewController.h"
#import "_UIAsyncInvocation.h"
#import "UIView.h"
#import "_UITextDragCaretView.h"

@interface UIKeyboardMediaController : NSObject <UIKeyboardMediaServiceRemoteViewControllerDelegate>

 {
    UIViewController *_remoteCardViewController;
    _UIAsyncInvocation *_remoteCardViewControllerRequest;
    UIViewController *_recentlyUsedMediaViewController;
    _UIAsyncInvocation *_recentlyUsedMediaViewControllerRequest;
    UIView *_targetViewAwaitingRecents;
    BOOL _hasRequestedRecentlyUsedMediaViewController;
    NSUInteger _viewServiceTerminationCount;
    _UITextDragCaretView *_dropCaret;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UIKeyboardMediaControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL shouldRetryFetchingRecents; // ivar: _shouldRetryFetchingRecents
@property (readonly) Class superclass;


+(id)sharedKeyboardMediaController;
-(BOOL)recentsViewWillBeVisible;
-(BOOL)shouldPrefetchRemoteView;
-(void)_didInsertMedia;
-(void)_didPresentCard;
-(void)_displayiMessageAppWithID:(id)arg0 ;
-(void)_embedRecentlyUsedMediaViewInView:(id)arg0 animated:(BOOL)arg1 ;
-(void)_instantiateCardFromViewService;
-(void)_instantiateViewServiceRecentlyUsedMediaWithCompletionHandler:(id)arg0 ;
-(void)_keyboardDidChangeFrame:(id)arg0 ;
-(void)_tearDownRemoteViews;
-(void)dismissCard;
-(void)dismissCardAnimated;
-(void)dismissCardIfNeeded;
-(void)draggedStickerToPoint:(struct CGPoint )arg0 ;
-(void)pasteImageAtFileHandle:(id)arg0 ;
-(void)prefetchRecentsViewControllerWithCompletion:(id)arg0 ;
-(void)presentCard;
-(void)releaseRecentlyUsedMediaViewIfNeeded;
-(void)requestInsertionPointCompletion:(id)arg0 ;
-(void)showRecentlyUsedMediaInView:(id)arg0 ;
-(void)stageStickerWithFileHandle:(id)arg0 url:(id)arg1 accessibilityLabel:(id)arg2 ;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif