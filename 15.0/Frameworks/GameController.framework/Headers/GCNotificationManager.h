// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GCNOTIFICATIONMANAGER_H
#define GCNOTIFICATIONMANAGER_H

@class UNUserNotificationCenter;

#import <Foundation/Foundation.h>


@interface GCNotificationManager : NSObject {
    UNUserNotificationCenter *_userNotificationCenter;
    BOOL _isPermissionGranted;
}




+(id)sharedInstance;
-(id)init;
-(void)requestNotification:(id)arg0 withReply:(id)arg1 ;
-(void)requestNotificationImpl:(id)arg0 withReply:(id)arg1 ;


@end


#endif