// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKUIAPPREVIEWUTILS_H
#define EKUIAPPREVIEWUTILS_H


#import <Foundation/Foundation.h>


@interface EKUIAppReviewUtils : NSObject



+(BOOL)_shouldDisplayReviewPromptWithCalendarModel:(id)arg0 ;
+(BOOL)_upcomingEventCountMeetsThresholdInCalendarModel:(id)arg0 ;
+(id)_queue;
+(id)_sharedStoreReview;
+(void)applicationDidForeground;
+(void)displayReviewPromptIfNeededInScene:(id)arg0 calendarModel:(id)arg1 ;


@end


#endif