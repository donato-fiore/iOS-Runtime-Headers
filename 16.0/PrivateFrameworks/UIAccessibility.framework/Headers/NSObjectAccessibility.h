// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSOBJECTACCESSIBILITY_H
#define NSOBJECTACCESSIBILITY_H

@class super;



@interface NSObjectAccessibility : super



+(Class)safeCategoryBaseClass;
+(id)safeCategoryTargetClassName;
-(BOOL)accessibilityActivate;
-(BOOL)accessibilityElementsHidden;
-(BOOL)accessibilityPerformEscape;
-(BOOL)accessibilityRespondsToUserInteraction;
-(BOOL)accessibilityViewIsModal;
-(BOOL)isAccessibilityElement;
-(BOOL)shouldGroupAccessibilityChildren;
-(NSInteger)accessibilityElementCount;
-(NSInteger)accessibilityNavigationStyle;
-(NSInteger)indexOfAccessibilityElement:(id)arg0 ;
-(NSUInteger)accessibilityTraits;
-(id)_accessibilityCapturedImages;
-(id)accessibilityCustomActions;
-(id)accessibilityElementAtIndex:(NSInteger)arg0 ;
-(id)accessibilityElements;
-(id)accessibilityHeaderElements;
-(id)accessibilityHint;
-(id)accessibilityIdentifier;
-(id)accessibilityLabel;
-(id)accessibilityLanguage;
-(id)accessibilityLocalizationBundleID;
-(id)accessibilityLocalizationBundlePath;
-(id)accessibilityLocalizedStringKey;
-(id)accessibilityLocalizedStringTableName;
-(id)accessibilityPath;
-(id)accessibilityUserDefinedActivationPoint;
-(id)accessibilityUserDefinedContainer;
-(id)accessibilityUserDefinedDragSourceDescriptors;
-(id)accessibilityUserDefinedDropPointDescriptors;
-(id)accessibilityUserDefinedFrame;
-(id)accessibilityUserDefinedHint;
-(id)accessibilityUserDefinedIdentifier;
-(id)accessibilityUserDefinedLabel;
-(id)accessibilityUserDefinedLanguage;
-(id)accessibilityUserDefinedShouldGroupChildren;
-(id)accessibilityUserDefinedTraits;
-(id)accessibilityUserDefinedValue;
-(id)accessibilityValue;
-(id)isAccessibilityUserDefinedElement;
-(id)storedAccessibilityElementsHidden;
-(id)storedAccessibilityViewIsModal;
-(id)storedShouldGroupAccessibilityChildren;
-(struct CGPoint )accessibilityActivationPoint;
-(struct CGRect )accessibilityFrame;
-(void)accessibilityDecrement;
-(void)accessibilityIncrement;
-(void)setAccessibilityElements:(id)arg0 ;
-(void)setAccessibilityHint:(id)arg0 ;
-(void)setAccessibilityLabel:(id)arg0 ;
-(void)setAccessibilityValue:(id)arg0 ;


@end


#endif