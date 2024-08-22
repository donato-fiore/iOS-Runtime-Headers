// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALENDARPUBLISHINGACTIVITYVIEWCONTROLLER_H
#define CALENDARPUBLISHINGACTIVITYVIEWCONTROLLER_H

@class UIActivityViewController;
@protocol CalendarPublishingActivityDelegate;



@interface CalendarPublishingActivityViewController : UIActivityViewController

@property (weak) NSObject<CalendarPublishingActivityDelegate> *activityDelegate; // ivar: _activityDelegate


-(BOOL)_shouldShowSystemActivityType:(id)arg0 ;
-(void)_prepareActivity:(id)arg0 ;


@end


#endif