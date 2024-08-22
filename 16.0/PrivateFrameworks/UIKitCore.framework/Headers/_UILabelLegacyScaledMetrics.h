// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UILABELLEGACYSCALEDMETRICS_H
#define _UILABELLEGACYSCALEDMETRICS_H

@class NSAttributedString;

#import <Foundation/Foundation.h>


@interface _UILabelLegacyScaledMetrics : NSObject {
    CGFloat _actualScaleFactor;
    CGFloat _baselineOffset;
    CGFloat _scaledBaselineOffset;
    CGFloat _scaledLineHeight;
    NSInteger _measuredNumberOfLines;
    NSAttributedString *_scaledAttributedText;
    CGFloat _scaledFirstBaselineOffset;
    CGSize _scaledSize;
    CGSize _unscaledAndPossiblyTooLargeSize;
}






@end


#endif