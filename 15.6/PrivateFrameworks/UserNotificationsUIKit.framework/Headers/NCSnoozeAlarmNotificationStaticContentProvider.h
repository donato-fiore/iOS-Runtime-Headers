// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NCSNOOZEALARMNOTIFICATIONSTATICCONTENTPROVIDER_H
#define NCSNOOZEALARMNOTIFICATIONSTATICCONTENTPROVIDER_H

@class NSTimer;


#import "NCNotificationRequestContentProvider.h"
#import "NCNotificationViewController.h"

@interface NCSnoozeAlarmNotificationStaticContentProvider : NCNotificationRequestContentProvider

@property (nonatomic) CGFloat fireTime; // ivar: _fireTime
@property (retain, nonatomic) NSTimer *tickTimer; // ivar: _tickTimer
@property (retain, nonatomic) NCNotificationViewController *viewController; // ivar: _viewController


-(id)_formatDuration:(CGFloat)arg0 ;
-(id)date;
-(id)initWithNotificationRequest:(id)arg0 viewController:(id)arg1 ;
-(id)secondaryText;
-(id)title;
-(void)_tickTimerFired:(id)arg0 ;
-(void)dealloc;
-(void)invalidateTimer;


@end


#endif