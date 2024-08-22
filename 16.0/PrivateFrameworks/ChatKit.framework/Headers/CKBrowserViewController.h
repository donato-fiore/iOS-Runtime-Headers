// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKBROWSERVIEWCONTROLLER_H
#define CKBROWSERVIEWCONTROLLER_H

@class UIViewController, NSNumber, IMBalloonPlugin, IMBalloonPluginDataSource, NSData, NSString, UIView, NSArray;
@protocol CKBrowserViewControllerProtocol, UIViewControllerTransitioningDelegate, CKBrowserViewControllerSendDelegate;


#import "CKBrowserDragManager.h"

@interface CKBrowserViewController : UIViewController <CKBrowserViewControllerProtocol>

 {
    NSInteger _previousConsumer;
}


@property (retain, nonatomic) NSNumber *adamID;
@property (readonly, nonatomic) NSUInteger badgeValue;
@property (readonly, nonatomic) IMBalloonPlugin *balloonPlugin; // ivar: _balloonPlugin
@property (retain, nonatomic) IMBalloonPluginDataSource *balloonPluginDataSource; // ivar: _balloonPluginDataSource
@property (retain, nonatomic) CKBrowserDragManager *browserDragManager; // ivar: _browserDragManager
@property (readonly, nonatomic) NSInteger browserPresentationStyle;
@property (readonly, nonatomic) BOOL canReplaceDataSource;
@property (retain, nonatomic) NSData *conversationEngramID;
@property (nonatomic) NSString *conversationID; // ivar: _conversationID
@property (nonatomic) NSInteger currentBrowserConsumer; // ivar: _currentBrowserConsumer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDismissing) BOOL dismissing;
@property (weak, nonatomic) UIView *dragTargetView; // ivar: _dragTargetView
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGRect horizontalSwipeExclusionRect;
@property (readonly, nonatomic) BOOL inExpandedPresentation;
@property (readonly, nonatomic) BOOL inFullScreenModalPresentation;
@property (nonatomic) BOOL isPrimaryViewController; // ivar: _isPrimaryViewController
@property (nonatomic) BOOL isTransitioningToExpandedPresentation; // ivar: _isTransitioningToExpandedPresentation
@property (nonatomic) BOOL isiMessage; // ivar: _isiMessage
@property (readonly, nonatomic) BOOL mayBeKeptInViewHierarchy;
@property (readonly, nonatomic) NSInteger parentModalPresentationStyle;
@property (readonly, weak, nonatomic) NSObject<UIViewControllerTransitioningDelegate> *parentTransitioningDelegate;
@property (retain, nonatomic) UIViewController *presentationViewController; // ivar: _presentationViewController
@property (retain, nonatomic) NSArray *recipients;
@property (readonly, nonatomic) UIViewController *remoteViewController;
@property (weak, nonatomic) NSObject<CKBrowserViewControllerSendDelegate> *sendDelegate; // ivar: _sendDelegate
@property (retain, nonatomic) NSString *sender;
@property (nonatomic) BOOL shouldDisableSnapshotView; // ivar: _shouldDisableSnapshotView
@property (readonly, nonatomic) BOOL shouldShowChatChrome;
@property (readonly, nonatomic) BOOL shouldSuppressEntryView;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsQuickView;
@property (readonly, nonatomic) BOOL wantsDarkUI;
@property (readonly, nonatomic) BOOL wantsOpaqueUI;
@property (readonly, nonatomic) BOOL wasExpandedPresentation;


+(BOOL)supportsMessagesAppExtendedLaunchTest;
+(id)currentPPTTestName;
-(BOOL)inCompactPresentation;
-(BOOL)isLoaded;
-(id)initWithBalloonPlugin:(id)arg0 ;
-(id)initWithBalloonPlugin:(id)arg0 dataSource:(id)arg1 ;
-(id)initWithBalloonPlugin:(id)arg0 pluginPayloads:(id)arg1 ;
-(struct UIEdgeInsets )_edgeInsetsForChildViewController:(id)arg0 insetsAreAbsolute:(*BOOL)arg1 ;
-(void)_updateContentOverlayInsetsForSelfAndChildren;
-(void)beginDisablingUserInteraction;
-(void)didTransitionFromOrientation:(NSInteger)arg0 toOrientation:(NSInteger)arg1 ;
-(void)dismiss;
-(void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)endDisablingUserInteraction;
-(void)finishedPPTTestNamed:(id)arg0 ;
-(void)finishedPPTTestNamed:(id)arg0 isCKLaunchTest:(BOOL)arg1 ;
-(void)loadView;
-(void)presentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)startPPTTestNamed:(id)arg0 ;
-(void)tearDownRemoteViewIfNeeded;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidTransitionToCompactPresentation;
-(void)viewDidTransitionToExpandedPresentation;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToCompactPresentation;
-(void)viewWillTransitionToExpandedPresentation;


@end


#endif