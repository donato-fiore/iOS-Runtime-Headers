// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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




+(NSInteger)requestType;
+(id)_harLogsDirectory;
+(void)_clearHARFiles;
+(void)clearHARFiles;
-(id)_appstoredContainerPath;
-(id)_combineAllLogs;
-(id)_createCombinedHarFile;
-(id)_zippedDataForURL:(id)arg0 ;
-(id)initWithOptions:(id)arg0 ;
-(void)_combineLogs:(id)arg0 toDir:(id)arg1 ;
-(void)_copyDB:(id)arg0 fullSourcePath:(id)arg1 toDir:(id)arg2 datbaseBase:(id)arg3 ;
-(void)_sendGatherRequestWithOptions:(id)arg0 completionBlock:(id)arg1 ;
-(void)_sendHarFileRequestWithOptions:(id)arg0 completionBlock:(id)arg1 ;
-(void)_sendRequestWithOptions:(id)arg0 completionBlock:(id)arg1 ;
-(void)createHARFileArchiveWithCompletionBlock:(id)arg0 ;
-(void)createLogFileArchiveWithCompletionBlock:(id)arg0 ;
-(void)gatherLogsWithCompletionBlock:(id)arg0 ;


@end


#endif