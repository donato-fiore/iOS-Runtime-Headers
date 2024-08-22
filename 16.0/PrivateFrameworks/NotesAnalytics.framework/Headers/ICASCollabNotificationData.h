// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASCOLLABNOTIFICATIONDATA_H
#define ICASCOLLABNOTIFICATIONDATA_H

@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASCollabNotificationAction.h"

@interface ICASCollabNotificationData : NSObject <AADataEventType>



@property (readonly, nonatomic) ICASCollabNotificationAction *collabNotificationAction; // ivar: _collabNotificationAction


+(id)dataName;
-(id)initWithCollabNotificationAction:(id)arg0 ;
-(id)toDict;


@end


#endif