// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HLPURLSESSIONTASK_H
#define HLPURLSESSIONTASK_H

@class NSURL, NSError, NSMutableData, NSString, NSHTTPURLResponse, NSHashTable, NSURLSessionTask;
@protocol OS_dispatch_queue, HLPURLSessionDelegate;

#import <Foundation/Foundation.h>


@interface HLPURLSessionTask : NSObject {
    NSObject<OS_dispatch_queue> *_sessionTaskDelegateQueue;
}


@property (readonly, nonatomic) NSURL *URL;
@property (nonatomic, getter=isCancelled) BOOL cancelled; // ivar: _cancelled
@property (retain, nonatomic) NSError *dataError; // ivar: _dataError
@property (retain, nonatomic) NSMutableData *dataTaskData; // ivar: _dataTaskData
@property (nonatomic) NSInteger dataType; // ivar: _dataType
@property (nonatomic) HLPURLSessionDelegateResponds delegateResponds; // ivar: _delegateResponds
@property (nonatomic) NSUInteger downloadTaskTotalBytes; // ivar: _downloadTaskTotalBytes
@property (retain, nonatomic) id *formattedData; // ivar: _formattedData
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL isCacheData; // ivar: _isCacheData
@property (retain, nonatomic) NSString *lastModified; // ivar: _lastModified
@property (weak, nonatomic) NSObject<HLPURLSessionDelegate> *networkDelegate; // ivar: _networkDelegate
@property (nonatomic) float priority;
@property (retain, nonatomic) NSHTTPURLResponse *response; // ivar: _response
@property (nonatomic) NSUInteger retryCount; // ivar: _retryCount
@property (retain, nonatomic) NSHashTable *sessionTaskDelegates; // ivar: _sessionTaskDelegates
@property (retain, nonatomic) NSURLSessionTask *task; // ivar: _task


+(struct HLPURLSessionDelegateResponds )delegateRespondsWithDelegate:(id)arg0 ;
-(id)initWithSessionTask:(id)arg0 identifier:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)didCompleteWithError:(id)arg0 ;
-(void)registerDelegate:(id)arg0 ;
-(void)resume;
-(void)unregisterDelegate:(id)arg0 ;


@end


#endif