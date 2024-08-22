// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXMOCKEXTENDEDTRAITCOLLECTION_H
#define PXMOCKEXTENDEDTRAITCOLLECTION_H

@protocol PXMockMutableExtendedTraitCollection;


#import "PXExtendedTraitCollection.h"
#import "PXUpdater.h"

@interface PXMockExtendedTraitCollection : PXExtendedTraitCollection <PXMockMutableExtendedTraitCollection>

 {
    PXUpdater *_updater;
}


@property (nonatomic) CGFloat displayScale; // ivar: _displayScale
@property (nonatomic) NSInteger formFactor; // ivar: _formFactor
@property (nonatomic) NSInteger layoutOrientation; // ivar: _layoutOrientation
@property (nonatomic) CGSize layoutReferenceSize; // ivar: _layoutReferenceSize
@property (nonatomic) NSInteger layoutSizeClass; // ivar: _layoutSizeClass
@property (nonatomic) UIEdgeInsets safeAreaInsets; // ivar: _safeAreaInsets
@property (nonatomic) NSInteger userInterfaceIdiom; // ivar: _userInterfaceIdiom
@property (nonatomic) NSUInteger visibleChromeElements; // ivar: _visibleChromeElements
@property (nonatomic) NSInteger windowOrientation; // ivar: _windowOrientation


-(NSInteger)layoutSizeSubclass;
-(id)initWithFormFactor:(NSInteger)arg0 orientation:(NSInteger)arg1 visibleChromeElements:(NSUInteger)arg2 ;
-(id)initWithLayoutSizeClass:(NSInteger)arg0 ;
-(id)initWithViewController:(id)arg0 ;
-(void)_invalidateLayoutReferenceSizeAndDisplayScale;
-(void)_invalidateLayoutSizeClass;
-(void)_invalidateSafeAreaInsets;
-(void)_setNeedsUpdate;
-(void)_updateLayoutReferenceSizeAndDisplayScale;
-(void)_updateLayoutSizeClass;
-(void)_updateSafeAreaInsets;
-(void)didPerformChanges;
-(void)performChanges:(id)arg0 ;
-(void)registerObservations;
-(void)unregisterObservations;


@end


#endif