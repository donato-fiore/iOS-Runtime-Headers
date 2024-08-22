// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIACCESSIBILITYELEMENTSUPERCATEGORY_H
#define UIACCESSIBILITYELEMENTSUPERCATEGORY_H

@class super;



@interface UIAccessibilityElementSuperCategory : super



+(BOOL)_isSerializableAccessibilityElement;
+(Class)safeCategoryBaseClass;
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg0 ;
-(BOOL)_accessibilityIsFKARunningForFocusItem;
-(BOOL)_accessibilityProvidesOwnFrame;
-(BOOL)_accessibilitySetNativeFocus;
-(BOOL)_accessibilitySupportsActivateAction;
-(BOOL)_accessibilitySupportsHandwriting;
-(BOOL)_accessibilityUsesFrameInContainerSpace;
-(BOOL)_accessibilityViewHierarchyHasNativeFocus;
-(BOOL)accessibilityActivate;
-(BOOL)isAccessibilityElement;
-(NSUInteger)accessibilityTraits;
-(float)_accessibilityActivationDelay;
-(id)_accessibilityAutomaticIdentifier;
-(id)_accessibilityUserTestingVisibleAncestor;
-(id)accessibilityHint;
-(id)accessibilityLabel;
-(id)accessibilityLanguage;
-(id)accessibilityPath;
-(id)accessibilityValue;
-(id)description;
-(id)focusGroupIdentifier;
-(id)init;
-(id)initWithAccessibilityContainer:(id)arg0 ;
-(struct CGPoint )accessibilityActivationPoint;
-(struct CGRect )accessibilityFrame;
-(void)_accessibilitySetValue:(id)arg0 ;
-(void)accessibilityDecrement;
-(void)accessibilityElementDidBecomeFocused;
-(void)accessibilityElementDidLoseFocus;
-(void)accessibilityIncrement;
-(void)accessibilityZoomInAtPoint:(struct CGPoint )arg0 ;
-(void)accessibilityZoomOutAtPoint:(struct CGPoint )arg0 ;
-(void)dealloc;


@end


#endif