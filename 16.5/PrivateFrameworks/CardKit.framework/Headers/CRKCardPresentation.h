// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKCARDPRESENTATION_H
#define CRKCARDPRESENTATION_H

@class CRProtocolRestrictedInvocationChain, UIViewController<CRKCardViewControlling>, NSString;
@protocol CRKCardSectionViewProviderDelegate, _CRKSendMessageCardFactoryDelegate, _CRKCardSectionViewLoaderDelegate, _CRKCardViewControllerTransitionAnimatorDelegate, CRKCardViewControllerDelegate, CRKCardPresenting, CRKIdentifiedProviding, CRCard, CRKCardPresentationDelegate;

#import <Foundation/Foundation.h>

#import "_CRKCardSectionViewLoader.h"
#import "CRKCardPresentationConfiguration.h"

@interface CRKCardPresentation : NSObject <CRKCardSectionViewProviderDelegate, _CRKSendMessageCardFactoryDelegate, _CRKCardSectionViewLoaderDelegate, _CRKCardViewControllerTransitionAnimatorDelegate, CRKCardViewControllerDelegate, CRKCardPresenting>

 {
    _CRKCardSectionViewLoader *_cardSectionViewLoader;
    id<CRKIdentifiedProviding> *_loadedCardViewControllerProvider;
    CRProtocolRestrictedInvocationChain *_cardViewControllerDelegateChain;
    id<CRKCardViewControllerDelegate> *_externalCardViewControllerDelegate;
}


@property (readonly, nonatomic) NSObject<CRCard> *card;
@property (readonly, nonatomic) UIViewController<CRKCardViewControlling> *cardViewController; // ivar: _cardViewController
@property (copy, nonatomic) CRKCardPresentationConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL debugModeEnabled; // ivar: _debugModeEnabled
@property (weak, nonatomic) NSObject<CRKCardPresentationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
+(void)registerProvider:(id)arg0 ;
+(void)unregisterProvider:(id)arg0 ;
-(BOOL)cardSectionDisplayRequiresUserConsentForProvider:(id)arg0 ;
-(CGFloat)boundingWidthForProvider:(id)arg0 ;
-(NSInteger)cardSectionViewLoader:(id)arg0 compareCardSectionViewProviderOne:(id)arg1 providerTwo:(id)arg2 ;
-(NSInteger)semanticContentAttributeForCardFactory:(id)arg0 ;
-(id)_cardSectionViewControllerForCardSection:(id)arg0 ;
-(id)defaultFeedbackDelegateForProvider:(id)arg0 ;
-(id)init;
-(void)_configureWithRequestedCard:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_establishParsecSessionIfNeeded:(id)arg0 ;
-(void)_fullyConfigureWithRequestedCard:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_loadAndRegisterBundleProviders:(id)arg0 ;
-(void)_updateViewConfigurationsDebugMode:(BOOL)arg0 ;
-(void)cardViewController:(id)arg0 requestCardSectionViewSourceForCard:(id)arg1 reply:(id)arg2 ;
-(void)configureWithCard:(id)arg0 completion:(id)arg1 ;
-(void)configureWithCardRequest:(id)arg0 completion:(id)arg1 ;
-(void)configureWithContent:(id)arg0 completion:(id)arg1 ;
-(void)transitionAnimator:(id)arg0 willTransitionFromCardViewController:(id)arg1 toCardViewController:(id)arg2 withAnimationCoordinator:(id)arg3 ;


@end


#endif