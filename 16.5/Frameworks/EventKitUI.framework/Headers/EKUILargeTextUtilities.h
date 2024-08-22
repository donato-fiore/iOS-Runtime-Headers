// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKUILARGETEXTUTILITIES_H
#define EKUILARGETEXTUTILITIES_H


#import <Foundation/Foundation.h>


@interface EKUILargeTextUtilities : NSObject



+(CGFloat)contentSizeCategoryScaledValueForDefaultValue:(CGFloat)arg0 maximumValue:(CGFloat)arg1 shouldScaleForSmallerSizes:(BOOL)arg2 ;
+(CGFloat)contentSizeCategoryScaledValueForDefaultValue:(CGFloat)arg0 shouldScaleForSmallerSizes:(BOOL)arg1 ;
+(CGFloat)contentSizeCategoryScaledValueForLargestNonAccessibilityValue:(CGFloat)arg0 maximumValue:(CGFloat)arg1 ;
+(CGFloat)contentSizeCategoryScaledValueForLargestValue:(CGFloat)arg0 ;
+(CGFloat)contentSizeCategoryScaledValueFromContentSizeCategory:(id)arg0 correspondingValue:(CGFloat)arg1 maximumValue:(CGFloat)arg2 ;


@end


#endif