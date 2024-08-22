// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKADDTOWATCHOFFERVIEWCONTROLLER_H
#define PKADDTOWATCHOFFERVIEWCONTROLLER_H

@class UIView, PKPaymentPass;


#import "PKExplanationViewController.h"
#import "PKOfferWatchHeroView.h"

@interface PKAddToWatchOfferViewController : PKExplanationViewController {
    UIView *_interactionDisabledView;
    PKOfferWatchHeroView *_heroView;
}


@property (readonly, retain, nonatomic) PKPaymentPass *pass; // ivar: _pass


-(NSUInteger)edgesForExtendedLayout;
-(id)initWithPass:(id)arg0 context:(NSInteger)arg1 ;
-(void)_addLater;
-(void)_addToWatch;
-(void)_clearInteractionDisabledView;
-(void)_configureNavigationItem;
-(void)_setIdleTimerDisabled:(BOOL)arg0 ;
-(void)addToWatchOfferViewControllerDidNotRequestToAddToWatch;
-(void)addToWatchOfferViewControllerDidRequestToAddToWatch;
-(void)dealloc;
-(void)loadView;
-(void)showSpinner:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif