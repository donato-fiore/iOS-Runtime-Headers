// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BNBANNERSOURCELISTENERPRESENTABLEVIEWCONTROLLER_H
#define BNBANNERSOURCELISTENERPRESENTABLEVIEWCONTROLLER_H

@class UIViewController, NSHashTable, NSString, BSServiceConnectionListener, BSServiceConnection<BSServiceConnectionHost>, UIView, FBScene, NSUUID;
@protocol BNBannerSourceListenerPresentableViewControllerViewDelegate, BNPresentableContextClientToHostInterface, BSServiceConnectionListenerDelegate, BNPresentableContext, BNBannerSourceListenerPresentable, OS_dispatch_queue, BNBannerSourceListenerPresentableDelegate, BNPresentable;



@interface BNBannerSourceListenerPresentableViewController : UIViewController <BNBannerSourceListenerPresentableViewControllerViewDelegate, BNPresentableContextClientToHostInterface, BSServiceConnectionListenerDelegate, BNPresentableContext, BNBannerSourceListenerPresentable>

 {
    NSHashTable *_observers;
    id *_readyCompletion;
    NSString *_serviceDomain;
    BSServiceConnectionListener *_connectionListener;
    NSObject<OS_dispatch_queue> *_queue;
    BSServiceConnection<BSServiceConnectionHost> *_connection;
}


@property (readonly, nonatomic) int bannerAppearState; // ivar: _bannerAppearState
@property (readonly, nonatomic) NSInteger contentBehavior; // ivar: _contentBehavior
@property (readonly, nonatomic, getter=isContentHosted) BOOL contentHosted;
@property (retain, nonatomic, setter=_setContentView:) UIView *contentView;
@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BNBannerSourceListenerPresentableDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDraggingDismissalEnabled) BOOL draggingDismissalEnabled; // ivar: _draggingDismissalEnabled
@property (readonly, nonatomic, getter=isDraggingInteractionEnabled) BOOL draggingInteractionEnabled; // ivar: _draggingInteractionEnabled
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<BNPresentable> *presentable; // ivar: _presentable
@property (readonly, nonatomic) NSInteger presentableBehavior; // ivar: _presentableBehavior
@property (weak, nonatomic) NSObject<BNPresentableContext> *presentableContext;
@property (readonly, nonatomic, getter=_isPresentableContextInterfaceAvailable) BOOL presentableContextInterfaceAvailable;
@property (readonly, nonatomic) NSInteger presentableType;
@property (readonly, nonatomic, getter=isReady) BOOL ready;
@property (copy, nonatomic, setter=_setReadyCompletion:) id *readyCompletion;
@property (readonly, copy, nonatomic) NSString *requestIdentifier; // ivar: _requestIdentifier
@property (readonly, copy, nonatomic) NSString *requesterIdentifier; // ivar: _requesterIdentifier
@property (readonly, nonatomic) FBScene *scene;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled; // ivar: _touchOutsideDismissalEnabled
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSUUID *uniquePresentableIdentifier; // ivar: _uniquePresentableIdentifier
@property (readonly, nonatomic) UIViewController *viewController;


-(BOOL)_canShowWhileLocked;
-(id)_initWithWithPresentableIdentification:(id)arg0 presentableBehavior:(NSInteger)arg1 contentBehavior:(NSInteger)arg2 serviceDomain:(id)arg3 readyCompletion:(id)arg4 ;
-(id)initWithWithPresentable:(id)arg0 ;
-(id)initWithWithSpecification:(id)arg0 serviceDomain:(id)arg1 readyCompletion:(id)arg2 ;
-(struct UIEdgeInsets )contentInsetsForBannerSourceListenerPresentableViewControllerView:(id)arg0 ;
-(void)_enumerateObserversRespondingToSelector:(SEL)arg0 usingBlock:(id)arg1 ;
-(void)_setUserInteractionWillBegin:(BOOL)arg0 forPresentable:(id)arg1 ;
-(void)addPresentableObserver:(id)arg0 ;
-(void)bannerSourceListenerPresentableViewControllerViewDidChangeSize:(id)arg0 ;
-(void)dealloc;
-(void)handleTemplateContentEvent:(NSInteger)arg0 ;
-(void)invalidate;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;
-(void)loadView;
-(void)makeReadyIfPossible;
-(void)presentableDidAppearAsBanner:(id)arg0 ;
-(void)presentableDidDisappearAsBanner:(id)arg0 withReason:(id)arg1 ;
-(void)presentableWillAppearAsBanner:(id)arg0 ;
-(void)presentableWillDisappearAsBanner:(id)arg0 withReason:(id)arg1 ;
-(void)presentableWillNotAppearAsBanner:(id)arg0 withReason:(id)arg1 ;
-(void)removePresentableObserver:(id)arg0 ;
-(void)setHostNeedsUpdate;
-(void)userInteractionDidEndForBannerForPresentable:(id)arg0 ;
-(void)userInteractionWillBeginForBannerForPresentable:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif