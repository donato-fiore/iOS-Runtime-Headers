// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSREMOTENOTIFIER_H
#define VSREMOTENOTIFIER_H

@class NSDistributedNotificationCenter, NSString;
@protocol VSRemoteNotifierDelegate;

#import <Foundation/Foundation.h>


@interface VSRemoteNotifier : NSObject

@property (weak, nonatomic) NSObject<VSRemoteNotifierDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSDistributedNotificationCenter *distributedNotificationCenter; // ivar: _distributedNotificationCenter
@property (copy, nonatomic) NSString *notificationObject; // ivar: _notificationObject
@property (readonly, copy, nonatomic) NSString *remoteNotificationName; // ivar: _remoteNotificationName


+(id)_currentProcessIdentifier;
-(id)init;
-(id)initWithNotificationName:(id)arg0 ;
-(void)_didReceiveDistributedNotification:(id)arg0 ;
-(void)dealloc;
-(void)postNotification;
-(void)postNotificationWithUserInfo:(id)arg0 ;


@end


#endif