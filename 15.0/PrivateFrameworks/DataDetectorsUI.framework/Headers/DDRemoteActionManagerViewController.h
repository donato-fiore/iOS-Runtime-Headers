// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DDREMOTEACTIONMANAGERVIEWCONTROLLER_H
#define DDREMOTEACTIONMANAGERVIEWCONTROLLER_H

@class UIViewController, UIView, NSLayoutConstraint, UINavigationController, NSDate, NSString, NSExtension;
@protocol DDRemoteActionHostViewControllerDelegate, DDRemoteActionViewServiceProtocol, NSCopying;


#import "DDRemoteActionHostViewController.h"
#import "DDRemoteActionManagerViewController.h"
#import "DDRemoteAction.h"

@interface DDRemoteActionManagerViewController : UIViewController <DDRemoteActionHostViewControllerDelegate>

 {
    DDRemoteActionHostViewController *_remoteViewController;
    id<DDRemoteActionViewServiceProtocol> *_serviceContext;
    UIView *_loadingView;
    UIView *_errorView;
    UIView *_titleBar;
    NSLayoutConstraint *_titleBarBottomConstraint;
    NSLayoutConstraint *_navControllerTopConstraint;
    UIView *_hitView;
    UINavigationController *_navigationController;
    NSDate *_loadingDate;
    BOOL _loaded;
    BOOL _displayed;
    BOOL _shouldDeferPresenting;
    NSString *_platterTitle;
    CGSize _preferredContentSize;
    DDRemoteActionManagerViewController *_strongSelf;
}


@property (weak) DDRemoteAction *action; // ivar: _action
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSExtension *extension; // ivar: _extension
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL previewMode; // ivar: _previewMode
@property (retain) NSObject<NSCopying> *request; // ivar: _request
@property (readonly) Class superclass;


-(id)controllerVerticalMargin;
-(id)doneButton;
-(id)emptyViewcontroller;
-(id)initWithAction:(id)arg0 ;
-(void)DDRemoteActionDidTerminateWithError:(id)arg0 ;
-(void)addHitOverlay;
-(void)dealloc;
-(void)dismissViewController;
-(void)loadNavigationControllerIfNeeded;
-(void)loadRemoteAction:(id)arg0 ;
-(void)loadTitleBarIfNeeded;
-(void)presentRemoteViewController;
-(void)removeLoadingViewToShowView:(id)arg0 ;
-(void)showErrorView;
-(void)showLoadingView;
-(void)showRemoteController;
-(void)unloadRemoteAction;
-(void)updatePreviewMode;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif