// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INUISERVICEVIEWCONTROLLER_H
#define _INUISERVICEVIEWCONTROLLER_H

@class UIViewController, UIViewController<INUIHostedViewControlling>, INInteraction, NSString;
@protocol _INUIRemoteViewControllerServing;



@interface _INUIServiceViewController : UIViewController <_INUIRemoteViewControllerServing>

 {
    UIViewController<INUIHostedViewControlling> *_hostedViewController;
    INInteraction *_currentInteraction;
    NSUInteger _currentContext;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_isSecureForRemoteViewService;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(struct CGSize )_constrainedSizeForDesiredSize:(struct CGSize )arg0 ;
-(void)addChildViewController:(id)arg0 ;
-(void)beginRequestWithExtensionContext:(id)arg0 ;
-(void)configureForParameters:(id)arg0 ofInteraction:(id)arg1 interactiveBehavior:(NSUInteger)arg2 context:(NSUInteger)arg3 completion:(id)arg4 ;
-(void)desiresInteractivity:(id)arg0 ;
-(void)queryRepresentedPropertiesWithCompletion:(id)arg0 ;
-(void)viewWasCancelled;
-(void)viewWillLayoutSubviews;


@end


#endif