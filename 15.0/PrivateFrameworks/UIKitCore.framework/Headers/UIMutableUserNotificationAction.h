// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIMUTABLEUSERNOTIFICATIONACTION_H
#define UIMUTABLEUSERNOTIFICATIONACTION_H

@class NSString, NSDictionary;


#import "UIUserNotificationAction.h"

@interface UIMutableUserNotificationAction : UIUserNotificationAction

@property (nonatomic) NSUInteger activationMode;
@property (nonatomic, getter=isAuthenticationRequired) BOOL authenticationRequired;
@property (nonatomic) NSUInteger behavior;
@property (nonatomic, getter=isDestructive) BOOL destructive;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDictionary *parameters;
@property (copy, nonatomic) NSString *title;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif