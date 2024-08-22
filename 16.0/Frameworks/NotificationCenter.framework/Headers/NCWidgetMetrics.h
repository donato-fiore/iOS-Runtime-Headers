// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCWIDGETMETRICS_H
#define NCWIDGETMETRICS_H


#import <Foundation/Foundation.h>


@interface NCWidgetMetrics : NSObject



+(CGFloat)defaultWidgetRowHeight;
+(CGFloat)scaledValueForValue:(CGFloat)arg0 ;
+(CGFloat)widgetRowHeight;
+(void)_updateWidgetRowHeightForContentSizeCategory;


@end


#endif