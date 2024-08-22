// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKCARDSECTIONVIEWCONTROLLER_H
#define CRKCARDSECTIONVIEWCONTROLLER_H

@class UIViewController, INUIRemoteViewController, NSString, NSArray, UIView<CRKCardSectionView>;
@protocol CRKCardSectionViewControllingDelegate, SFFeedbackListener, CRKFeedbackDelegate, CRKEventResponding, CRCardSection, CRKCardSectionViewControllerDelegate;


#import "CRKOverlayButton.h"
#import "CRKCardSectionViewConfiguration.h"

@interface CRKCardSectionViewController : UIViewController <CRKCardSectionViewControllingDelegate, SFFeedbackListener, CRKFeedbackDelegate, CRKEventResponding>

 {
    CRKOverlayButton *_overlayButton;
    BOOL _childVCDesiresInteractivity;
}


@property (readonly, nonatomic) INUIRemoteViewController *_remoteViewController; // ivar: __remoteViewController
@property (retain, nonatomic) NSObject<CRCardSection> *cardSection; // ivar: _cardSection
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CRKCardSectionViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic, getter=_extraCommands, setter=_setExtraCommands:) NSArray *extraCommands; // ivar: _extraCommands
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isLoading) BOOL loading; // ivar: _loading
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView<CRKCardSectionView> *view;
@property (weak, nonatomic) CRKCardSectionViewConfiguration *viewConfiguration; // ivar: _viewConfiguration


+(id)cardSectionViewControllerForCardSection:(id)arg0 ;
+(id)cardSectionViewControllerForViewConfiguration:(id)arg0 ;
+(void)_registerWithCardKit;
+(void)registerCardSectionViewController;
-(BOOL)_canShowWhileLocked;
-(BOOL)_checkIfCardSectionIsNull:(id)arg0 ;
-(BOOL)_expectsSearchUIView;
-(BOOL)_hasCorrespondingSearchUIView;
-(BOOL)_isIndicatingActivity;
-(BOOL)_isLoadedWithIntentsUIView;
-(BOOL)_shouldHideButtonOverlay;
-(BOOL)_shouldRenderButtonOverlay;
-(BOOL)performCommand:(id)arg0 forViewController:(id)arg1 ;
-(BOOL)shouldHandleEngagement:(id)arg0 forCardSection:(id)arg1 ;
-(id)_backingCardSection;
-(id)_commands;
-(id)_destinationPunchout;
-(id)_generateCardSectionViewAppearanceFeedback;
-(id)_initWithCardSection:(id)arg0 ;
-(id)_preferredPunchoutCommand;
-(void)_buttonOverlayTouchWasCanceled:(id)arg0 ;
-(void)_buttonOverlayWasTouchedDown:(id)arg0 ;
-(void)_buttonOverlayWasTouchedUpInside:(id)arg0 ;
-(void)_buttonOverlayWasTouchedUpOutside:(id)arg0 ;
-(void)_cancelTouchesIfNecessary;
-(void)_finishLoadingViewIfNecessary;
-(void)_loadCardSectionView;
-(void)_performAllCommands;
-(void)_performCommand:(id)arg0 ;
-(void)_resumeTouchesIfNecessary;
-(void)_setupCardSectionButtons;
-(void)cardEventDidOccur:(NSUInteger)arg0 withIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(void)cardSectionViewDidAppearForCardSection:(id)arg0 withAppearanceFeedback:(id)arg1 ;
-(void)cardSectionViewDidDisappearForCardSection:(id)arg0 withDisappearanceFeedback:(id)arg1 ;
-(void)cardSectionViewDidInvalidateSize:(id)arg0 ;
-(void)cardSectionViewDidInvalidateSize:(id)arg0 animate:(BOOL)arg1 ;
-(void)cardSectionViewDidInvalidateSizeForCardSection:(id)arg0 ;
-(void)cardSectionViewDidSelectPreferredPunchoutIndex:(NSInteger)arg0 ;
-(void)cardSectionViewWillAppearForCardSection:(id)arg0 withAppearanceFeedback:(id)arg1 ;
-(void)cardViewDidAppearForCard:(id)arg0 withAppearanceFeedback:(id)arg1 ;
-(void)cardViewDidDisappearForCard:(id)arg0 withDisappearanceFeedback:(id)arg1 ;
-(void)cardViewWillAppearForCard:(id)arg0 withAppearanceFeedback:(id)arg1 ;
-(void)controllerForCard:(id)arg0 didReceiveAsyncCard:(id)arg1 withAsyncCardReceiptFeedback:(id)arg2 ;
-(void)controllerForCard:(id)arg0 didRequestAsyncCard:(id)arg1 withAsyncCardRequestFeedback:(id)arg2 ;
-(void)didEngageCardSection:(id)arg0 ;
-(void)loadView;
-(void)presentViewController:(id)arg0 ;
-(void)userDidEngageCardSection:(id)arg0 withEngagementFeedback:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)willDismissViewController:(id)arg0 ;


@end


#endif