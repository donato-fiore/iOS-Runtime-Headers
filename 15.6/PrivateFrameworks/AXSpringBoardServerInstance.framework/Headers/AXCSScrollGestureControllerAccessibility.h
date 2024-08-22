// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXCSSCROLLGESTURECONTROLLERACCESSIBILITY_H
#define AXCSSCROLLGESTURECONTROLLERACCESSIBILITY_H

@class super;



@interface AXCSScrollGestureControllerAccessibility : super



+(Class)safeCategoryBaseClass;
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg0 ;
-(id)_accessibilityForcedScrollingStrategy;
-(id)_accessibilitySavedScrollingStrategy;
-(void)_accessibilitySetForcedScrollingStrategy:(id)arg0 ;
-(void)_accessibilitySetSavedScrollingStrategy:(id)arg0 ;
-(void)accessibilitySetSystemDashBoardGesturesEnabled:(BOOL)arg0 ;
-(void)setScrollingStrategy:(NSInteger)arg0 ;


@end


#endif