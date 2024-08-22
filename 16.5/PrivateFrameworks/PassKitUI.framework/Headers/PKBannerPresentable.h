// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKBANNERPRESENTABLE_H
#define PKBANNERPRESENTABLE_H

@class NSString, UIViewController<PKBannerViewController><BNPresentableObserving><SBUISystemApertureElement>, UIViewController<SBUISystemApertureElement>, UIViewController;
@protocol PKBannerViewControllerPresentable, BNPresentable, BNHostedContentProviding, SBUISystemApertureElementProviding, BNPresentableContext, SBUISystemApertureElement;

#import <Foundation/Foundation.h>

#import "PKBannerPresentationManager.h"

@interface PKBannerPresentable : NSObject <PKBannerViewControllerPresentable, BNPresentable, BNHostedContentProviding, SBUISystemApertureElementProviding>

 {
    PKBannerPresentationManager *_manager;
    NSString *_requestIdentifier;
    BOOL _posted;
    BOOL _revoked;
    BOOL _needsRevoke;
    id *_factory;
    UIViewController<PKBannerViewController><BNPresentableObserving><SBUISystemApertureElement> *_viewController;
    id *_didStartHandler;
    id *_didFinishHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDraggingDismissalEnabled) BOOL draggingDismissalEnabled;
@property (readonly, nonatomic, getter=isDraggingInteractionEnabled) BOOL draggingInteractionEnabled;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger presentableBehavior;
@property (weak, nonatomic) NSObject<BNPresentableContext> *presentableContext; // ivar: _presentableContext
@property (readonly, nonatomic) NSInteger presentableType;
@property (readonly, nonatomic) BOOL providesHostedContent;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;
@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) NSObject<SBUISystemApertureElement> *systemApertureElement;
@property (readonly, nonatomic) UIViewController<SBUISystemApertureElement> *systemApertureElementViewController;
@property (readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled;
@property (readonly, nonatomic) UIViewController *viewController;


-(id)init;
-(void)presentableDidAppearAsBanner:(id)arg0 ;
-(void)presentableDidDisappearAsBanner:(id)arg0 withReason:(id)arg1 ;
-(void)presentableWillAppearAsBanner:(id)arg0 ;
-(void)presentableWillDisappearAsBanner:(id)arg0 withReason:(id)arg1 ;
-(void)presentableWillNotAppearAsBanner:(id)arg0 withReason:(id)arg1 ;
-(void)revoke;
-(void)userInteractionDidEndForBannerForPresentable:(id)arg0 ;
-(void)userInteractionWillBeginForBannerForPresentable:(id)arg0 ;


@end


#endif