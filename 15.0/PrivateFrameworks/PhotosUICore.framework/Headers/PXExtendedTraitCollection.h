// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXEXTENDEDTRAITCOLLECTION_H
#define PXEXTENDEDTRAITCOLLECTION_H

@protocol PXMutableExtendedTraitCollection, PXAnonymousTraitCollection, PXAnonymousViewController;


#import "PXObservable.h"
#import "PXExtendedTraitCollection.h"
#import "PXExtendedTraitCollectionSnapshot.h"

@interface PXExtendedTraitCollection : PXObservable <PXMutableExtendedTraitCollection>

 {
    ? _needsUpdateFlags;
}


@property (nonatomic, setter=_setPendingViewTransitionSize:) CGSize _pendingViewTransitionSize; // ivar: __pendingViewTransitionSize
@property (nonatomic, setter=_setViewSize:) CGSize _viewSize; // ivar: __viewSize
@property (nonatomic) NSInteger contentSizeCategory; // ivar: _contentSizeCategory
@property (readonly, nonatomic) CGFloat displayScale; // ivar: _displayScale
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) CGRect fullScreenReferenceRect;
@property (nonatomic) NSInteger layoutDirection; // ivar: _layoutDirection
@property (nonatomic) UIEdgeInsets layoutMargins; // ivar: _layoutMargins
@property (nonatomic, setter=_setLayoutOrientation:) NSInteger layoutOrientation; // ivar: _layoutOrientation
@property (nonatomic) CGSize layoutReferenceSize; // ivar: _layoutReferenceSize
@property (nonatomic, setter=_setLayoutSizeClass:) NSInteger layoutSizeClass; // ivar: _layoutSizeClass
@property (nonatomic, setter=_setLayoutSizeSubclass:) NSInteger layoutSizeSubclass; // ivar: _layoutSizeSubclass
@property (nonatomic) UIEdgeInsets peripheryInsets; // ivar: _peripheryInsets
@property (readonly, nonatomic) CGRect platformSpecificFullScreenReferenceRect;
@property (readonly, nonatomic) UIEdgeInsets platformSpecificPeripheryInsets;
@property (readonly, nonatomic) PXExtendedTraitCollection *rootExtendedTraitCollection;
@property (nonatomic) UIEdgeInsets safeAreaInsets; // ivar: _safeAreaInsets
@property (readonly, nonatomic) PXExtendedTraitCollectionSnapshot *snapshot;
@property (retain, nonatomic, setter=_setTraitCollection:) NSObject<PXAnonymousTraitCollection> *traitCollection; // ivar: _traitCollection
@property (nonatomic, setter=_setUserInterfaceFeature:) NSInteger userInterfaceFeature; // ivar: _userInterfaceFeature
@property (nonatomic, setter=_setUserInterfaceIdiom:) NSInteger userInterfaceIdiom; // ivar: _userInterfaceIdiom
@property (nonatomic, setter=_setUserInterfaceLevel:) NSInteger userInterfaceLevel; // ivar: _userInterfaceLevel
@property (nonatomic, setter=_setUserInterfaceStyle:) NSInteger userInterfaceStyle; // ivar: _userInterfaceStyle
@property (readonly, weak, nonatomic) NSObject<PXAnonymousViewController> *viewController; // ivar: _viewController
@property (readonly, nonatomic) NSInteger windowOrientation; // ivar: _windowOrientation
@property (readonly, nonatomic) CGSize windowReferenceSize; // ivar: _windowReferenceSize


-(BOOL)_needsUpdate;
-(CGFloat)displayScaleFromTraitCollection:(id)arg0 ;
-(NSInteger)userInterfaceFeatureForViewController:(id)arg0 ;
-(id)createTraitCollection;
-(id)init;
-(id)initWithViewController:(id)arg0 ;
-(id)mutableChangeObject;
-(void)_invalidateContentSizeCategory;
-(void)_invalidateLayoutDirection;
-(void)_invalidateLayoutOrientation;
-(void)_invalidateLayoutReferenceSize;
-(void)_invalidateLayoutSizeClass;
-(void)_invalidateUserInterfaceFeature;
-(void)_invalidateUserInterfaceIdiom;
-(void)_invalidateUserInterfaceLevel;
-(void)_invalidateUserInterfaceStyle;
-(void)_invalidateViewSize;
-(void)_invalidateWindowOrientation;
-(void)_invalidateWindowReferenceSize;
-(void)_setNeedsUpdate;
-(void)_updateContentSizeCategoryIfNeeded;
-(void)_updateDisplayScaleIfNeeded;
-(void)_updateIfNeeded;
-(void)_updateLayoutDirectionIfNeeded;
-(void)_updateLayoutMarginsIfNeeded;
-(void)_updateLayoutOrientationIfNeeded;
-(void)_updateLayoutReferenceSizeIfNeeded;
-(void)_updateLayoutSizeClassIfNeeded;
-(void)_updatePeripheryInsetsIfNeeded;
-(void)_updateSafeAreaInsetsIfNeeded;
-(void)_updateTraitCollectionIfNeeded;
-(void)_updateUserInterfaceFeatureIfNeeded;
-(void)_updateUserInterfaceIdiomIfNeeded;
-(void)_updateUserInterfaceLevelIfNeeded;
-(void)_updateUserInterfaceStyleIfNeeded;
-(void)_updateViewSizeIfNeeded;
-(void)_updateWindowOrientationIfNeeded;
-(void)_updateWindowReferenceSizeIfNeeded;
-(void)_viewWillLayoutSubviews;
-(void)dealloc;
-(void)didPerformChanges;
-(void)getContentSizeCategory:(*NSInteger)arg0 ;
-(void)getLayoutDirection:(*NSInteger)arg0 ;
-(void)getSizeClass:(*NSInteger)arg0 sizeSubclass:(*NSInteger)arg1 ;
-(void)getUserInterfaceIdiom:(*NSInteger)arg0 ;
-(void)getUserInterfaceLevel:(*NSInteger)arg0 ;
-(void)getUserInterfaceStyle:(*NSInteger)arg0 ;
-(void)invalidateDisplayScale;
-(void)invalidateLayoutMargins;
-(void)invalidatePeripheryInsets;
-(void)invalidateSafeAreaInsets;
-(void)invalidateTraitCollection;
-(void)registerObservations;
-(void)unregisterObservations;
-(void)viewControllerDidMoveToParentViewController:(id)arg0 ;
-(void)viewControllerViewWillTransitionToSize:(struct CGSize )arg0 ;


@end


#endif