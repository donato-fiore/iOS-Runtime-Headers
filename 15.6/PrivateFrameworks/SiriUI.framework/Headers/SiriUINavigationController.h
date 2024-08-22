// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRIUINAVIGATIONCONTROLLER_H
#define SIRIUINAVIGATIONCONTROLLER_H

@class UINavigationController, NSString;
@protocol UIGestureRecognizerDelegate, SiriUINavigationTransitioning;


#import "_SiriUINavigationControllerDelegateAdapter.h"

@interface SiriUINavigationController : UINavigationController <UIGestureRecognizerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic, getter=_delegateAdapter, setter=_setDelegateAdapter:) _SiriUINavigationControllerDelegateAdapter *delegateAdapter; // ivar: _delegateAdapter
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<SiriUINavigationTransitioning> *transitionController;


-(BOOL)_canShowWhileLocked;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)delegate;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNavigationBarClass:(Class)arg0 toolbarClass:(Class)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithRootViewController:(id)arg0 ;
-(void)_handleGestureFromRecognizer:(id)arg0 ;
-(void)_sharedInit;
-(void)setDelegate:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif