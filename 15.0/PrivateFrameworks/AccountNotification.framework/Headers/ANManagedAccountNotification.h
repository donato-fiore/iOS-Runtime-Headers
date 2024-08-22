// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ANMANAGEDACCOUNTNOTIFICATION_H
#define ANMANAGEDACCOUNTNOTIFICATION_H

@class NSManagedObject, NSString, NSDate;


#import "ANManagedNotificationAction.h"

@interface ANManagedAccountNotification : NSManagedObject

@property (retain, nonatomic) NSString *accountTypeID;
@property (retain, nonatomic) ANManagedNotificationAction *activateAction;
@property (retain, nonatomic) NSString *activateButtonTitle;
@property (retain, nonatomic) NSString *callbackMachServiceName;
@property (retain, nonatomic) ANManagedNotificationAction *clearAction;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) ANManagedNotificationAction *dismissAction;
@property (retain, nonatomic) NSString *dismissButtonTitle;
@property (retain, nonatomic) NSString *eventID;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) id *userInfo;


-(void)takeValuesFromAccountNotification:(id)arg0 ;


@end


#endif