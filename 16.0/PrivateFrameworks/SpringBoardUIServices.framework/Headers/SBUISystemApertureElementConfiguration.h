// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBUISYSTEMAPERTUREELEMENTCONFIGURATION_H
#define SBUISYSTEMAPERTUREELEMENTCONFIGURATION_H

@class BSMutableSettings, NSString, UIViewController, UIViewController<SBUISystemApertureElement>, UIColor, NSURL, UIView<SBUISystemApertureAccessoryView>, BSSettings, NSValue;
@protocol SBUISystemApertureElement;

#import <Foundation/Foundation.h>


@interface SBUISystemApertureElementConfiguration : NSObject <SBUISystemApertureElement>



@property (readonly, nonatomic) BSMutableSettings *_storage; // ivar: __storage
@property (nonatomic) NSInteger activeLayoutMode; // ivar: _activeLayoutMode
@property (nonatomic) NSInteger appliedLayoutMode;
@property (copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (copy, nonatomic) NSString *associatedScenePersistenceIdentifier;
@property (nonatomic) BOOL canRequestAlertingAssertion;
@property (weak, nonatomic) UIViewController *containerViewController; // ivar: _containerViewController
@property (nonatomic) NSInteger contentRole;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *elementIdentifier;
@property (weak, nonatomic) UIViewController<SBUISystemApertureElement> *elementViewController; // ivar: _elementViewController
@property (nonatomic) BOOL hasMenuPresentation;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) UIColor *keyColor;
@property (copy, nonatomic) NSURL *launchURL;
@property (retain, nonatomic) UIView<SBUISystemApertureAccessoryView> *leadingView; // ivar: _leadingView
@property (nonatomic) NSInteger maximumLayoutMode;
@property (retain, nonatomic) UIView<SBUISystemApertureAccessoryView> *minimalView; // ivar: _minimalView
@property (nonatomic) NSUInteger minimalViewLayoutAxis;
@property (nonatomic) NSInteger minimumLayoutMode;
@property (readonly, nonatomic) BSSettings *otherSceneClientSettingsRepresentation; // ivar: _otherSceneClientSettingsRepresentation
@property (nonatomic) CGSize preferredCustomAspectRatio;
@property (nonatomic) NSInteger preferredCustomLayout;
@property (nonatomic) CGFloat preferredHeightForBottomSafeArea;
@property (nonatomic) NSInteger preferredLayoutMode;
@property (nonatomic) NSDirectionalEdgeInsets preferredOutsetsFromUnsafeArea; // ivar: _preferredOutsetsFromUnsafeArea
@property (retain, nonatomic) NSValue *preferredPaddingForCompactLayout;
@property (nonatomic) NSUInteger presentationBehaviors; // ivar: _presentationBehaviors
@property (nonatomic) BOOL preventsAutomaticDismissal;
@property (nonatomic) BOOL preventsInteractiveDismissal;
@property (nonatomic) BOOL shouldDeferViewSizingPreferenceUpdates; // ivar: _shouldDeferViewSizingPreferenceUpdates
@property (nonatomic) NSUInteger statusBarStyleOverridesToSuppress;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView<SBUISystemApertureAccessoryView> *trailingView; // ivar: _trailingView
@property (nonatomic, getter=isWaitingForPostCommitHandlerToUpdateContextId) BOOL waitingForPostCommitHandlerToUpdateContextId; // ivar: _waitingForPostCommitHandlerToUpdateContextId


-(BOOL)_elementRequiresConstraintBasedLayout;
-(BOOL)_elementSupportsDynamicResizing;
-(BOOL)_hasActiveCATransactionExcludingPostCommitPhase;
-(id)_strongElementViewController;
-(struct CGSize )maximumAccessoryViewSizeForLayoutMode:(NSInteger)arg0 ;
-(void)_invalidateOtherSceneClientSettingsRepresentation;
-(void)_updateStorageForViewProperties;
-(void)_updateStorageForViewPropertiesIfNeeded;
-(void)refreshViewSizingPreferences;
-(void)setPreferredOutsetsfromUnsafeArea:(struct NSDirectionalEdgeInsets )arg0 ;
-(void)validateConfiguration;


@end


#endif