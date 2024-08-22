// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UILABELSCALEDMETRICS_H
#define _UILABELSCALEDMETRICS_H

@class NSAttributedString;

#import <Foundation/Foundation.h>

#import "_UILabelConfiguration.h"
#import "_UILabelScaledMetrics.h"

@interface _UILabelScaledMetrics : NSObject {
    CGSize _sourceSize;
    CGSize _scaledSize;
    CGFloat _actualScaleFactor;
    CGFloat _baselineOffset;
    CGFloat _scaledBaselineOffset;
    CGFloat _scaledLineHeight;
    NSInteger _measuredNumberOfLines;
    NSAttributedString *_scaledAttributedText;
    CGSize _unscaledAndPossiblyTooLargeSize;
    CGFloat _scaledFirstBaselineOffset;
    ? _scaledMetricsFlags;
    _UILabelConfiguration *_configuration;
    _UILabelScaledMetrics *_associatedScaledMetrics;
    CGRect _totalBounds;
}




-(id)description;
-(void)_calculateIfNecessary;
-(void)_calculateIfNecessaryWithAssociatedMetrics;
-(void)_calculateIfNecessaryWithConfiguration;


@end


#endif