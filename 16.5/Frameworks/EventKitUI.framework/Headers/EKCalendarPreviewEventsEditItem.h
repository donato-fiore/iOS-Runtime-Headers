// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKCALENDARPREVIEWEVENTSEDITITEM_H
#define EKCALENDARPREVIEWEVENTSEDITITEM_H

@class DAESubscribedCalendarSummary, NSArray;


#import "EKCalendarEditItem.h"
#import "EKICSPreviewController.h"

@interface EKCalendarPreviewEventsEditItem : EKCalendarEditItem {
    DAESubscribedCalendarSummary *_previewSummary;
    NSArray *_previewEventViews;
    EKICSPreviewController *_previewController;
}




-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(id)chooseEventsForPreview:(id)arg0 count:(NSUInteger)arg1 ;
-(id)headerTitle;
-(id)initWithPreviewSummary:(id)arg0 ;
-(void)calendarEditor:(id)arg0 didSelectSubitem:(NSUInteger)arg1 ;


@end


#endif