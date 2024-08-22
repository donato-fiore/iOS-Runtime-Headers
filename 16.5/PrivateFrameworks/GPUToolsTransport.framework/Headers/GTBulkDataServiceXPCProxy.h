// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GTBULKDATASERVICEXPCPROXY_H
#define GTBULKDATASERVICEXPCPROXY_H

@protocol GTBulkDataService, OS_os_log, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "GTServiceConnection.h"

@interface GTBulkDataServiceXPCProxy : NSObject <GTBulkDataService>

 {
    NSObject<OS_os_log> *_log;
    GTServiceConnection *_connection;
    NSUInteger _chunkSize;
    NSObject<OS_dispatch_queue> *_serialQueue;
}




-(BOOL)uploadChunk:(id)arg0 forHandle:(NSUInteger)arg1 ;
-(NSUInteger)newUploadOfSize:(NSUInteger)arg0 ;
-(NSUInteger)uploadData:(id)arg0 ;
-(NSUInteger)uploadData:(id)arg0 usingChunkSize:(NSUInteger)arg1 ;
-(id)downloadData:(NSUInteger)arg0 ;
-(id)downloadData:(NSUInteger)arg0 usingChunkSize:(NSUInteger)arg1 ;
-(id)initWithConnection:(id)arg0 remoteProperties:(id)arg1 ;
-(void)downloadData:(NSUInteger)arg0 chunkSize:(NSUInteger)arg1 chunkHandler:(id)arg2 ;
-(void)downloadData:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)downloadData:(NSUInteger)arg0 usingChunkSize:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)uploadData:(id)arg0 completionHandler:(id)arg1 ;
-(void)uploadData:(id)arg0 usingChunkSize:(NSUInteger)arg1 completionHandler:(id)arg2 ;


@end


#endif