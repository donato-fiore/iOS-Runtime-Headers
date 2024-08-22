// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXHOMESCREENWIDGETFEEDBACK_H
#define ATXHOMESCREENWIDGETFEEDBACK_H


#import <Foundation/Foundation.h>

#import "_ATXAppLaunchCategoricalHistogram.h"

@interface ATXHomeScreenWidgetFeedback : NSObject {
    _ATXAppLaunchCategoricalHistogram *_histogram;
}




-(CGFloat)eventCountForWidgetBundleId:(id)arg0 type:(NSUInteger)arg1 ;
-(CGFloat)pseudoTapEngagementRateForWidgetBundleId:(id)arg0 ;
-(CGFloat)tapEngagementRateForWidgetBundleId:(id)arg0 ;
-(id)categoryStringForFeedbackType:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithWidgetFeedbackHistogram:(id)arg0 ;
-(void)addEventForWidgetBundleId:(id)arg0 type:(NSUInteger)arg1 ;
-(void)addEventForWidgetBundleId:(id)arg0 type:(NSUInteger)arg1 weight:(float)arg2 ;


@end


#endif