// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFNAVIGATIONBARMETRICS_H
#define SFNAVIGATIONBARMETRICS_H

@class UITraitCollection, UIFont, UIImageSymbolConfiguration;

#import <Foundation/Foundation.h>


@interface SFNavigationBarMetrics : NSObject {
    BOOL _usesNavigationBarHeightForSheetPresentation;
    UITraitCollection *_traitCollectionForFontMetrics;
    CGFloat _minimumBarHeight;
    UIFont *_defaultLabelFont;
    UIFont *_defaultBoldFont;
    UIFont *_narrowEditingLabelFont;
    BOOL _narrowEditingScaleFactorNeedsUpdate;
    CGFloat _narrowEditingScaleFactor;
    CGFloat _safariBarHeight;
    CGFloat _safariViewControllerBarHeight;
    CGFloat _safariSquishHeightQuantizationOffset;
    CGFloat _safariViewControllerSquishHeightQuantizationOffset;
    CGFloat _statusBarHeight;
    UIImageSymbolConfiguration *_accessoryImageSymbolConfiguration;
    UIImageSymbolConfiguration *_squishedAccessoryImageSymbolConfiguration;
    UIImageSymbolConfiguration *_mediumButtonImageSymbolConfiguration;
    CGFloat _accessibilityImageScale;
    CGFloat _urlOutlineCornerRadius;
    CGFloat _defaultBarHeight;
    CGFloat _urlContainerTop;
    CGFloat _urlOutlineHeight;
    CGFloat _urlLabelVerticalOffset;
    CGFloat _urlLabelAccessoryItemSquishedVerticalOffset;
    CGFloat _urlLabelAccessoryLockItemVerticalOffset;
    CGFloat _distanceFromLabelBaselineToURLOutlineBottom;
    UITraitCollection *_traitCollectionForButtonMetrics;
}




-(id)init;


@end


#endif