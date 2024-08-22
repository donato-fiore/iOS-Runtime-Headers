// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCTODAYFEEDCONFIGOPERATION_H
#define FCTODAYFEEDCONFIGOPERATION_H

@class NSError, NFUnfairLock, NSData, NSDictionary;
@protocol FCNewsAppConfiguration, FCContentContext;


#import "FCOperation.h"
#import "FCCachePolicy.h"
#import "FCTodayFeedConfigResponse.h"
#import "FCTodayFeedConfigRequest.h"

@interface FCTodayFeedConfigOperation : FCOperation

@property (readonly, nonatomic) NSObject<FCNewsAppConfiguration> *appConfig; // ivar: _appConfig
@property (copy, nonatomic) FCCachePolicy *cachePolicy; // ivar: _cachePolicy
@property (retain, nonatomic) NSError *completedError; // ivar: _completedError
@property (retain, nonatomic) FCTodayFeedConfigResponse *completedResponse; // ivar: _completedResponse
@property (readonly, nonatomic) NFUnfairLock *completionLock; // ivar: _completionLock
@property (readonly, nonatomic) NSObject<FCContentContext> *context; // ivar: _context
@property (copy) id *fetchCompletionHandler; // ivar: _fetchCompletionHandler
@property (readonly, copy, nonatomic) FCTodayFeedConfigRequest *request; // ivar: _request
@property (retain, nonatomic) NSData *resultCKConfigData; // ivar: _resultCKConfigData
@property (retain, nonatomic) NSError *resultCKError; // ivar: _resultCKError
@property (retain, nonatomic) NSDictionary *resultCKRecordsByType; // ivar: _resultCKRecordsByType
@property (retain, nonatomic) NSData *resultNewsEdgeConfigData; // ivar: _resultNewsEdgeConfigData
@property (retain, nonatomic) NSError *resultNewsEdgeError; // ivar: _resultNewsEdgeError


-(BOOL)validateOperation;
-(id)initWithContext:(id)arg0 appConfig:(id)arg1 request:(id)arg2 ;
-(void)_fetchFromCKWithCompletion:(id)arg0 ;
-(void)_fetchFromNewsEdgeWithCompletion:(id)arg0 ;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif