// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKADDTOWATCHOFFERVIEWCONTROLLER_H
#define PKADDTOWATCHOFFERVIEWCONTROLLER_H

@class UIViewController, UIView, PKPaymentPass;
@protocol PKAddToWatchOfferViewControllerDelegate;


#import "PKAddToWatchOfferView.h"

@interface PKAddToWatchOfferViewController : UIViewController {
    UIView *_interactionDisabledView;
}


@property (nonatomic) NSInteger context; // ivar: _context
@property (weak, nonatomic) NSObject<PKAddToWatchOfferViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) PKAddToWatchOfferView *offerView; // ivar: _offerView
@property (readonly, retain, nonatomic) PKPaymentPass *pass; // ivar: _pass


-(NSUInteger)edgesForExtendedLayout;
-(id)initWithPass:(id)arg0 context:(NSInteger)arg1 delegate:(id)arg2 ;
-(void)_addLater;
-(void)_addToWatch;
-(void)_clearInteractionDisabledView;
-(void)_configureNavigationItem;
-(void)_setIdleTimerDisabled:(BOOL)arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)showSpinner:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif