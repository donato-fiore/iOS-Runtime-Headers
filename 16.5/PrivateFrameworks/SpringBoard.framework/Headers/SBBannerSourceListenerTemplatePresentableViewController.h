// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBBANNERSOURCELISTENERTEMPLATEPRESENTABLEVIEWCONTROLLER_H
#define SBBANNERSOURCELISTENERTEMPLATEPRESENTABLEVIEWCONTROLLER_H

@class BNBannerSourceListenerPresentableViewController, PLPillView, NSString, FBScene, NSUUID, UIViewController;
@protocol BNBannerSourceListenerTemplatePresentable, BNTemplateContentProvidingSpecifying, BNBannerSourceListenerPresentableDelegate, BNPresentable, BNPresentableContext;



@interface SBBannerSourceListenerTemplatePresentableViewController : BNBannerSourceListenerPresentableViewController <BNBannerSourceListenerTemplatePresentable>

 {
    id<BNTemplateContentProvidingSpecifying> *_templateContentProvidingSpecification;
    PLPillView *_pillView;
}


@property (readonly, nonatomic) int bannerAppearState;
@property (readonly, nonatomic, getter=isContentHosted) BOOL contentHosted;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BNBannerSourceListenerPresentableDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDraggingDismissalEnabled) BOOL draggingDismissalEnabled;
@property (readonly, nonatomic, getter=isDraggingInteractionEnabled) BOOL draggingInteractionEnabled;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<BNPresentable> *presentable;
@property (readonly, nonatomic) NSInteger presentableBehavior;
@property (weak, nonatomic) NSObject<BNPresentableContext> *presentableContext;
@property (readonly, nonatomic) NSInteger presentableType;
@property (readonly, nonatomic, getter=isReady) BOOL ready;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;
@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (readonly, nonatomic) FBScene *scene;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTemplateContent) BOOL templateContent;
@property (readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSUUID *uniquePresentableIdentifier;
@property (readonly, nonatomic) UIViewController *viewController;


-(BOOL)providesTemplateContent;
-(id)_pillView;
-(id)_templateContentProvider;
-(id)initWithWithSpecification:(id)arg0 serviceDomain:(id)arg1 readyCompletion:(id)arg2 ;
-(id)leadingTemplateViewProvider;
-(id)primaryTemplateItemProvider;
-(id)secondaryTemplateItemProvider;
-(id)trailingTemplateViewProvider;
-(struct UIEdgeInsets )bannerContentOutsets;
-(void)_handleButtonPrimaryAction:(id)arg0 forEvent:(NSInteger)arg1 ;
-(void)_handleTapOnPillView:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif