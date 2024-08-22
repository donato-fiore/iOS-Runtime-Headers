// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSHAREDDATAPRIVACYNOTIFICATION_H
#define HDSHAREDDATAPRIVACYNOTIFICATION_H

@class NSString;


#import "HDNanoHealthNotification.h"

@interface HDSharedDataPrivacyNotification : HDNanoHealthNotification {
    NSString *_firstName;
    NSString *_lastName;
}




+(id)category;
-(id)body;
-(id)initWithNotificationManager:(id)arg0 guardianFirstName:(id)arg1 lastName:(id)arg2 ;
-(id)title;


@end


#endif