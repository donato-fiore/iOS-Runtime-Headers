// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHALOCALNOTIFICATIONINTERFACE_H
#define PHALOCALNOTIFICATIONINTERFACE_H


#import <Foundation/Foundation.h>


@interface PHALocalNotificationInterface : NSObject

@property BOOL isNotificationRegistered; // ivar: _isNotificationRegistered


+(id)localNotificationInterface;
-(id)init;
-(void)fireLocalNotificationWithOptions:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif