// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDPENDINGRESPONSE_H
#define HMDPENDINGRESPONSE_H

@class HMFObject, NSMutableArray, NSString, HMFMessage;



@interface HMDPendingResponse : HMFObject

@property (retain, nonatomic) NSMutableArray *allResponses; // ivar: _allResponses
@property (nonatomic) CGFloat creationTime; // ivar: _creationTime
@property (retain, nonatomic) NSMutableArray *latestResponses; // ivar: _latestResponses
@property (retain, nonatomic) NSString *originalRequestIdentifier; // ivar: _originalRequestIdentifier
@property (nonatomic) NSUInteger pendingResponseCount; // ivar: _pendingResponseCount
@property (retain, nonatomic) HMFMessage *requestMessage; // ivar: _requestMessage
@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler
@property (nonatomic) NSUInteger totalRequestsCount; // ivar: _totalRequestsCount


+(id)tupleForMessage:(id)arg0 originalRequestIdentifier:(id)arg1 requestCount:(NSUInteger)arg2 withCompletionHandler:(id)arg3 ;
-(id)description;
-(id)retrieveAndClearAllResponses;
-(id)retrieveAndClearLatestResponses;
-(void)addResponsesToPendingResponse:(id)arg0 ;
-(void)addToPendingResponses:(id)arg0 ;


@end


#endif