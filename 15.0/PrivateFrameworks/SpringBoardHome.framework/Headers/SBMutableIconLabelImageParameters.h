// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBMUTABLEICONLABELIMAGEPARAMETERS_H
#define SBMUTABLEICONLABELIMAGEPARAMETERS_H

@class NSString, UIColor, UIFont;


#import "SBIconLabelImageParameters.h"

@interface SBMutableIconLabelImageParameters : SBIconLabelImageParameters

@property (nonatomic, getter=isAccessibilityReduceTransparencyEnabled) BOOL accessibilityReduceTransparencyEnabled;
@property (nonatomic) BOOL canTighten;
@property (nonatomic) BOOL canTruncate;
@property (nonatomic, getter=isColorspaceGrayscale) BOOL colorspaceGrayscale;
@property (nonatomic) BOOL containsEmoji;
@property (copy, nonatomic) NSString *contentSizeCategory;
@property (retain, nonatomic) UIColor *focusHighlightColor;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) UIEdgeInsets fontLanguageInsets;
@property (nonatomic) NSInteger legibilityStyle;
@property (nonatomic) CGSize maxSize;
@property (nonatomic) CGFloat scale;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) UIEdgeInsets textInsets;


-(id)copy;


@end


#endif