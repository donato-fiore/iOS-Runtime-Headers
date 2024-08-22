// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASDGATHERLOGSREQUEST_H
#define ASDGATHERLOGSREQUEST_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ASDGatherLogsRequestOptions.h"

@interface ASDGatherLogsRequest : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSXPCConnection *_connection;
    ASDGatherLogsRequestOptions *_options;
}




+(void)clearHARFiles;
-(id)initWithOptions:(id)arg0 ;
-(void)createHARFileArchiveWithCompletionBlock:(id)arg0 ;
-(void)createLogFileArchiveWithCompletionBlock:(id)arg0 ;
-(void)gatherLogsWithCompletionBlock:(id)arg0 ;


@end


#endif