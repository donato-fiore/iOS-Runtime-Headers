// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCMUTABLENOTIFICATIONACTION_H
#define NCMUTABLENOTIFICATIONACTION_H

@class NSDictionary, NSString, NSURL;
@protocol NCNotificationActionRunner;


#import "NCNotificationAction.h"

@interface NCMutableNotificationAction : NCNotificationAction

@property (retain, nonatomic) NSObject<NCNotificationActionRunner> *actionRunner;
@property (nonatomic) NSUInteger activationMode;
@property (nonatomic) NSUInteger behavior;
@property (copy, nonatomic) NSDictionary *behaviorParameters;
@property (nonatomic, getter=isDestructiveAction) BOOL destructiveAction;
@property (copy, nonatomic) NSString *iconImageBundlePath;
@property (copy, nonatomic) NSString *iconImageName;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *launchBundleID;
@property (copy, nonatomic) NSURL *launchURL;
@property (nonatomic) BOOL requiresAuthentication;
@property (nonatomic) BOOL shouldDismissNotification;
@property (copy, nonatomic) NSString *title;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif