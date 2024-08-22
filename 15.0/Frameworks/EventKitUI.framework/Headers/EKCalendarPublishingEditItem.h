// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKCALENDARPUBLISHINGEDITITEM_H
#define EKCALENDARPUBLISHINGEDITITEM_H

@class UIActivityIndicatorView, NSString;
@protocol CalendarPublishingActivityDelegate;


#import "EKCalendarEditItem.h"

@interface EKCalendarPublishingEditItem : EKCalendarEditItem <CalendarPublishingActivityDelegate>

 {
    UIActivityIndicatorView *_spinner;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL published; // ivar: _published
@property (readonly) Class superclass;


-(BOOL)configureWithCalendar:(id)arg0 ;
-(CGFloat)defaultCellHeightForSubitemAtIndex:(NSUInteger)arg0 forWidth:(CGFloat)arg1 ;
-(NSUInteger)numberOfSubitems;
-(id)calendarTitle;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(id)footerTitle;
-(id)pubishURL;
-(void)_publishChanged:(id)arg0 ;
-(void)calendarEditor:(id)arg0 didSelectSubitem:(NSUInteger)arg1 ;
-(void)mailComposeController:(id)arg0 didFinishWithResult:(NSInteger)arg1 error:(id)arg2 ;
-(void)messageComposeViewController:(id)arg0 didFinishWithResult:(NSInteger)arg1 ;
-(void)reset;


@end


#endif