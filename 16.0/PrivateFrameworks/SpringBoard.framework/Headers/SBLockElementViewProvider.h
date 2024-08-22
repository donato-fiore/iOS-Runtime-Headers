// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBLOCKELEMENTVIEWPROVIDER_H
#define SBLOCKELEMENTVIEWPROVIDER_H

@class SBUIBiometricResource, SBUIProudLockIconView, UIView, BSUICAPackageView, CSLockScreenPearlSettings, SBUISystemApertureContentProvider, NSString, SBUISystemApertureCustomContentProvider;
@protocol SBUIBiometricResourceObserver, SBSystemApertureSuppressible, SAElementViewProviding, PTSettingsKeyObserver, SAUIContentTransitioning, SAElementHosting, SAUILayoutHosting, SAElement;


#import "SBActivityProvidedContentElement.h"

@interface SBLockElementViewProvider : SBActivityProvidedContentElement <SBUIBiometricResourceObserver, SBSystemApertureSuppressible, SAElementViewProviding, PTSettingsKeyObserver, SAUIContentTransitioning>

 {
    SBUIBiometricResource *_sharedResource;
    BOOL _allowsBioUnlock;
    BOOL _isAuthenticated;
    BOOL _hasActiveUnlockAttempt;
    BOOL _isEmpty;
    BOOL _isInBloomMode;
    NSUInteger _unlockMode;
    SBUIProudLockIconView *_leadingLock;
    UIView *_trailingView;
    BSUICAPackageView *_trailingPackageView;
    CGFloat _additionalLeadingPaddingUnauthed;
    CGFloat _additionalLeadingPaddingAuthed;
    CSLockScreenPearlSettings *_pearlSettings;
    id<SAElementHosting> *_elementHost;
    NSInteger _layoutMode;
    id<SAUILayoutHosting> *_layoutHost;
}


@property (retain, nonatomic) SBUISystemApertureContentProvider *contentProvider; // ivar: _contentProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) NSObject<SAElement> *element;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBUISystemApertureCustomContentProvider *lockProvider; // ivar: _lockProvider
@property (readonly) Class superclass;
@property (nonatomic, getter=isSuppressed) BOOL suppressed;
@property (retain, nonatomic) SBUISystemApertureCustomContentProvider *trailingPackageProvider; // ivar: _trailingPackageProvider


+(BOOL)deviceSupportsElement;
-(BOOL)_activelyWantsMatching;
-(BOOL)_allowsBiometricUnlock;
-(BOOL)_canShowWhileLocked;
-(BOOL)handleElementViewEvent:(NSInteger)arg0 ;
-(BOOL)hasActivityBehavior;
-(BOOL)isProvidedViewConcentric:(id)arg0 inLayoutMode:(NSInteger)arg1 ;
-(BOOL)prefersAlertKeyLineStyle;
-(BOOL)shouldSuppressElementWhileOnCoversheet;
-(CGFloat)_xPaddingForAuthState;
-(NSInteger)layoutMode;
-(NSInteger)maximumSupportedLayoutMode;
-(NSInteger)minimumSupportedLayoutMode;
-(NSInteger)preferredLayoutMode;
-(NSUInteger)_unlockMode;
-(id)clientIdentifier;
-(id)init;
-(id)layoutHost;
-(id)leadingLock;
-(id)trailingPackageView;
-(id)viewProvider;
-(struct CGRect )_elementFrameLeading:(BOOL)arg0 forLayoutMode:(NSInteger)arg1 ;
-(struct CGSize )sizeThatFitsSize:(struct CGSize )arg0 forProvidedView:(id)arg1 inLayoutMode:(NSInteger)arg2 ;
-(struct NSDirectionalEdgeInsets )preferredEdgeOutsetsForLayoutMode:(NSInteger)arg0 suggestedOutsets:(struct NSDirectionalEdgeInsets )arg1 maximumOutsets:(struct NSDirectionalEdgeInsets )arg2 ;
-(void)_setUnlockMode:(NSUInteger)arg0 ;
-(void)_toggleUnlockMode;
-(void)_updateAllowsBioUnlock;
-(void)_updateLockLayout;
-(void)_updateTrailingGlyph;
-(void)_updateTrailingPackageVisibility;
-(void)biometricResource:(id)arg0 matchingEnabledDidChange:(BOOL)arg1 ;
-(void)biometricResource:(id)arg0 observeEvent:(NSUInteger)arg1 ;
-(void)contentProviderWillTransitionToSize:(struct CGSize )arg0 inContainerView:(id)arg1 transitionCoordinator:(id)arg2 ;
-(void)handleBiometricEvent:(NSInteger)arg0 ;
-(void)layoutHostContainerViewDidLayoutSubviews:(id)arg0 ;
-(void)layoutHostContainerViewWillLayoutSubviews:(id)arg0 ;
-(void)setAuthenticated:(BOOL)arg0 ;
-(void)setBloomed:(BOOL)arg0 ;
-(void)setEmpty:(BOOL)arg0 ;
-(void)setLayoutHost:(id)arg0 ;
-(void)setLayoutMode:(NSInteger)arg0 reason:(NSInteger)arg1 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)shake;


@end


#endif