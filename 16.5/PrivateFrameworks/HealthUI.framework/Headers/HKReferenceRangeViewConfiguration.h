// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKREFERENCERANGEVIEWCONFIGURATION_H
#define HKREFERENCERANGEVIEWCONFIGURATION_H

@class UIColor, UIFont, NSString;

#import <Foundation/Foundation.h>


@interface HKReferenceRangeViewConfiguration : NSObject

@property (nonatomic) NSInteger currentValueNumLinesIfNoRange; // ivar: _currentValueNumLinesIfNoRange
@property (retain, nonatomic) UIColor *currentValueTextColor; // ivar: _currentValueTextColor
@property (nonatomic) CGFloat currentValueTextSize; // ivar: _currentValueTextSize
@property (nonatomic) CGFloat currentValueToReferenceValuePadding; // ivar: _currentValueToReferenceValuePadding
@property (retain, nonatomic) UIFont *currentValueUnitFont; // ivar: _currentValueUnitFont
@property (retain, nonatomic) UIColor *currentValueUnitTextColor; // ivar: _currentValueUnitTextColor
@property (copy, nonatomic) NSString *currentValueUnitTextStyle; // ivar: _currentValueUnitTextStyle
@property (retain, nonatomic) UIFont *currentValueValueFontWithRange; // ivar: _currentValueValueFontWithRange
@property (retain, nonatomic) UIFont *currentValueValueFontWithoutRange; // ivar: _currentValueValueFontWithoutRange
@property (retain, nonatomic) UIFont *dynamicTypeAnchorFont; // ivar: _dynamicTypeAnchorFont
@property (nonatomic) BOOL hideReferenceRangeValues; // ivar: _hideReferenceRangeValues
@property (nonatomic) CGFloat horizontalPadding; // ivar: _horizontalPadding
@property (nonatomic) Class labelClass; // ivar: _labelClass
@property (copy, nonatomic) NSString *referenceRangeTextStyle; // ivar: _referenceRangeTextStyle
@property (retain, nonatomic) UIColor *referenceRangeViewBorderColor; // ivar: _referenceRangeViewBorderColor
@property (retain, nonatomic) UIColor *referenceRangeViewColor; // ivar: _referenceRangeViewColor
@property (nonatomic) CGFloat referenceRangeViewHeight; // ivar: _referenceRangeViewHeight
@property (retain, nonatomic) UIColor *referenceValueTextColor; // ivar: _referenceValueTextColor
@property (nonatomic) CGFloat referenceValueYOffset; // ivar: _referenceValueYOffset


+(id)annotationEmbeddedConfiguration;
+(id)defaultConfiguration;


@end


#endif