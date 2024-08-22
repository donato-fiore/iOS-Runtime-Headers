// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSESSIONBANNERVIEWCONTROLLER_H
#define SBSESSIONBANNERVIEWCONTROLLER_H

@class UIViewController, NSString, PLPlatterView, SNUISessionHostViewController;
@protocol BNPresentable, SBSessionBannerViewControllerDelegate, BNPresentableContext;



@interface SBSessionBannerViewController : UIViewController <BNPresentable>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBSessionBannerViewControllerDelegate> *delegate; // ivar: _delegate
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
@property (retain, nonatomic) SNUISessionHostViewController *sessionHostViewController; // ivar: _sessionHostViewController
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled;
@property (readonly, nonatomic) UIViewController *viewController;


+(CGFloat)cornerRadius;
-(id)initWithSessionViewController:(id)arg0 ;
-(struct CGSize )preferredContentSizeWithPresentationSize:(struct CGSize )arg0 containerSize:(struct CGSize )arg1 ;
-(void)_preferredContentSizeDidChangeForChildViewController:(id)arg0 ;
-(void)dealloc;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif