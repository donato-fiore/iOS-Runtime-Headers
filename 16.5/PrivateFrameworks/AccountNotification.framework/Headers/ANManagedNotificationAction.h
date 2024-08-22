// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ANMANAGEDNOTIFICATIONACTION_H
#define ANMANAGEDNOTIFICATIONACTION_H

@class NSManagedObject, NSNumber, NSString;


#import "ANManagedAccountNotification.h"

@interface ANManagedNotificationAction : NSManagedObject

@property (retain, nonatomic) NSNumber *isInternal;
@property (retain, nonatomic) ANManagedAccountNotification *notificationToActivate;
@property (retain, nonatomic) ANManagedAccountNotification *notificationToClear;
@property (retain, nonatomic) ANManagedAccountNotification *notificationToDismiss;
@property (retain, nonatomic) id *options;
@property (retain, nonatomic) NSString *url;


-(void)takeValuesFromNotificationAction:(id)arg0 ;


@end


#endif