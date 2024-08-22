// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APUIACTIONPLATTERVIEW_H
#define APUIACTIONPLATTERVIEW_H

@class UIView, ATXAction, UIViewController, PLPlatterView, NSLayoutConstraint, UITapGestureRecognizer, CRKCardPresentation, NSString;
@protocol CRKCardViewControllerDelegate, CRKCardPresentationDelegate, APUIActionFeedbackDelegate;


#import "APUIShortLookViewController.h"

@interface APUIActionPlatterView : UIView <CRKCardViewControllerDelegate, CRKCardPresentationDelegate>

 {
    ATXAction *_atxAction;
    NSUInteger _displayType;
    UIViewController *_parentViewController;
    APUIShortLookViewController *_shortLookViewController;
    PLPlatterView *_platterView;
    NSLayoutConstraint *_heightConstraint;
    UITapGestureRecognizer *_tapRecognizer;
}


@property (weak, nonatomic) NSObject<APUIActionFeedbackDelegate> *actionFeedbackDelegate; // ivar: _actionFeedbackDelegate
@property (retain, nonatomic) CRKCardPresentation *cardPresentation; // ivar: _cardPresentation
@property (readonly, nonatomic) NSObject<CRKCardViewControllerDelegate> *cardViewControllerDelegate;
@property (retain, nonatomic) UIViewController *currentCardViewController; // ivar: _currentCardViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger displayContext; // ivar: _displayContext
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)cardPresentation:(id)arg0 compareCardSectionViewProviderOne:(id)arg1 providerTwo:(id)arg2 ;
-(id)initWithATXAction:(id)arg0 parentViewController:(id)arg1 ;
-(id)initWithATXAction:(id)arg0 parentViewController:(id)arg1 displayType:(NSUInteger)arg2 ;
-(void)_tapRecognized:(id)arg0 ;
-(void)cardViewControllerBoundsDidChange:(id)arg0 ;
-(void)cardViewControllerDidLoad:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif