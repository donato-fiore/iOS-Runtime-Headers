// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FAPUSHNOTIFICATIONHANDLER_H
#define FAPUSHNOTIFICATIONHANDLER_H


#import <Foundation/Foundation.h>


@interface FAPushNotificationHandler : NSObject



+(id)sharedHandler;
-(void)didReceivePushNotificationWithPayload:(id)arg0 ;


@end


#endif