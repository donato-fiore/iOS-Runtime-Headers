// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNTRANSCRIPTPROVIDER_H
#define LNTRANSCRIPTPROVIDER_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface LNTranscriptProvider : NSObject

@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)createStreamsWithStreamURL:(id)arg0 ;
+(id)publisherForStream:(id)arg0 fromDate:(id)arg1 toDate:(id)arg2 maxEvents:(id)arg3 reversed:(BOOL)arg4 ;
+(id)xpcInterface;
-(id)init;
-(id)transcriptPublisherFromDate:(id)arg0 error:(*id)arg1 ;
-(id)transcriptPublisherFromDate:(id)arg0 toDate:(id)arg1 maxEvents:(id)arg2 reversed:(BOOL)arg3 error:(*id)arg4 ;
-(void)dealloc;
-(void)deleteAllRecordsWithReply:(id)arg0 ;
-(void)deleteRecordsWithMatchingPredicate:(id)arg0 reply:(id)arg1 ;
-(void)donateActionRecordData:(id)arg0 writeImmediately:(BOOL)arg1 reply:(id)arg2 ;
-(void)donateWithActionRecord:(id)arg0 reply:(id)arg1 ;


@end


#endif