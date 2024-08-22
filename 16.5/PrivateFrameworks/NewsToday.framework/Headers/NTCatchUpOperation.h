// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTCATCHUPOPERATION_H
#define NTCATCHUPOPERATION_H

@class FCOperation, NSMutableArray, NSDate, NSDictionary;
@protocol FCNewsAppConfiguration, FCContentContext, FCFeedPersonalizing;


#import "NTCatchUpOperationForYouFetchInfo.h"
#import "NTCatchUpOperationForYouRequest.h"
#import "NTCatchUpOperationResults.h"

@interface NTCatchUpOperation : FCOperation

@property (copy, nonatomic) NSObject<FCNewsAppConfiguration> *appConfiguration; // ivar: _appConfiguration
@property (retain, nonatomic) NSMutableArray *articleIDsRequests; // ivar: _articleIDsRequests
@property (retain, nonatomic) NSMutableArray *articleListRequests; // ivar: _articleListRequests
@property (copy, nonatomic) id *catchUpCompletionHandler; // ivar: _catchUpCompletionHandler
@property (retain, nonatomic) NSObject<FCContentContext> *contentContext; // ivar: _contentContext
@property (retain, nonatomic) NSObject<FCFeedPersonalizing> *feedPersonalizer; // ivar: _feedPersonalizer
@property (copy, nonatomic) NSDate *fetchDate; // ivar: _fetchDate
@property (nonatomic, getter=isForYouEnabled) BOOL forYouEnabled; // ivar: _forYouEnabled
@property (copy, nonatomic) NTCatchUpOperationForYouFetchInfo *forYouFetchInfo; // ivar: _forYouFetchInfo
@property (copy, nonatomic) NTCatchUpOperationForYouRequest *forYouRequest; // ivar: _forYouRequest
@property (copy, nonatomic) NTCatchUpOperationResults *forYouResults; // ivar: _forYouResults
@property (copy, nonatomic) NSDictionary *resultsByArticleIDsRequestID; // ivar: _resultsByArticleIDsRequestID
@property (copy, nonatomic) NSDictionary *resultsByArticleListID; // ivar: _resultsByArticleListID
@property (retain, nonatomic) NSDictionary *todayConfigOperationHeldRecordsByType; // ivar: _todayConfigOperationHeldRecordsByType


-(BOOL)validateOperation;
-(id)init;
-(void)_fetchArticleListAndArticleIDsResultsIfNeededWithCompletion:(id)arg0 ;
-(void)_fetchForYouResultsIfNeededWithCompletion:(id)arg0 ;
-(void)addArticleIDsRequest:(id)arg0 ;
-(void)addArticleListRequest:(id)arg0 ;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;
-(void)prepareOperation;


@end


#endif