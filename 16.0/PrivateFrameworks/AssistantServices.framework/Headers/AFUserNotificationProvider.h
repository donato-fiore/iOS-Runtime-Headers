// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFUSERNOTIFICATIONPROVIDER_H
#define AFUSERNOTIFICATIONPROVIDER_H

@class NSXPCConnection, NSMutableDictionary;
@protocol AFUserNotificationServiceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AFUserNotificationProvider : NSObject <AFUserNotificationServiceDelegate>

 {
    NSXPCConnection *_connection;
    NSMutableDictionary *_responseHandlersByNotificationID;
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)_connection;
-(id)init;
-(void)postNotificationRequest:(id)arg0 responseHandler:(id)arg1 ;
-(void)receivedNotificationResponse:(id)arg0 ;
-(void)withdrawNotificationRequestWithIdentifier:(id)arg0 ;


@end


#endif