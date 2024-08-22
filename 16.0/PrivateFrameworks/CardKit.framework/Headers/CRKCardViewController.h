// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKCARDVIEWCONTROLLER_H
#define CRKCARDVIEWCONTROLLER_H

@class UIViewController, NSMutableArray, NSMapTable, NSString;
@protocol CRKCardSectionViewControllerDelegate, CRKCardSectionViewProviderDelegate, CRKCardViewControlling, CRKCardSectionViewSourcing, CRCard, CRKCardViewControllerDelegate;


#import "CRKComposedStackView.h"

@interface CRKCardViewController : UIViewController <CRKCardSectionViewControllerDelegate, CRKCardSectionViewProviderDelegate, CRKCardViewControlling>

 {
    NSMutableArray *_cardSectionViewControllers;
    NSMapTable *_cardSectionsToCardSectionViewControllersMapTable;
    NSMapTable *_handledParametersForInteraction;
    NSMutableArray *_pendingDismissalCommands;
    BOOL _loaded;
    id<CRKCardSectionViewSourcing> *_builtInCardSectionViewSource;
    NSMutableArray *_loadingCardSections;
}


@property (retain, nonatomic) NSObject<CRCard> *card; // ivar: _card
@property (retain, nonatomic) NSObject<CRKCardSectionViewSourcing> *cardSectionViewSource; // ivar: _cardSectionViewSource
@property (weak, nonatomic) NSObject<CRKCardViewControllerDelegate> *cardViewControllerDelegate; // ivar: _cardViewControllerDelegate
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CRKCardViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isIndicatingActivity) BOOL indicatingActivity; // ivar: _indicatingActivity
@property (nonatomic) BOOL loadBundles; // ivar: _loadBundles
@property (readonly, nonatomic, getter=isLoading) BOOL loading;
@property NSInteger preferredPunchoutIndex; // ivar: _preferredPunchoutIndex
@property (readonly) Class superclass;
@property (retain, nonatomic) CRKComposedStackView *view;


+(void)_registerCardSectionViewControllers;
+(void)initialize;
-(BOOL)_askDelegateToPerformReferentialCommand:(id)arg0 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)_fireAndForgetOutboundCommand:(id)arg0 ;
-(BOOL)_isActuallyVisible;
-(BOOL)performCommand:(id)arg0 forCardSectionViewController:(id)arg1 ;
-(CGFloat)contentHeightForWidth:(CGFloat)arg0 ;
-(NSInteger)_convertSFSeparatorStyleToCRKKeylineStyle:(int)arg0 ;
-(NSInteger)_defaultKeylineStyleBetweenLeadingCardSection:(id)arg0 andTrailingCardSection:(id)arg1 ;
-(NSInteger)_keylineStyleBetweenLeadingCardSectionViewController:(id)arg0 andTrailingCardSectionViewController:(id)arg1 ;
-(NSInteger)preferredPunchoutIndexForCardSectionViewController:(id)arg0 ;
-(id)_cardSectionViewControllerForCardSection:(id)arg0 ;
-(id)_generateCardViewAppearanceFeedback;
-(id)_initWithCard:(id)arg0 ;
-(id)_initWithCard:(id)arg0 delegate:(id)arg1 loadBundles:(BOOL)arg2 loadProvidersImmediately:(BOOL)arg3 ;
-(id)_initWithCard:(id)arg0 delegate:(id)arg1 loadProvidersImmediately:(BOOL)arg2 ;
-(id)_loadCardSectionViewControllerFromCardSection:(id)arg0 ;
-(id)defaultFeedbackDelegateForProvider:(id)arg0 ;
-(id)init;
-(id)initWithCard:(id)arg0 delegate:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(struct CGSize )boundingSizeForCardSectionViewController:(id)arg0 ;
-(struct CGSize )preferredContentSize;
-(void)_addCardSectionViewControllersAsChildViewControllers:(id)arg0 ;
-(void)_cancelTouchesIfNecessary;
-(void)_configureCardSectionViewController:(id)arg0 forCardSection:(id)arg1 ;
-(void)_finishLoading;
-(void)_loadCardSectionViewControllersFromCard:(id)arg0 currentSourceInvalid:(BOOL)arg1 ;
-(void)_removeCardSectionViewControllersFromParentViewController:(id)arg0 ;
-(void)_resumeTouchesIfNecessary;
-(void)cardEventDidOccur:(NSUInteger)arg0 withIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(void)cardSectionView:(id)arg0 willProcessEngagementFeedback:(id)arg1 ;
-(void)cardSectionViewController:(id)arg0 didSelectPreferredPunchoutIndex:(NSInteger)arg1 ;
-(void)cardSectionViewController:(id)arg0 requestsHandlingOfIntent:(id)arg1 ;
-(void)cardSectionViewControllerBoundsDidChange:(id)arg0 ;
-(void)cardSectionViewControllerDidFinishLoading:(id)arg0 ;
-(void)cardSectionViewControllerShouldBeRemoved:(id)arg0 ;
-(void)cardSectionViewDidAppearForCardSection:(id)arg0 withAppearanceFeedback:(id)arg1 ;
-(void)cardSectionViewDidDisappearForCardSection:(id)arg0 withDisappearanceFeedback:(id)arg1 ;
-(void)cardSectionViewDidSelectPreferredPunchoutIndex:(NSInteger)arg0 ;
-(void)cardSectionViewWillAppearForCardSection:(id)arg0 withAppearanceFeedback:(id)arg1 ;
-(void)didEngageCardSection:(id)arg0 ;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)handleCardCommand:(id)arg0 reply:(id)arg1 ;
-(void)loadView;
-(void)presentViewController:(id)arg0 ;
-(void)presentViewController:(id)arg0 forCardSectionViewController:(id)arg1 ;
-(void)userDidEngageCardSection:(id)arg0 withEngagementFeedback:(id)arg1 ;
-(void)userDidReportFeedback:(id)arg0 fromCardSection:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willDismissViewController:(id)arg0 ;


@end


#endif