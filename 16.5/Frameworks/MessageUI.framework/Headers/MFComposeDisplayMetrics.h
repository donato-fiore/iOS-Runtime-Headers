// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFCOMPOSEDISPLAYMETRICS_H
#define MFCOMPOSEDISPLAYMETRICS_H

@class UITraitCollection;

#import <Foundation/Foundation.h>


@interface MFComposeDisplayMetrics : NSObject

@property (readonly, nonatomic) NSDirectionalEdgeInsets headerViewSeparatorInset;
@property (readonly, nonatomic) BOOL isCompactHeight;
@property (nonatomic) NSDirectionalEdgeInsets layoutMargins; // ivar: _layoutMargins
@property (nonatomic) UIEdgeInsets safeAreaInsets; // ivar: _safeAreaInsets
@property (readonly, nonatomic) UIEdgeInsets sendBarButtonItemImageInsets;
@property (readonly, nonatomic) CGFloat trailingButtonMidlineOffset;
@property (retain, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection


+(id)displayMetricsWithTraitCollection:(id)arg0 layoutMargins:(struct NSDirectionalEdgeInsets )arg1 safeAreaInsets:(struct UIEdgeInsets )arg2 ;


@end


#endif