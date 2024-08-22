// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GTBULKDATASERVICEXPCDISPATCHER_H
#define GTBULKDATASERVICEXPCDISPATCHER_H

@protocol GTBulkDataServiceXPCDispatcher, GTBulkDataService;


#import "GTXPCDispatcher.h"

@interface GTBulkDataServiceXPCDispatcher : GTXPCDispatcher <GTBulkDataServiceXPCDispatcher>

 {
    id<GTBulkDataService> *_service;
}




-(id)initWithService:(id)arg0 properties:(id)arg1 ;
-(void)downloadData_chunkSize_chunkHandler_:(id)arg0 replyConnection:(id)arg1 ;
-(void)newUploadOfSize_:(id)arg0 replyConnection:(id)arg1 ;
-(void)uploadChunk_forHandle_:(id)arg0 replyConnection:(id)arg1 ;


@end


#endif