// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIRESILIENTREMOTEVIEWCONTAINERVIEWCONTROLLER_H
#define _UIRESILIENTREMOTEVIEWCONTAINERVIEWCONTROLLER_H

@class NSExtension;
@protocol NSCopying;


#import "UIViewController.h"
#import "_UIWaitingForRemoteViewContainerViewController.h"

@interface _UIResilientRemoteViewContainerViewController : UIViewController

@property (retain, nonatomic) UIViewController *containedViewController; // ivar: _containedViewController
@property (nonatomic) BOOL delayingDisplayOfRemoteView; // ivar: _delayingDisplayOfRemoteView
@property (retain, nonatomic) UIViewController *errorViewController; // ivar: _errorViewController
@property (retain, nonatomic) NSExtension *extension; // ivar: _extension
@property (copy, nonatomic) NSObject<NSCopying> *extensionRequestIdentifier; // ivar: _extensionRequestIdentifier
@property (readonly, nonatomic) id *remoteViewController; // ivar: _remoteViewController
@property (retain, nonatomic) _UIWaitingForRemoteViewContainerViewController *waitingController; // ivar: _waitingController


+(id)instantiateWithExtension:(id)arg0 completion:(id)arg1 ;
-(id)initWithExtension:(id)arg0 completion:(id)arg1 ;
-(struct CGRect )_defaultInitialViewFrame;
-(void)_displayError:(id)arg0 ;
-(void)_displayRemoteViewController;
-(void)dealloc;
-(void)delayDisplayOfRemoteController;
-(void)endDelayingDisplayOfRemoteController;
-(void)invalidate;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif