// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPSBANNERVIEWCONTROLLER_H
#define CPSBANNERVIEWCONTROLLER_H

@class UIViewController, NSString, PLPlatterView;
@protocol BNPresentable, CPSBannerViewControllerDelegate, BNPresentableContext;


#import "CPSBannerItem.h"
#import "CPSGuidanceBannerView.h"

@interface CPSBannerViewController : UIViewController <BNPresentable>



@property (readonly, nonatomic) CPSBannerItem *bannerItem; // ivar: _bannerItem
@property (retain, nonatomic) CPSGuidanceBannerView *bannerView; // ivar: _bannerView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CPSBannerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDraggingDismissalEnabled) BOOL draggingDismissalEnabled;
@property (readonly, nonatomic, getter=isDraggingInteractionEnabled) BOOL draggingInteractionEnabled;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PLPlatterView *platterView; // ivar: _platterView
@property (weak, nonatomic) NSObject<BNPresentableContext> *presentableContext;
@property (readonly, nonatomic) NSInteger presentableType;
@property (readonly, copy, nonatomic) NSString *requestIdentifier; // ivar: _requestIdentifier
@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled;
@property (readonly, nonatomic) UIViewController *viewController;


-(id)initWithBannerItem:(id)arg0 ;
-(struct CGSize )preferredContentSizeWithPresentationSize:(struct CGSize )arg0 containerSize:(struct CGSize )arg1 ;
-(void)_bannerTapped:(id)arg0 ;
-(void)_handleBackGesture:(id)arg0 ;
-(void)_wheelChangedWithEvent:(id)arg0 ;
-(void)presentableDidAppearAsBanner:(id)arg0 ;
-(void)presentableDidDisappearAsBanner:(id)arg0 withReason:(id)arg1 ;
-(void)updateBannerWithBannerItem:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif