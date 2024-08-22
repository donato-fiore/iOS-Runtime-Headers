// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXHOMESCREENWIDGETFEEDBACKPROCESSOR_H
#define ATXHOMESCREENWIDGETFEEDBACKPROCESSOR_H

@class BPSPublisher, ATXHomeScreenEvent;

#import <Foundation/Foundation.h>

#import "ATXHomeScreenWidgetFeedback.h"

@interface ATXHomeScreenWidgetFeedbackProcessor : NSObject {
    ATXHomeScreenWidgetFeedback *_widgetFeedback;
    BPSPublisher *_publisher;
    ATXHomeScreenEvent *_lastPageAppearEvent;
}




+(BOOL)_shouldProcessEvent:(id)arg0 ;
+(id)_retrieveLastHistogramUpdateDate;
+(void)_storeLastHistogramUpdateDate:(id)arg0 ;
-(id)init;
-(id)initWithWidgetFeedback:(id)arg0 publisher:(id)arg1 ;
-(void)_addToHistogramForWidgetsInEvent:(id)arg0 type:(NSUInteger)arg1 ;
-(void)_updateHistogramForEvent:(id)arg0 ;
-(void)updateHistogramsForRecentHomeScreenEvents;


@end


#endif