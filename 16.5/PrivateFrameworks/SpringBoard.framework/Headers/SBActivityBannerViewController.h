// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBACTIVITYBANNERVIEWCONTROLLER_H
#define SBACTIVITYBANNERVIEWCONTROLLER_H

@class UIViewController, ACUISActivityHostViewController, UIView, NSString, PLPlatterView;
@protocol ACUISActivityHostViewControllerDelegate, BNPresentable, SBActivityBannerViewControllerDelegate, BNPresentableContext;



@interface SBActivityBannerViewController : UIViewController <ACUISActivityHostViewControllerDelegate, BNPresentable>



@property (retain, nonatomic) ACUISActivityHostViewController *activityHostViewController; // ivar: _activityHostViewController
@property (readonly, nonatomic) UIView *backgroundTintView; // ivar: _backgroundTintView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBActivityBannerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDraggingDismissalEnabled) BOOL draggingDismissalEnabled;
@property (readonly, nonatomic, getter=isDraggingInteractionEnabled) BOOL draggingInteractionEnabled;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PLPlatterView *platterView; // ivar: _platterView
@property (readonly, nonatomic) CGSize preferredBannerContentSize;
@property (readonly, nonatomic) NSInteger presentableBehavior;
@property (weak, nonatomic) NSObject<BNPresentableContext> *presentableContext;
@property (readonly, nonatomic) NSInteger presentableType;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;
@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled;
@property (readonly, nonatomic) UIViewController *viewController;


-(BOOL)_hasBackgroundTintColor;
-(id)_activityIdentifier;
-(id)initWithActivityViewController:(id)arg0 ;
-(struct CGSize )preferredContentSizeWithPresentationSize:(struct CGSize )arg0 containerSize:(struct CGSize )arg1 ;
-(void)_layoutSubviews;
-(void)_preferredContentSizeDidChangeForChildViewController:(id)arg0 ;
-(void)_unlockAndLaunchAppIfPossible:(id)arg0 withAction:(id)arg1 ;
-(void)activityHostViewController:(id)arg0 requestsLaunchWithAction:(id)arg1 ;
-(void)dealloc;
-(void)presentableDidDisappearAsBanner:(id)arg0 withReason:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif