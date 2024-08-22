// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKCALENDARACCOUNTEDITITEM_H
#define EKCALENDARACCOUNTEDITITEM_H

@class EKSource;


#import "EKCalendarEditItem.h"

@interface EKCalendarAccountEditItem : EKCalendarEditItem {
    EKSource *_limitedToSource;
}


@property (nonatomic) BOOL editable; // ivar: _editable


-(BOOL)calendarEditor:(id)arg0 shouldSelectSubitem:(NSUInteger)arg1 ;
-(BOOL)canAddCalendarToMoreThanOneAccount;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(id)currentSource;
-(id)initLimitedToSource:(id)arg0 ;
-(void)calendarEditor:(id)arg0 didSelectSubitem:(NSUInteger)arg1 ;


@end


#endif