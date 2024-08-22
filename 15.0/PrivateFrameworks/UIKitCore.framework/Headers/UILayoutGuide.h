// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UILAYOUTGUIDE_H
#define UILAYOUTGUIDE_H

@class NSLayoutRect, NSMutableArray, NSISVariable, NSMapTable, NSArray, NSLayoutYAxisAnchor, NSLayoutXAxisAnchor, NSString, NSLayoutDimension;
@protocol UILayoutItem_Internal, _UILayoutItem, NSISVariableDelegate, NSCoding;

#import <Foundation/Foundation.h>

#import "UIView.h"
#import "UITraitCollection.h"

@interface UILayoutGuide : NSObject <UILayoutItem_Internal, _UILayoutItem, NSISVariableDelegate, NSCoding>

 {
    NSLayoutRect *_layoutRect;
    CGRect _layoutFrame;
    BOOL _isLayoutFrameValid;
    NSMutableArray *_constraintsToBeProcessedAfterDecoding;
    UIView *_unsafeUnretainedOwningView;
}


@property (nonatomic, setter=_setAllowOwningViewSetting:) BOOL _allowOwningViewSetting; // ivar: _allowOwningViewSetting
@property (nonatomic, setter=_setAllowsNegativeDimensions:) BOOL _allowsNegativeDimensions; // ivar: __allowsNegativeDimensions
@property (readonly, retain, nonatomic) NSISVariable *_boundsHeightVariable; // ivar: _boundsHeightVariable
@property (readonly, retain, nonatomic) NSISVariable *_boundsWidthVariable; // ivar: _boundsWidthVariable
@property (nonatomic, getter=_isLockedToOwningView, setter=_setLockedToOwningView:) BOOL _lockedToOwningView; // ivar: _isLockedToOwningView
@property (readonly, retain, nonatomic) NSISVariable *_minXVariable; // ivar: _minXVariable
@property (readonly, retain, nonatomic) NSISVariable *_minYVariable; // ivar: _minYVariable
@property (nonatomic, setter=_setShouldBeArchived:) BOOL _shouldBeArchived; // ivar: __shouldBeArchived
@property (readonly, retain, nonatomic) NSMapTable *_stashedLayoutVariableObservations; // ivar: _stashedLayoutVariableObservations
@property (retain, nonatomic, setter=_setSystemConstraints:) NSArray *_systemConstraints; // ivar: _systemConstraints
@property (readonly, nonatomic) CGRect _ui_bounds;
@property (nonatomic) CGRect _ui_frame;
@property (readonly, nonatomic) UIView *_ui_superview;
@property (nonatomic) BOOL _ui_usesManualLayout;
@property (readonly, nonatomic) UIView *_ui_view;
@property (readonly, nonatomic) BOOL _useManualLayoutFrame; // ivar: _useManualLayoutFrame
@property (readonly, nonatomic) NSLayoutYAxisAnchor *bottomAnchor;
@property (readonly, nonatomic) NSLayoutYAxisAnchor *bottomAnchor; // ivar: _bottomAnchor
@property (readonly, nonatomic) NSLayoutXAxisAnchor *centerXAnchor;
@property (readonly, nonatomic) NSLayoutXAxisAnchor *centerXAnchor; // ivar: _centerXAnchor
@property (readonly, nonatomic) NSLayoutYAxisAnchor *centerYAnchor;
@property (readonly, nonatomic) NSLayoutYAxisAnchor *centerYAnchor; // ivar: _centerYAnchor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSLayoutYAxisAnchor *firstBaselineAnchor;
@property (readonly, nonatomic) BOOL hasAmbiguousLayout;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSLayoutDimension *heightAnchor;
@property (readonly, nonatomic) NSLayoutDimension *heightAnchor; // ivar: _heightAnchor
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSLayoutYAxisAnchor *lastBaselineAnchor;
@property (readonly, nonatomic) CGRect layoutFrame;
@property (readonly, nonatomic) NSLayoutXAxisAnchor *leadingAnchor;
@property (readonly, nonatomic) NSLayoutXAxisAnchor *leadingAnchor; // ivar: _leadingAnchor
@property (readonly, nonatomic) NSLayoutXAxisAnchor *leftAnchor;
@property (readonly, nonatomic) NSLayoutXAxisAnchor *leftAnchor; // ivar: _leftAnchor
@property (setter=nsli_setPiercingToken:) NSUInteger nsli_piercingToken;
@property (weak, nonatomic) UIView *owningView; // ivar: _owningView
@property (readonly, nonatomic) NSLayoutXAxisAnchor *rightAnchor;
@property (readonly, nonatomic) NSLayoutXAxisAnchor *rightAnchor; // ivar: _rightAnchor
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSLayoutYAxisAnchor *topAnchor;
@property (readonly, nonatomic) NSLayoutYAxisAnchor *topAnchor; // ivar: _topAnchor
@property (readonly, nonatomic) NSLayoutXAxisAnchor *trailingAnchor;
@property (readonly, nonatomic) NSLayoutXAxisAnchor *trailingAnchor; // ivar: _trailingAnchor
@property (readonly, nonatomic) UITraitCollection *traitCollection;
@property (readonly, nonatomic) NSLayoutDimension *widthAnchor;
@property (readonly, nonatomic) NSLayoutDimension *widthAnchor; // ivar: _widthAnchor


+(CGFloat)_defaultSpacingBetweenGuidesForResolvingSymbolicConstant;
-(*void)_referenceView;
-(BOOL)_uili_isFocusGuide;
-(BOOL)_uili_requiresObservationForVariable:(id)arg0 ;
-(BOOL)nsis_shouldIntegralizeVariable:(id)arg0 ;
-(BOOL)nsis_valueOfVariableIsUserObservable:(id)arg0 ;
-(BOOL)nsli_defaultResolvedValue:(*CGFloat)arg0 forSymbolicConstant:(id)arg1 inConstraint:(id)arg2 error:(*id)arg3 ;
-(BOOL)nsli_isCollectingConstraintChangesForLaterCoordinatedFlush:(id)arg0 ;
-(BOOL)nsli_isFlipped;
-(BOOL)nsli_isLegalConstraintItem;
-(BOOL)nsli_isRTL;
-(BOOL)nsli_lowerAttribute:(int)arg0 intoExpression:(id)arg1 withCoefficient:(CGFloat)arg2 container:(id)arg3 ;
-(BOOL)nsli_lowerAttribute:(int)arg0 intoExpression:(id)arg1 withCoefficient:(CGFloat)arg2 forConstraint:(id)arg3 ;
-(BOOL)nsli_removeConstraint:(id)arg0 ;
-(BOOL)nsli_resolvedValue:(*CGFloat)arg0 forSymbolicConstant:(id)arg1 inConstraint:(id)arg2 error:(*id)arg3 ;
-(CGFloat)nsli_marginOffsetForAttribute:(NSInteger)arg0 ;
-(NSUInteger)nsli_autoresizingMask;
-(id)_autolayoutTraceAtLevel:(NSInteger)arg0 recursively:(BOOL)arg1 ;
-(id)_createAnchorWithClass:(Class)arg0 attribute:(NSInteger)arg1 ;
-(id)_layoutRect;
-(id)_uili_existingBaseFrameVariables;
-(id)_uili_existingObservationEligibleLayoutVariables;
-(id)_uili_observableLayoutEngineForBaseFrameVariables:(BOOL)arg0 ;
-(id)constraintsAffectingLayoutForAxis:(NSInteger)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)nsis_descriptionOfVariable:(id)arg0 ;
-(id)nsli_constraintWithAnchor:(id)arg0 relatedBy:(NSInteger)arg1 toAnchor:(id)arg2 withSystemSpacingMultipliedBy:(CGFloat)arg3 ;
-(id)nsli_contentHeightVariable;
-(id)nsli_contentWidthVariable;
-(id)nsli_heightVariable;
-(id)nsli_installedConstraints;
-(id)nsli_layoutEngine;
-(id)nsli_layoutMarginsItem;
-(id)nsli_superitem;
-(id)nsli_widthVariable;
-(int)nsis_orientationHintForVariable:(id)arg0 ;
-(struct CGSize )nsli_convertSizeFromEngineSpace:(struct CGSize )arg0 ;
-(struct CGSize )nsli_convertSizeToEngineSpace:(struct CGSize )arg0 ;
-(struct CGSize )nsli_engineToUserScalingCoefficients;
-(void)_addConstraintToBeProcessedAfterDecoding:(id)arg0 ;
-(void)_invalidateLayoutFrame;
-(void)_setManualLayoutFrame:(struct CGRect )arg0 ;
-(void)_snipReferencingConstraints;
-(void)_ui_addSubLayoutItem:(id)arg0 ;
-(void)_ui_addToView:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)_ui_insertSubLayoutItem:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)_ui_removeFromParentLayoutItem;
-(void)_uili_removeLayoutVariableObservationsOnlyToSupportTAMICChange:(BOOL)arg0 ;
-(void)_uili_stashLayoutVariableObservation:(id)arg0 forVariable:(id)arg1 ;
-(void)_updateLayoutFrameInOwningView:(id)arg0 fromEngine:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)forwardInvocation:(id)arg0 ;
-(void)nsis_valueOfVariable:(id)arg0 didChangeInEngine:(id)arg1 ;
-(void)nsli_addConstraint:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif