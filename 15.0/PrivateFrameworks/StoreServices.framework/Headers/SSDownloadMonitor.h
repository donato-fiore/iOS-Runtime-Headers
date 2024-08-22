// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSDOWNLOADMONITOR_H
#define SSDOWNLOADMONITOR_H

@protocol SSDownloadMonitorDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SSXPCConnection.h"

@interface SSDownloadMonitor : NSObject {
    SSXPCConnection *_connection;
    id<SSDownloadMonitorDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}


@property NSObject<SSDownloadMonitorDelegate> *delegate;


-(id)_connection;
-(id)_copyItemsWithReply:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(void)_reloadForChangeNotification;
-(void)dealloc;
-(void)getMonitorItemsWithCompletionBlock:(id)arg0 ;
-(void)pauseMonitorItem:(id)arg0 completionBlock:(id)arg1 ;
-(void)prioritizeMonitorItem:(id)arg0 completionBlock:(id)arg1 ;
-(void)resumeMonitorItem:(id)arg0 completionBlock:(id)arg1 ;


@end


#endif