// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSHAREDDATAOPTINNOTIFICATION_H
#define HDSHAREDDATAOPTINNOTIFICATION_H

@class NSString;


#import "HDNanoHealthNotification.h"

@interface HDSharedDataOptInNotification : HDNanoHealthNotification {
    NSString *_guardianDisplayName;
}




+(id)category;
-(NSUInteger)destinations;
-(id)body;
-(id)initWithNotificationManager:(id)arg0 guardianDisplayName:(id)arg1 ;
-(id)title;


@end


#endif