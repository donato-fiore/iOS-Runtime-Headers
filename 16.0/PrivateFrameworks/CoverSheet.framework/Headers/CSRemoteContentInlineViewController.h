// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSREMOTECONTENTINLINEVIEWCONTROLLER_H
#define CSREMOTECONTENTINLINEVIEWCONTROLLER_H

@class UIViewFloatAnimatableProperty, SBFFluidBehaviorSettings, SBSRemoteContentDefinition, SBSRemoteContentPreferences, NSString, NSArray;
@protocol PTSettingsKeyObserver, CSAdjunctItemHosting, CSMainPageInlineContentViewControllerDelegate, CSRemoteContentViewControllerProtocol, SBFAuthenticationStatusProvider, CSRemoteContentViewControllerDelegate;


#import "CSCoverSheetViewControllerBase.h"
#import "CSDateViewComponent.h"
#import "CSRemoteContentHostViewController.h"
#import "CSDashBoardRemoteContentSettings.h"

@interface CSRemoteContentInlineViewController : CSCoverSheetViewControllerBase <PTSettingsKeyObserver, CSAdjunctItemHosting, CSMainPageInlineContentViewControllerDelegate, CSRemoteContentViewControllerProtocol>

 {
    CGSize _containerSize;
    UIViewFloatAnimatableProperty *_alphaProperty;
    SBFFluidBehaviorSettings *_alphaSettings;
    BOOL _userHasInteractedSinceWake;
    BOOL _dismissing;
    SBSRemoteContentDefinition *_definition;
    SBSRemoteContentPreferences *_remoteContentPreferences;
    id *_cancelInlineContentTouchesAssertion;
}


@property (readonly, nonatomic) NSObject<SBFAuthenticationStatusProvider> *authenticationStatusProvider; // ivar: _authenticationStatusProvider
@property (nonatomic) CGFloat containerCornerRadius;
@property (retain, nonatomic) CSDateViewComponent *dateTimeComponent; // ivar: _dateTimeComponent
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSRemoteContentViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) CSRemoteContentHostViewController *hostViewController; // ivar: _hostViewController
@property (readonly, nonatomic) CGRect inlineContentFrame;
@property (retain, nonatomic) CSDashBoardRemoteContentSettings *remoteContentSettings; // ivar: _remoteContentSettings
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (readonly) Class superclass;


-(BOOL)_dismissesOnTap;
-(BOOL)_reducesWhitePoint;
-(BOOL)_supportsLuminanceReductionForCurrentBackgroundStyle;
-(BOOL)_suppressesBottomEdgeContent;
-(BOOL)dismissForDismissType:(NSInteger)arg0 completion:(id)arg1 ;
-(BOOL)handleEvent:(id)arg0 ;
-(BOOL)inlineContentDismissesOnSignificantScroll;
-(BOOL)insetsMargins;
-(BOOL)isInUnlockGestureMode;
-(BOOL)shouldDismissInlineContentForNowPlaying;
-(BOOL)shouldDismissInlineContentForUnlock;
-(BOOL)shouldInlineContentReceiveBackgroundTouches;
-(BOOL)suppressesDismissalForNotification;
-(BOOL)suppressesDismissalGesture;
-(BOOL)usesBackgroundView;
-(CGFloat)remoteContentHeight;
-(NSInteger)_backgroundStyle;
-(NSInteger)_dateTimeStyle;
-(NSInteger)_homeGestureMode;
-(NSInteger)contentPresentationType;
-(NSInteger)preferredNotificationListMode;
-(id)_newDisplayLayoutElement;
-(id)initWithContentDefinition:(id)arg0 preferences:(id)arg1 hostViewController:(id)arg2 authenticationStatusProvider:(id)arg3 ;
-(void)_addChildHostViewController:(id)arg0 ;
-(void)_didReceiveScroll;
-(void)_didReceiveTouch;
-(void)_dismissForced:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_removeChildHostViewController;
-(void)_setUserHasInteractedSinceWake:(BOOL)arg0 ;
-(void)_updateContentAlpha:(CGFloat)arg0 interactive:(BOOL)arg1 ;
-(void)_updateDisplayLayoutElementForActivation:(id)arg0 ;
-(void)_updatePreferredContentSize;
-(void)aggregateAppearance:(id)arg0 ;
-(void)aggregateBehavior:(id)arg0 ;
-(void)beginCancelTouchesForCurrentEventInHostedContent;
-(void)dealloc;
-(void)didChangeRemoteHostContentFrame:(struct CGRect )arg0 ;
-(void)didReceiveBackgroundScroll;
-(void)didReceiveBackgroundTouch;
-(void)endCancelTouchesForCurrentEventInHostedContent;
-(void)hostDidChangeContentBounds;
-(void)loadView;
-(void)remoteDidChangeStyle;
-(void)setContainerSize:(struct CGSize )arg0 ;
-(void)setVisualStylingProvider:(id)arg0 forCategory:(NSInteger)arg1 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;


@end


#endif