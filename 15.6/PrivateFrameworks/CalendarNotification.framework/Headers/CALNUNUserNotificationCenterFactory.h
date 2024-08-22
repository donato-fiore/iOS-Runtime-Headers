// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALNUNUSERNOTIFICATIONCENTERFACTORY_H
#define CALNUNUSERNOTIFICATIONCENTERFACTORY_H

@class NSString;
@protocol CALNUserNotificationCenterFactory;

#import <Foundation/Foundation.h>


@interface CALNUNUserNotificationCenterFactory : NSObject <CALNUserNotificationCenterFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)userNotificationCenterWithBundleIdentifier:(id)arg0 ;


@end


#endif