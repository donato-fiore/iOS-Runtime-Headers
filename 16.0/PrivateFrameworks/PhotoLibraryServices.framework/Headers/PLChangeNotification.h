// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLCHANGENOTIFICATION_H
#define PLCHANGENOTIFICATION_H

@class NSNotification;


#import "PLChangeNotificationCenter.h"

@interface PLChangeNotification : NSNotification

@property (readonly, nonatomic) PLChangeNotificationCenter *changeNotificationCenter;


+(id)notificationWithName:(id)arg0 object:(id)arg1 userInfo:(id)arg2 ;
-(void)_calculateDiffs;


@end


#endif