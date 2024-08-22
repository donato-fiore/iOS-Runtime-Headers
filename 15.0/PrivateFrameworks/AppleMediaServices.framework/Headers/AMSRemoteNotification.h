// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSREMOTENOTIFICATION_H
#define AMSREMOTENOTIFICATION_H


#import <Foundation/Foundation.h>


@interface AMSRemoteNotification : NSObject



+(BOOL)shouldHandleNotification:(id)arg0 ;
+(id)_sharedPushHandler;
+(void)handleNotification:(id)arg0 ;


@end


#endif