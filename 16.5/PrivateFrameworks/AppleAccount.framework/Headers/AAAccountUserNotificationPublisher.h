// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAACCOUNTUSERNOTIFICATIONPUBLISHER_H
#define AAACCOUNTUSERNOTIFICATIONPUBLISHER_H


#import <Foundation/Foundation.h>

#import "AAAccountUserNotificationDaemonConnection.h"

@interface AAAccountUserNotificationPublisher : NSObject {
    AAAccountUserNotificationDaemonConnection *_daemonConnection;
}




-(id)init;
-(id)initWithDaemonXPCEndpoint:(id)arg0 ;
-(void)postAccountUserNotificationWith:(id)arg0 completion:(id)arg1 ;


@end


#endif