// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CCUIMODULECOLLECTIONVIEWCONTROLLER_H
#define CCUIMODULECOLLECTIONVIEWCONTROLLER_H

@class UIViewController, NSDictionary, NSHashTable, NSString, NSArray;
@protocol CCUIModuleInstanceManagerObserver, CCUIModuleSettingsManagerObserver, CCUILayoutViewLayoutSource, CCUIContentModuleContainerViewControllerDelegate, CCUISafeAppearancePropagationProvider, OS_dispatch_group, CCUIModuleCollectionViewControllerDelegate;


#import "CCUIModuleInstanceManager.h"
#import "CCUIModuleSettingsManager.h"
#import "CCUIControlCenterPositionProvider.h"
#import "CCUILayoutOptions.h"
#import "CCUIModuleCollectionView.h"

@interface CCUIModuleCollectionViewController : UIViewController <CCUIModuleInstanceManagerObserver, CCUIModuleSettingsManagerObserver, CCUILayoutViewLayoutSource, CCUIContentModuleContainerViewControllerDelegate, CCUISafeAppearancePropagationProvider>

 {
    CCUIModuleInstanceManager *_moduleManager;
    CCUIModuleSettingsManager *_settingsManager;
    CCUIControlCenterPositionProvider *_portraitPositionProvider;
    CCUIControlCenterPositionProvider *_landscapePositionProvider;
    CCUILayoutOptions *_layoutOptions;
    NSDictionary *_moduleViewControllerByIdentifier;
    NSDictionary *_moduleContainerViewByIdentifier;
    NSHashTable *_homeGestureDismissalAllowedModules;
    NSHashTable *_currentModules;
    NSHashTable *_expandedModules;
    NSObject<OS_dispatch_group> *_moduleCloseDispatchGroup;
    NSString *_topmostModuleIdentifier;
    NSArray *_portraitDoubleMarginIndices;
    NSArray *_landscapeDoubleMarginIndices;
    BOOL _pendingModulePopulation;
    BOOL _pendingModulePositionProviderRefresh;
}


@property (readonly, nonatomic) NSArray *childViewControllersForAppearancePropagation;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CCUIModuleCollectionViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger expandedModuleCount;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isHomeGestureDismissalAllowed) BOOL homeGestureDismissalAllowed; // ivar: _homeGestureDismissalAllowed
@property (retain, nonatomic) CCUIModuleCollectionView *moduleCollectionView;
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)ccui_shouldPropagateAppearanceCalls;
-(BOOL)contentModuleContainerViewController:(id)arg0 canBeginInteractionWithModule:(id)arg1 ;
-(BOOL)isAtMaxHeight;
-(BOOL)isModuleExpandedForIdentifier:(id)arg0 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(NSInteger)_interfaceOrientation;
-(id)_activePositionProvider;
-(id)_currentLayoutOptions;
-(id)_doubleMarginIndicesForModuleIdentifiers:(id)arg0 moduleInstanceByIdentifier:(id)arg1 interfaceOrientation:(NSInteger)arg2 ;
-(id)_moduleInstances;
-(id)_positionProviderForInterfaceOrientation:(NSInteger)arg0 ;
-(id)_setupAndAddModuleViewControllerToHierarchy:(id)arg0 ;
-(id)_sizesForModuleIdentifiers:(id)arg0 moduleInstanceByIdentifier:(id)arg1 interfaceOrientation:(NSInteger)arg2 ;
-(id)horizontalDoubleMarginIndicesForLayoutView:(id)arg0 ;
-(id)initWithModuleInstanceManager:(id)arg0 ;
-(id)moduleViewForIdentifier:(id)arg0 ;
-(id)queryAllTopLevelBlockingGestureRecognizers;
-(id)relevantSnapHeightsForOrientation:(NSInteger)arg0 ;
-(id)topmostModuleView;
-(id)verticalDoubleMarginIndicesForLayoutView:(id)arg0 ;
-(struct CCUILayoutRect )layoutView:(id)arg0 layoutRectForSubview:(id)arg1 ;
-(struct CCUILayoutSize )layoutSizeForLayoutView:(id)arg0 ;
-(struct CCUILayoutSize )layoutSizeForModuleIdentifier:(id)arg0 forOrientation:(NSInteger)arg1 ;
-(struct CGRect )compactModeFrameForContentModuleContainerViewController:(id)arg0 ;
-(struct CGSize )preferredContentSize;
-(struct CGSize )sizeForChildContentContainer:(id)arg0 withParentContainerSize:(struct CGSize )arg1 ;
-(void)_beginAppearanceTransition:(BOOL)arg0 affectedModule:(id)arg1 ;
-(void)_populateModuleViewControllers;
-(void)_populateModulesIfNecessary;
-(void)_refreshPositionProviders;
-(void)_refreshPositionProvidersIfNecessary;
-(void)_removeAndTearDownModuleViewControllerFromHierarchy:(id)arg0 ;
-(void)_updateEnabledModuleIdentifiers;
-(void)_updateHomeGestureDismissalAllowed;
-(void)_updateModuleControllers;
-(void)_updatePositionProviders;
-(void)contentModuleContainerViewController:(id)arg0 didBeginInteractionWithModule:(id)arg1 ;
-(void)contentModuleContainerViewController:(id)arg0 didCloseExpandedModule:(id)arg1 ;
-(void)contentModuleContainerViewController:(id)arg0 didFinishInteractionWithModule:(id)arg1 ;
-(void)contentModuleContainerViewController:(id)arg0 didOpenExpandedModule:(id)arg1 ;
-(void)contentModuleContainerViewController:(id)arg0 willCloseExpandedModule:(id)arg1 ;
-(void)contentModuleContainerViewController:(id)arg0 willDismissViewController:(id)arg1 ;
-(void)contentModuleContainerViewController:(id)arg0 willOpenExpandedModule:(id)arg1 ;
-(void)contentModuleContainerViewController:(id)arg0 willPresentViewController:(id)arg1 ;
-(void)contentModuleContainerViewControllerDismissPresentedContent:(id)arg0 ;
-(void)didUpdateHomeGestureDismissalAllowed:(BOOL)arg0 forModuleWithIdentifier:(id)arg1 ;
-(void)dismissExpandedModuleAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)dismissPresentedContentAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)displayWillTurnOff;
-(void)expandModuleWithIdentifier:(id)arg0 ;
-(void)loadView;
-(void)moduleInstancesChangedForModuleInstanceManager:(id)arg0 ;
-(void)moduleInstancesLayoutChangedForModuleInstanceManager:(id)arg0 ;
-(void)orderedEnabledModuleIdentifiersChangedForSettingsManager:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)willBecomeActive;
-(void)willResignActive;


@end


#endif