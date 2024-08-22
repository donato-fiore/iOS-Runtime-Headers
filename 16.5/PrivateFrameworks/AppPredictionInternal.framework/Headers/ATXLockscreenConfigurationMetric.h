// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXLOCKSCREENCONFIGURATIONMETRIC_H
#define ATXLOCKSCREENCONFIGURATIONMETRIC_H

@class ATXCoreAnalyticsMetric, NSString;



@interface ATXLockscreenConfigurationMetric : ATXCoreAnalyticsMetric

@property (copy, nonatomic) NSString *color; // ivar: _color
@property (copy, nonatomic) NSString *extensionBundleId; // ivar: _extensionBundleId
@property (copy, nonatomic) NSString *font; // ivar: _font
@property (nonatomic) BOOL hasCustomInlineComplication; // ivar: _hasCustomInlineComplication
@property (nonatomic) BOOL isSelected; // ivar: _isSelected
@property (copy, nonatomic) NSString *lockscreenId; // ivar: _lockscreenId
@property (nonatomic) NSUInteger numWidgets; // ivar: _numWidgets
@property (copy, nonatomic) NSString *numberingSystem; // ivar: _numberingSystem
@property (copy, nonatomic) NSString *relatedFocus; // ivar: _relatedFocus
@property (nonatomic) NSUInteger source; // ivar: _source


-(id)coreAnalyticsDictionary;
-(id)metricName;


@end


#endif