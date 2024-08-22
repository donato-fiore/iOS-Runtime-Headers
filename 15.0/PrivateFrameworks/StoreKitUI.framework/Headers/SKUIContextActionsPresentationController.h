// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUICONTEXTACTIONSPRESENTATIONCONTROLLER_H
#define SKUICONTEXTACTIONSPRESENTATIONCONTROLLER_H

@class UIPresentationController, UIVisualEffectView;



@interface SKUIContextActionsPresentationController : UIPresentationController

@property (retain, nonatomic) UIVisualEffectView *backgroundView; // ivar: _backgroundView
@property (copy, nonatomic) id *dismissalAnimations; // ivar: _dismissalAnimations


-(BOOL)shouldRemovePresentersView;
-(id)initWithPresentedViewController:(id)arg0 presentingViewController:(id)arg1 ;
-(void)dismissalTransitionWillBegin;
-(void)presentationTransitionWillBegin;


@end


#endif