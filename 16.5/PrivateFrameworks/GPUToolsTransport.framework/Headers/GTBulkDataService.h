// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GTBULKDATASERVICE_H
#define GTBULKDATASERVICE_H

@class NSMutableDictionary;
@protocol GTBulkDataService, OS_os_log, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface GTBulkDataService : NSObject <GTBulkDataService>

 {
    NSObject<OS_os_log> *_log;
    NSUInteger _nextDownloadHandle;
    NSMutableDictionary *_dataDownloadStore;
    NSUInteger _nextUploadHandle;
    NSMutableDictionary *_dataUploadStore;
    NSObject<OS_dispatch_queue> *_dataAccessQueue;
    NSObject<OS_dispatch_queue> *_dataTransferQueue;
}




-(BOOL)uploadChunk:(id)arg0 forHandle:(NSUInteger)arg1 ;
-(NSUInteger)handoverDataForDownload:(id)arg0 ;
-(NSUInteger)newUploadOfSize:(NSUInteger)arg0 ;
-(id)init;
-(id)takeUploadedDataForHandle:(NSUInteger)arg0 ;
-(void)downloadData:(NSUInteger)arg0 chunkSize:(NSUInteger)arg1 chunkHandler:(id)arg2 ;


@end


#endif