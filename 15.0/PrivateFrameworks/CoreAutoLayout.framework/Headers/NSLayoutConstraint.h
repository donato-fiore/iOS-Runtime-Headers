// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSLAYOUTCONSTRAINT_H
#define NSLAYOUTCONSTRAINT_H

@class NSSet, NSString;
@protocol NSISConstraint;

#import <Foundation/Foundation.h>

#import "_NSConstraintDescriptionLayoutRuleNode.h"
#import "NSLayoutAnchor.h"

@interface NSLayoutConstraint : NSObject <NSISConstraint>

 {
    id *_container;
    CGFloat _constant;
    CGFloat _loweredConstant;
    id *_markerAndPositiveExtraVar;
    id *_negativeExtraVar;
    NSUInteger _layoutConstraintFlags;
    float _coefficient;
    float _priority;
}


@property (setter=_setAssociatedRuleNode:) _NSConstraintDescriptionLayoutRuleNode *_associatedRuleNode;
@property (setter=_setContainerDeclaredConstraint:) BOOL _containerDeclaredConstraint;
@property (readonly, copy) NSSet *_referencedLayoutItems;
@property (getter=isActive) BOOL active;
@property CGFloat constant;
@property id *container;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, setter=_setFirstAnchor:) NSLayoutAnchor *firstAnchor; // ivar: _firstAnchor
@property (readonly) NSInteger firstAttribute;
@property (readonly) id *firstItem;
@property (readonly) BOOL hasBeenLowered;
@property (readonly) NSUInteger hash;
@property (copy) NSString *identifier;
@property (nonatomic, getter=_loweredConstantNeedsUpdate, setter=_setLoweredConstantNeedsUpdate:) BOOL loweredConstantNeedsUpdate;
@property (setter=_setMultiplier:) CGFloat multiplier;
@property float priority;
@property (setter=_setRelation:) NSInteger relation;
@property (copy, setter=_setSecondAnchor:) NSLayoutAnchor *secondAnchor; // ivar: _secondAnchor
@property (readonly) NSInteger secondAttribute;
@property (readonly) id *secondItem;
@property BOOL shouldBeArchived;
@property (readonly) Class superclass;
@property (copy) NSString *symbolicConstant;
@property CGFloat symbolicConstantMultiplier;
@property (readonly) CGFloat unsatisfaction;


+(CGFloat)_constraintConstantLimit;
+(id)_findCommonAncestorOfItem:(id)arg0 andItem:(id)arg1 ;
+(id)constraintWithAnchor:(id)arg0 relatedBy:(NSInteger)arg1 constant:(CGFloat)arg2 ;
+(id)constraintWithAnchor:(id)arg0 relatedBy:(NSInteger)arg1 toAnchor:(id)arg2 multiplier:(CGFloat)arg3 constant:(CGFloat)arg4 ;
+(id)constraintWithItem:(id)arg0 attribute:(NSInteger)arg1 relatedBy:(NSInteger)arg2 constant:(CGFloat)arg3 ;
+(id)constraintWithItem:(id)arg0 attribute:(NSInteger)arg1 relatedBy:(NSInteger)arg2 toItem:(id)arg3 attribute:(NSInteger)arg4 ;
+(id)constraintWithItem:(id)arg0 attribute:(NSInteger)arg1 relatedBy:(NSInteger)arg2 toItem:(id)arg3 attribute:(NSInteger)arg4 constant:(CGFloat)arg5 ;
+(id)constraintWithItem:(id)arg0 attribute:(NSInteger)arg1 relatedBy:(NSInteger)arg2 toItem:(id)arg3 attribute:(NSInteger)arg4 multiplier:(CGFloat)arg5 ;
+(id)constraintWithItem:(id)arg0 attribute:(NSInteger)arg1 relatedBy:(NSInteger)arg2 toItem:(id)arg3 attribute:(NSInteger)arg4 multiplier:(CGFloat)arg5 constant:(CGFloat)arg6 ;
+(id)constraintWithItem:(id)arg0 attribute:(NSInteger)arg1 relatedBy:(NSInteger)arg2 toItem:(id)arg3 attribute:(NSInteger)arg4 multiplier:(CGFloat)arg5 symbolicConstant:(id)arg6 ;
+(id)constraintWithItem:(id)arg0 attribute:(NSInteger)arg1 relatedBy:(NSInteger)arg2 toItem:(id)arg3 attribute:(NSInteger)arg4 multiplier:(CGFloat)arg5 symbolicConstant:(id)arg6 symbolicConstantMultiplier:(CGFloat)arg7 ;
+(id)constraintWithItem:(id)arg0 attribute:(NSInteger)arg1 relatedBy:(NSInteger)arg2 toItem:(id)arg3 attribute:(NSInteger)arg4 multiplier:(CGFloat)arg5 symbolicConstant:(id)arg6 theme:(id)arg7 ;
+(id)constraintsWithVisualFormat:(id)arg0 options:(NSUInteger)arg1 metrics:(id)arg2 views:(id)arg3 ;
+(void)_setLegacyDecodingOnly:(BOOL)arg0 ;
+(void)activateConstraints:(id)arg0 ;
+(void)deactivateConstraints:(id)arg0 ;
-(BOOL)_addToEngine:(id)arg0 integralizationAdjustment:(CGFloat)arg1 mutuallyExclusiveConstraints:(*id)arg2 ;
-(BOOL)_addToEngine:(id)arg0 mutuallyExclusiveConstraints:(*id)arg1 ;
-(BOOL)_describesSameRestrictionAsConstraint:(id)arg0 ;
-(BOOL)_effectiveConstant:(*CGFloat)arg0 error:(*id)arg1 ;
-(BOOL)_existsInEngine:(id)arg0 ;
-(BOOL)_isEqualToConstraintValue:(id)arg0 includingConstant:(BOOL)arg1 includeOtherMutableProperties:(BOOL)arg2 ;
-(BOOL)_isFudgeable;
-(BOOL)_isIBPrototypingLayoutConstraint;
-(BOOL)_lowerIntoExpression:(id)arg0 reportingConstantIsRounded:(*BOOL)arg1 ;
-(BOOL)_loweredConstantIsRounded;
-(BOOL)_nsib_isRedundant;
-(BOOL)_nsib_isRedundantInEngine:(id)arg0 ;
-(BOOL)_referencesLayoutItem:(id)arg0 ;
-(BOOL)nsis_valueOfVariableIsUserObservable:(id)arg0 ;
-(CGFloat)_allowedMagnitudeForIntegralizationAdjustment;
-(CGFloat)_fudgeIncrement;
-(CGFloat)priorityForVariable:(id)arg0 ;
-(NSUInteger)_constraintValueHashIncludingConstant:(BOOL)arg0 includeOtherMutableProperties:(BOOL)arg1 ;
-(id)_constraintByReplacingItem:(id)arg0 withItem:(id)arg1 ;
-(id)_constraintByReplacingView:(id)arg0 withView:(id)arg1 ;
-(id)_constraintValueCopy;
-(id)_explainUnsatisfaction;
-(id)_loweredExpression;
-(id)_markerAndPositiveExtraVar;
-(id)animations;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)nsis_descriptionOfVariable:(id)arg0 ;
-(int)_constraintType;
-(int)nsis_orientationHintForVariable:(id)arg0 ;
-(struct CGSize )_engineToContainerScalingCoefficients;
-(void)_addToEngine:(id)arg0 ;
-(void)_clearWeakContainerReference;
-(void)_forceSatisfactionMeasuringUnsatisfactionChanges:(*id)arg0 andMutuallyExclusiveConstraints:(*id)arg1 ;
-(void)_removeFromEngine:(id)arg0 ;
-(void)_setMutablePropertiesFromConstraint:(id)arg0 ;
-(void)_tryToActivateMeasuringUnsatisfactionChanges:(*id)arg0 andMutuallyExclusiveConstraints:(*id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)nsis_valueOfVariable:(id)arg0 didChangeInEngine:(id)arg1 ;
-(void)setAnimations:(id)arg0 ;


@end


#endif