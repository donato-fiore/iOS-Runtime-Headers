// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSYSTEMAPERTUREPROVIDEDCONTENTELEMENT_H
#define SBSYSTEMAPERTUREPROVIDEDCONTENTELEMENT_H

@class NSHashTable, UIView, NSString;
@protocol SAUIElementViewProviding, SAElement, SBSystemApertureSuppressible, SAUILayoutObservable, SAUILayoutSpecifying, SBUISystemApertureContentProviding, SAElementHosting, SAUILayoutHosting;

#import <Foundation/Foundation.h>


@interface SBSystemApertureProvidedContentElement : NSObject <SAUIElementViewProviding, SAElement, SBSystemApertureSuppressible, SAUILayoutObservable, SAUILayoutSpecifying>

 {
    id<SBUISystemApertureContentProviding> *_contentProvider;
    NSHashTable *_observers;
    UIView *_primaryView;
    UIView *_secondaryView;
    UIView *_actionView;
}


@property (readonly, copy, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) NSObject<SAElement> *element;
@property (weak, nonatomic) NSObject<SAElementHosting> *elementHost; // ivar: _elementHost
@property (readonly, copy, nonatomic) NSString *elementIdentifier; // ivar: _elementIdentifier
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInteractiveDismissalEnabled) BOOL interactiveDismissalEnabled;
@property (nonatomic) NSUInteger layoutAxis;
@property (weak, nonatomic) NSObject<SAUILayoutHosting> *layoutHost; // ivar: _layoutHost
@property (readonly, nonatomic) NSInteger layoutMode; // ivar: _layoutMode
@property (readonly, nonatomic) UIView *leadingView; // ivar: _leadingView
@property (nonatomic) NSInteger maximumSupportedLayoutMode; // ivar: _maximumSupportedLayoutMode
@property (readonly, nonatomic, getter=isMinimalPresentationPossible) BOOL minimalPresentationPossible;
@property (readonly, nonatomic) UIView *minimalView; // ivar: _minimalView
@property (nonatomic) NSInteger minimumSupportedLayoutMode; // ivar: _minimumSupportedLayoutMode
@property (nonatomic) NSInteger preferredLayoutMode; // ivar: _preferredLayoutMode
@property (readonly, nonatomic, getter=isRequestingMenuPresentation) BOOL requestingMenuPresentation;
@property (readonly) Class superclass;
@property (nonatomic, getter=isSuppressed) BOOL suppressed;
@property (readonly, nonatomic) UIView *trailingView; // ivar: _trailingView


-(BOOL)_canShowWhileLocked;
-(BOOL)shouldSuppressElementWhileOnCoversheet;
-(CGFloat)_edgeSpacingWithConcentricPositioningIfNecessaryForView:(id)arg0 withFrame:(struct CGRect )arg1 inContainerView:(id)arg2 ;
-(id)_actionView;
-(id)_primaryView;
-(id)_secondaryView;
-(id)initWithIdentifier:(id)arg0 contentProvider:(id)arg1 ;
-(id)viewProvider;
-(struct CGSize )_sizeForEdgeView:(id)arg0 thatFits:(struct CGSize )arg1 layoutMode:(NSInteger)arg2 ;
-(struct CGSize )sizeThatFitsSize:(struct CGSize )arg0 forProvidedView:(id)arg1 inLayoutMode:(NSInteger)arg2 ;
-(struct NSDirectionalEdgeInsets )preferredEdgeOutsetsForLayoutMode:(NSInteger)arg0 suggestedOutsets:(struct NSDirectionalEdgeInsets )arg1 maximumOutsets:(struct NSDirectionalEdgeInsets )arg2 ;
-(void)addElementLayoutSpecifierObserver:(id)arg0 ;
-(void)contentProviderWillTransitionToSize:(struct CGSize )arg0 inContainerView:(id)arg1 transitionCoordinator:(id)arg2 ;
-(void)layoutHostContainerViewDidLayoutSubviews:(id)arg0 ;
-(void)removeElementLayoutSpecifierObserver:(id)arg0 ;


@end


#endif