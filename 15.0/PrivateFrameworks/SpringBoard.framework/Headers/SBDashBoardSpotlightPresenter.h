// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBDASHBOARDSPOTLIGHTPRESENTER_H
#define SBDASHBOARDSPOTLIGHTPRESENTER_H

@class NSString;
@protocol SPUIRemoteSearchViewDelegate, SBFLegibilitySettingsProviderDelegate, SBDashBoardSpotlightViewControllerDelegate, CSSpotlightPresenting, SBFDashBoardModalPresenterProtocol, SBFLegibilitySettingsProvider;

#import <Foundation/Foundation.h>

#import "SBDashBoardSpotlightViewController.h"

@interface SBDashBoardSpotlightPresenter : NSObject <SPUIRemoteSearchViewDelegate, SBFLegibilitySettingsProviderDelegate, SBDashBoardSpotlightViewControllerDelegate, CSSpotlightPresenting>

 {
    id<SBFDashBoardModalPresenterProtocol> *_presenterViewController;
    SBDashBoardSpotlightViewController *_spotlightViewController;
    id<SBFLegibilitySettingsProvider> *_spotlightLegibilitySettingsProvider;
    NSUInteger _spotlightMultiplexingLevel;
    NSUInteger _remoteSearchViewPresentationSource;
    NSInteger _homeGestureParticipantIdentifier;
    NSInteger _zStackParticipantIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)homeGestureParticipantIdentifierForSpotlightViewController:(id)arg0 ;
-(NSInteger)zStackParticipantIdentifierForSpotlightViewController:(id)arg0 ;
-(NSUInteger)remoteSearchViewPresentationSourceForSpotlightViewController:(id)arg0 ;
-(NSUInteger)spotlightMultiplexingLevelForSpotlightViewController:(id)arg0 ;
-(id)createSpotlightLegiblitySettingsProvider;
-(id)initWithPresenterViewController:(id)arg0 spotlightMultiplexingLevel:(NSUInteger)arg1 remoteSearchViewPresentationSource:(NSUInteger)arg2 homeGestureParticipantIdentifier:(NSInteger)arg3 zStackParticipantIdentifier:(NSInteger)arg4 ;
-(void)dismissSearchView;
-(void)dismissSpotlight;
-(void)dismissSpotlightWithCompletion:(id)arg0 ;
-(void)launchSpotlightForSourceViewController:(id)arg0 interactive:(BOOL)arg1 ;
-(void)launchSpotlightForSourceViewController:(id)arg0 interactive:(BOOL)arg1 completion:(id)arg2 ;
-(void)providerLegibilitySettingsChanged:(id)arg0 ;


@end


#endif