// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXDIGESTSETUPFLOWCLIENT_H
#define ATXDIGESTSETUPFLOWCLIENT_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ATXNotificationDigestRankerClient.h"

@interface ATXDigestSetupFlowClient : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    ATXNotificationDigestRankerClient *_xpcClient;
}




-(id)init;
-(id)sortDigestResponseWithNoNotificationVolume:(id)arg0 ;
-(void)_helperAppsSortedByNotificationsReceivedInPreviousNumDays:(id)arg0 completionHandler:(id)arg1 ;
-(void)appsSortedByNotificationsReceivedInPreviousNumDays:(id)arg0 completionHandler:(id)arg1 ;
-(void)appsSortedByNotificationsReceivedInPreviousNumDaysRaw:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif