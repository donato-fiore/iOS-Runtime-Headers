// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTDISTRIBUTEDNOTIFICATIONPOSTER_H
#define MTDISTRIBUTEDNOTIFICATIONPOSTER_H

@class NSString;
@protocol MTNotificationCenter;

#import <Foundation/Foundation.h>


@interface MTDistributedNotificationPoster : NSObject <MTNotificationCenter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_shouldNotifyForTrigger:(id)arg0 ;
-(void)dismissNotificationsForAlarm:(id)arg0 ;
-(void)dismissNotificationsForTimer:(id)arg0 ;
-(void)postNotificationForScheduledAlarm:(id)arg0 completionBlock:(id)arg1 ;
-(void)postNotificationForScheduledTimer:(id)arg0 completionBlock:(id)arg1 ;


@end


#endif