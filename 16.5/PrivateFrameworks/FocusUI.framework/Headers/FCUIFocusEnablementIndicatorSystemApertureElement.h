// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCUIFOCUSENABLEMENTINDICATORSYSTEMAPERTUREELEMENT_H
#define FCUIFOCUSENABLEMENTINDICATORSYSTEMAPERTUREELEMENT_H

@class UILabel, FCActivityManager, UIImageView, BSUICAPackageView, UIButton, NSString, UIView;
@protocol SAElement, SAAlertBehavior, SAUIElementViewProviding, SAUILayoutSpecifying, FCActivityDescribing, SAAlertHosting, SAElementHosting, SAUILayoutHosting;

#import <Foundation/Foundation.h>


@interface FCUIFocusEnablementIndicatorSystemApertureElement : NSObject <SAElement, SAAlertBehavior, SAUIElementViewProviding, SAUILayoutSpecifying>

 {
    UILabel *_onOffTrailingLabel;
    FCActivityManager *_activityManager;
    UIImageView *_activityIconImageView;
    BSUICAPackageView *_activityIconPackageView;
    UIButton *_activityIconButton;
    UILabel *_activityTitleLabel;
    UILabel *_activityOnOffLabel;
}


@property (readonly, copy, nonatomic) NSObject<FCActivityDescribing> *activityDescription; // ivar: _activityDescription
@property (nonatomic, getter=isActivityEnabled) BOOL activityEnabled; // ivar: _activityEnabled
@property (weak, nonatomic) NSObject<SAAlertHosting> *alertHost; // ivar: _alertHost
@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIView *detachedMinimalView;
@property (readonly, weak, nonatomic) NSObject<SAElement> *element;
@property (weak, nonatomic) NSObject<SAElementHosting> *elementHost;
@property (readonly, copy, nonatomic) NSString *elementIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInteractiveDismissalEnabled) BOOL interactiveDismissalEnabled;
@property (nonatomic) NSUInteger layoutAxis;
@property (weak, nonatomic) NSObject<SAUILayoutHosting> *layoutHost; // ivar: _layoutHost
@property (readonly, nonatomic) NSInteger layoutMode; // ivar: _layoutMode
@property (readonly, nonatomic) UIView *leadingView; // ivar: _leadingView
@property (readonly, nonatomic) NSInteger maximumSupportedLayoutMode;
@property (readonly, nonatomic, getter=isMinimalPresentationPossible) BOOL minimalPresentationPossible;
@property (readonly, nonatomic) UIView *minimalView;
@property (readonly, nonatomic) NSInteger minimumSupportedLayoutMode;
@property (readonly, nonatomic) NSInteger preferredLayoutMode; // ivar: _preferredLayoutMode
@property (readonly, nonatomic, getter=isRequestingMenuPresentation) BOOL requestingMenuPresentation;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *trailingView;


-(BOOL)_canShowWhileLocked;
-(BOOL)hasAlertBehavior;
-(BOOL)shouldSuppressElementWhileOnCoversheet;
-(id)_customLayoutFont;
-(id)_enablementText;
-(id)_primaryColor;
-(id)initWithActivityDescription:(id)arg0 enabled:(BOOL)arg1 ;
-(id)keyColor;
-(id)viewProvider;
-(struct NSDirectionalEdgeInsets )preferredEdgeOutsetsForLayoutMode:(NSInteger)arg0 suggestedOutsets:(struct NSDirectionalEdgeInsets )arg1 maximumOutsets:(struct NSDirectionalEdgeInsets )arg2 ;
-(void)_configureCustomViewsIfNecessary;
-(void)_layoutCustomActivityButtonInContainerView:(id)arg0 ;
-(void)_layoutCustomTextViewsInContainerView:(id)arg0 ;
-(void)_layoutHuggingObstructionForLabel:(id)arg0 x:(CGFloat)arg1 width:(CGFloat)arg2 maxLabelHeight:(CGFloat)arg3 ;
-(void)_updateOnOffTrailingLabel;
-(void)_updateVisualStylingAnimated:(BOOL)arg0 ;
-(void)contentProviderWillTransitionToSize:(struct CGSize )arg0 inContainerView:(id)arg1 transitionCoordinator:(id)arg2 ;
-(void)layoutHostContainerViewDidLayoutSubviews:(id)arg0 ;


@end


#endif