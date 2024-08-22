// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRIUICARDSNIPPETVIEWCONTROLLER_H
#define SIRIUICARDSNIPPETVIEWCONTROLLER_H

@class SACardSnippet, NSMutableDictionary, SRUIFCardLoader, NSTimer, NSMutableSet, NSString, CRKCardPresentation, UIViewController<CRKCardViewControlling>;
@protocol SRUIFCardLoaderDelegate, SRUIFCardLoadingObserver, SiriUIModalContainerViewControllerDelegate, CRKCardPresentationDelegate, SiriUICardSnippetViewDataSource, SiriUICardSnippetViewDelegate, CRKCardViewControllerDelegate, SiriUISizeClassConfiguring, OS_dispatch_group;


#import "SiriUISnippetViewController.h"
#import "SiriUIModalContainerViewController.h"
#import "SiriUICardSnippetView.h"

@interface SiriUICardSnippetViewController : SiriUISnippetViewController <SRUIFCardLoaderDelegate, SRUIFCardLoadingObserver, SiriUIModalContainerViewControllerDelegate, CRKCardPresentationDelegate, SiriUICardSnippetViewDataSource, SiriUICardSnippetViewDelegate, CRKCardViewControllerDelegate, SiriUISizeClassConfiguring>

 {
    SACardSnippet *_snippet;
    CGSize _contentSize;
    NSMutableDictionary *_referenceableCommandsByIdentifierMap;
    NSMutableDictionary *_referenceableSnippetsByIdentifierMap;
    NSObject<OS_dispatch_group> *_cardLoadingGroup;
    SACardSnippet *_newlyLoadedCardSnippet;
    SRUIFCardLoader *_cardLoader;
    id *_cardLoadingCompletionhandler;
    NSTimer *_cardLoadingTimer;
    BOOL _isCardLoading;
    BOOL _isCardViewControllerLoading;
    NSInteger _sizeClass;
    NSMutableSet *_identifiersProcessedWithNewTurn;
    NSString *_feedbackEngagementInstrumentationIdentifier;
    SiriUIModalContainerViewController *_presentedModalContainerViewController;
}


@property (retain, nonatomic, getter=_cardPresentation, setter=_setCardPresentation:) CRKCardPresentation *cardPresentation; // ivar: _cardPresentation
@property (retain, nonatomic, getter=_cardViewController, setter=_setCardViewController:) UIViewController<CRKCardViewControlling> *cardViewController; // ivar: _cardViewController
@property (readonly, nonatomic) NSObject<CRKCardViewControllerDelegate> *cardViewControllerDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) SiriUICardSnippetView *view;


+(void)initialize;
-(BOOL)cardLoader:(id)arg0 loadCard:(id)arg1 withCompletionHandler:(id)arg2 ;
-(BOOL)cardLoader:(id)arg0 shouldLoadCard:(id)arg1 ;
-(BOOL)hasGeneratedNewInstrumentationTurnForPunchOutAceCommand:(id)arg0 url:(id)arg1 ;
-(BOOL)isIndicatingActivity;
-(BOOL)isNavigating;
-(BOOL)logContentsIfApplicable;
-(BOOL)performBeganEditingCommand:(id)arg0 forCardViewController:(id)arg1 ;
-(BOOL)performFinishedEditingCommand:(id)arg0 forCardViewController:(id)arg1 ;
-(BOOL)performInvocationPayloadCommand:(id)arg0 forCardViewController:(id)arg1 ;
-(BOOL)performNextCardCommand:(id)arg0 forCardViewController:(id)arg1 ;
-(BOOL)performPunchoutCommand:(id)arg0 forCardViewController:(id)arg1 ;
-(BOOL)performReferentialCommand:(id)arg0 forCardViewController:(id)arg1 ;
-(BOOL)usePlatterStyle;
-(CGFloat)boundingWidthForPresentation:(id)arg0 ;
-(CGFloat)desiredHeight;
-(CGFloat)desiredHeightForTransparentHeaderView;
-(CGFloat)preferredContentHeight;
-(Class)transparentHeaderViewClass;
-(NSUInteger)navigationIndexOfCardViewController:(id)arg0 ;
-(id)_analytics;
-(id)_instrumentationManager;
-(id)_metricsContextOfEventsForCard:(id)arg0 ;
-(id)_metricsContextOfEventsForCardSection:(id)arg0 inCard:(id)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)localeForCardSnippetView:(id)arg0 ;
-(id)requestContext;
-(id)sashItemForCardSnippetView:(id)arg0 ;
-(id)snippet;
-(struct CGSize )cardViewController:(id)arg0 boundingSizeForCardSectionViewController:(id)arg1 ;
-(struct UIEdgeInsets )defaultViewInsets;
-(void)_addCardViewControllerAsChildViewController:(id)arg0 ;
-(void)_addNextCardTo:(id)arg0 fullCard:(id)arg1 ;
-(void)_beginMonitoringForNextCardWithBlock:(id)arg0 ;
-(void)_emitInstrumentationEventForContentChangedViaKeyboard;
-(void)_emitInstrumentationEventForKeyboardInvocation;
-(void)_emitInstrumentationEventWithInvocationSource:(int)arg0 ;
-(void)_forwardProgressEvent:(NSUInteger)arg0 toCardViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_forwardProgressEventToCardViewController:(NSUInteger)arg0 ;
-(void)_insertCardViewController:(id)arg0 ;
-(void)_inspectPayloadForMetricsEvents:(id)arg0 ;
-(void)_instrumentCardSectionInteractionForCardSection:(id)arg0 previousTurn:(id)arg1 ;
-(void)_instrumentSashInteractionWithPreviousTurn:(id)arg0 ;
-(void)_logCardRelationshipIdentifiedForCompactCard:(id)arg0 fullCard:(id)arg1 snippet:(id)arg2 ;
-(void)_navigationButtonTapped:(id)arg0 ;
-(void)_noteTurnGeneratedForAceCommands:(id)arg0 ;
-(void)_populateCommand:(id)arg0 withInstrumentationTurn:(id)arg1 ;
-(void)_removeBottomKeylineFromCard:(id)arg0 ;
-(void)_removeCardViewControllerFromParentViewController:(id)arg0 ;
-(void)_updateContentSizeAndNotifyDelegateIfNecessary:(BOOL)arg0 ;
-(void)_validateCardForParsecFeedbackDelivery:(id)arg0 validHandler:(id)arg1 ;
-(void)_validateCardSectionForParsecFeedbackDelivery:(id)arg0 validHandler:(id)arg1 ;
-(void)cardLoadingMonitor:(id)arg0 didReceiveCardSnippet:(id)arg1 ;
-(void)cardLoadingMonitor:(id)arg0 didReceiveVisualResponseSnippet:(id)arg1 ;
-(void)cardSectionView:(id)arg0 willProcessEngagementFeedback:(id)arg1 ;
-(void)cardSectionViewDidAppearForCardSection:(id)arg0 withAppearanceFeedback:(id)arg1 ;
-(void)cardSectionViewDidDisappearForCardSection:(id)arg0 withDisappearanceFeedback:(id)arg1 ;
-(void)cardSectionViewWillAppearForCardSection:(id)arg0 withAppearanceFeedback:(id)arg1 ;
-(void)cardSnippetViewSashWasTapped:(id)arg0 ;
-(void)cardViewController:(id)arg0 requestsHandlingOfIntent:(id)arg1 ;
-(void)cardViewController:(id)arg0 willDismissViewController:(id)arg1 ;
-(void)cardViewControllerBoundsDidChange:(id)arg0 ;
-(void)cardViewControllerDidLoad:(id)arg0 ;
-(void)cardViewDidAppearForCard:(id)arg0 withAppearanceFeedback:(id)arg1 ;
-(void)cardViewDidDisappearForCard:(id)arg0 withDisappearanceFeedback:(id)arg1 ;
-(void)cardViewWillAppearForCard:(id)arg0 withAppearanceFeedback:(id)arg1 ;
-(void)configureContentWithSizeClass:(NSInteger)arg0 ;
-(void)configureReusableTransparentHeaderView:(id)arg0 ;
-(void)controllerForCard:(id)arg0 didReceiveAsyncCard:(id)arg1 withAsyncCardReceiptFeedback:(id)arg2 ;
-(void)controllerForCard:(id)arg0 didRequestAsyncCard:(id)arg1 withAsyncCardRequestFeedback:(id)arg2 ;
-(void)loadView;
-(void)modalContainerViewControllerViewDidDisappear:(id)arg0 ;
-(void)modalContainerViewControllerViewWillDisappear:(id)arg0 ;
-(void)presentViewController:(id)arg0 forCardViewController:(id)arg1 ;
-(void)setNavigating:(BOOL)arg0 ;
-(void)setSnippet:(id)arg0 ;
-(void)siriDidDeactivate;
-(void)siriDidReceiveViewsWithDialogPhase:(id)arg0 ;
-(void)siriDidScrollVisible:(BOOL)arg0 ;
-(void)siriDidStartSpeakingWithIdentifier:(id)arg0 ;
-(void)siriDidStopSpeakingWithIdentifier:(id)arg0 speechQueueIsEmpty:(BOOL)arg1 ;
-(void)siriDidTapOutsideContent;
-(void)siriDidUpdateASRWithRecognition:(id)arg0 ;
-(void)siriWillBeginScrolling;
-(void)siriWillStartRequest;
-(void)userDidEngageCardSection:(id)arg0 withEngagementFeedback:(id)arg1 ;
-(void)userDidReportFeedback:(id)arg0 fromCardSection:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)wasAddedToTranscript;
-(void)willCancel;
-(void)willConfirm;


@end


#endif