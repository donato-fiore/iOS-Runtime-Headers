// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFINTERACTIONCARDVIEWCONTROLLER_H
#define WFINTERACTIONCARDVIEWCONTROLLER_H

@class UIViewController, UIActivityIndicatorView, CRKCardPresentation, NSString, INInteraction;
@protocol CRKCardPresentationDelegate, CRKCardViewControllerDelegate, WFInteractionCardViewControllerDelegate;


#import "WFCompactUnlockService.h"

@interface WFInteractionCardViewController : UIViewController <CRKCardPresentationDelegate>



@property (weak, nonatomic) UIActivityIndicatorView *activityIndicatorView; // ivar: _activityIndicatorView
@property (retain, nonatomic) CRKCardPresentation *cardPresentation; // ivar: _cardPresentation
@property (readonly, nonatomic) NSObject<CRKCardViewControllerDelegate> *cardViewControllerDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFInteractionCardViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) INInteraction *interaction; // ivar: _interaction
@property (readonly) Class superclass;
@property (readonly, nonatomic) WFCompactUnlockService *unlockService; // ivar: _unlockService


+(void)initialize;
-(BOOL)_canShowWhileLocked;
-(CGFloat)contentHeightForWidth:(CGFloat)arg0 ;
-(id)cardRequestForInteraction:(id)arg0 ;
-(id)cardViewController;
-(id)initWithInteraction:(id)arg0 ;
-(void)buttonOverlayTouchWasCancelled:(id)arg0 ;
-(void)buttonOverlayWasTouchedDown:(id)arg0 ;
-(void)buttonOverlayWasTouchedUpInside:(id)arg0 ;
-(void)buttonOverlayWasTouchedUpOutside:(id)arg0 ;
-(void)cardViewControllerBoundsDidChange:(id)arg0 ;
-(void)cardViewControllerDidLoad:(id)arg0 ;
-(void)loadView;
-(void)updateCardViewSize;
-(void)updateWithInteraction:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif