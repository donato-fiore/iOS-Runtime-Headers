// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PARREQUEST_H
#define PARREQUEST_H

@class NSString, NSDictionary, SFCommand, NSArray;
@protocol NSSecureCoding, OS_nw_activity;

#import <Foundation/Foundation.h>


@interface PARRequest : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger clientQueryId;
@property (copy, nonatomic) NSString *clientShortName; // ivar: _clientShortName
@property (copy, nonatomic) NSString *experimentId; // ivar: _experimentId
@property (copy, nonatomic) NSString *experimentNamespaceId; // ivar: _experimentNamespaceId
@property (copy, nonatomic) NSDictionary *headerItems; // ivar: _headerItems
@property (nonatomic) BOOL isClientOnlyExperiment; // ivar: _isClientOnlyExperiment
@property (nonatomic) BOOL isInReservedAllocationForExperiment; // ivar: _isInReservedAllocationForExperiment
@property (copy, nonatomic) NSString *keyboardInputMode; // ivar: _keyboardInputMode
@property (retain, nonatomic) NSObject<OS_nw_activity> *nwActivity; // ivar: _nwActivity
@property (readonly, nonatomic) unsigned int nwActivityLabel;
@property (readonly, nonatomic) char * nwActivityToken; // ivar: _nwActivityToken
@property (nonatomic) BOOL pretend; // ivar: _pretend
@property (copy, nonatomic) SFCommand *queryCommand; // ivar: _queryCommand
@property (nonatomic) NSUInteger queryId; // ivar: _queryId
@property (copy, nonatomic) NSArray *queryItems; // ivar: _queryItems
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (copy, nonatomic) NSString *treatmentId; // ivar: _treatmentId
@property (nonatomic) NSUInteger triggerEvent; // ivar: _triggerEvent
@property (nonatomic) BOOL verboseReply; // ivar: _verboseReply


+(BOOL)supportsSecureCoding;
+(id)cardRequestWithURL:(id)arg0 ;
+(id)cardRequestWithURL:(id)arg0 queryId:(NSUInteger)arg1 ;
+(id)flightRequestForQuery:(id)arg0 date:(id)arg1 appBundleId:(id)arg2 ;
+(id)lookupRequestWithString:(id)arg0 queryContext:(id)arg1 domain:(id)arg2 lookupSelectionType:(NSInteger)arg3 appBundleId:(id)arg4 ;
+(id)lookupRequestWithString:(id)arg0 queryContext:(id)arg1 domain:(id)arg2 lookupSelectionType:(NSInteger)arg3 appBundleId:(id)arg4 queryId:(NSUInteger)arg5 ;
+(id)moreResultsRequestWithURL:(id)arg0 ;
+(id)moreResultsRequestWithURL:(id)arg0 queryId:(NSUInteger)arg1 ;
+(id)requestWithTopics:(id)arg0 triggerEvent:(NSUInteger)arg1 ;
+(id)requestWithTopics:(id)arg0 triggerEvent:(NSUInteger)arg1 queryId:(NSUInteger)arg2 ;
+(id)requestWithTopics:(id)arg0 triggerEvent:(NSUInteger)arg1 timeout:(CGFloat)arg2 queryId:(NSUInteger)arg3 ;
+(id)searchReplayRequestWithString:(id)arg0 ;
+(id)searchRequestWithCommand:(id)arg0 triggerEvent:(NSUInteger)arg1 queryId:(NSUInteger)arg2 ;
+(id)searchRequestWithEngagedSuggestion:(id)arg0 triggerEvent:(NSUInteger)arg1 queryId:(NSUInteger)arg2 ;
+(id)searchRequestWithString:(id)arg0 triggerEvent:(NSUInteger)arg1 ;
+(id)searchRequestWithString:(id)arg0 triggerEvent:(NSUInteger)arg1 queryId:(NSUInteger)arg2 ;
+(id)zeroKeywordRequest;
+(id)zeroKeywordRequest:(NSUInteger)arg0 ;
-(Class)responseClass;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif