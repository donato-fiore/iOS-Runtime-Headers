// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKCALENDARSUBSCRIPTIONSPAMCHECKEDITITEM_H
#define EKCALENDARSUBSCRIPTIONSPAMCHECKEDITITEM_H

@class NSURL, UITableViewCell;
@protocol EKCalendarSubscriptionSpamCheckEditItemDelegate;


#import "EKCalendarEditItem.h"

@interface EKCalendarSubscriptionSpamCheckEditItem : EKCalendarEditItem {
    NSURL *_currentURL;
    BOOL _inThrottlePeriod;
    int _state;
    UITableViewCell *_cell;
}


@property (weak, nonatomic) NSObject<EKCalendarSubscriptionSpamCheckEditItemDelegate> *subscriptionSpamDelegate; // ivar: _subscriptionSpamDelegate


-(NSUInteger)numberOfSubitems;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(void)_receivedSpamCheckResult:(BOOL)arg0 forURL:(id)arg1 ;
-(void)_sendSpamCheckRequest;
-(void)_setState:(int)arg0 ;
-(void)_throttlePeriodEnded;
-(void)_updateUI;
-(void)setURLToCheck:(id)arg0 ;


@end


#endif