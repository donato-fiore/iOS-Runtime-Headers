// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUPREVIEWOVERLAYVIEWCONTROLLER_H
#define SUPREVIEWOVERLAYVIEWCONTROLLER_H

@class NSString;


#import "SUViewController.h"
#import "SUPreviewOverlayStorePageViewController.h"

@interface SUPreviewOverlayViewController : SUViewController {
    id *_loadBlock;
    BOOL _loaded;
    SUPreviewOverlayStorePageViewController *_storePageViewController;
    BOOL _visible;
}


@property (readonly, nonatomic, getter=isContentLoaded) BOOL contentLoaded;
@property (nonatomic) CGSize contentSize; // ivar: _contentSize
@property (nonatomic) CGFloat paddingRight; // ivar: _paddingRight
@property (nonatomic) CGFloat paddingTop; // ivar: _paddingTop
@property (copy, nonatomic) NSString *userInfoString; // ivar: _userInfoString


+(CGFloat)defaultAnimationDuration;
+(id)defaultRequestProperties;
+(void)_setContentInsetsForScrollView:(id)arg0 viewController:(id)arg1 ;
+(void)offsetScrollView:(id)arg0 forViewController:(id)arg1 ;
-(id)_previewOverlayContainerForViewController:(id)arg0 ;
-(id)_scrollViewForViewController:(id)arg0 ;
-(id)_storePageViewController;
-(void)dealloc;
-(void)hideInNavigationController:(id)arg0 animated:(BOOL)arg1 completionBlock:(id)arg2 ;
-(void)hideInViewController:(id)arg0 animated:(BOOL)arg1 completionBlock:(id)arg2 ;
-(void)invalidateForMemoryPurge;
-(void)loadView;
-(void)loadWithCompletionBlock:(id)arg0 ;
-(void)loadWithRequestProperties:(id)arg0 completionBlock:(id)arg1 ;
-(void)showInNavigationController:(id)arg0 animated:(BOOL)arg1 completionBlock:(id)arg2 ;
-(void)showInViewController:(id)arg0 animated:(BOOL)arg1 completionBlock:(id)arg2 ;
-(void)storePage:(id)arg0 finishedWithSuccess:(BOOL)arg1 ;


@end


#endif