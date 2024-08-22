// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DRSENABLEDATAGATHERINGQUERY_H
#define DRSENABLEDATAGATHERINGQUERY_H

@class NSString, NSDictionary, NSData, PBRequest, NSDate, NSUUID;
@protocol DRSDSRequestObject, DRSDecisionServerBatchRequest;

#import <Foundation/Foundation.h>


@interface DRSEnableDataGatheringQuery : NSObject <DRSDSRequestObject>



@property (readonly, nonatomic) unsigned short attemptCount; // ivar: _attemptCount
@property (readonly, nonatomic) NSString *build; // ivar: _build
@property (readonly, nonatomic) NSDictionary *contextDictionary; // ivar: _contextDictionary
@property (readonly, nonatomic) NSData *contextDictionaryData; // ivar: _contextDictionaryData
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *functionName;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isContinue; // ivar: _isContinue
@property (readonly, nonatomic) NSString *issueCategory; // ivar: _issueCategory
@property (readonly, nonatomic) NSString *logType; // ivar: _logType
@property (readonly, nonatomic) NSObject<DRSDecisionServerBatchRequest> *pbBatchInstance;
@property (readonly, nonatomic) Class pbBatchResponseClass;
@property (readonly, nonatomic) PBRequest *pbRequest;
@property (readonly, nonatomic) NSDate *queryDate; // ivar: _queryDate
@property (readonly, nonatomic) NSUUID *queryID; // ivar: _queryID
@property (retain, nonatomic) NSString *rejectionReason; // ivar: _rejectionReason
@property (nonatomic) unsigned char response; // ivar: _response
@property (readonly, nonatomic) NSString *responseString;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *teamID; // ivar: _teamID
@property (readonly, nonatomic) NSUUID *uniqueID;


+(id)_ON_MOC_QUEUE_enableDataGatheringQueriesForFilterPredicate:(id)arg0 context:(id)arg1 sortDescriptors:(id)arg2 fetchLimit:(NSUInteger)arg3 errorOut:(*id)arg4 ;
+(id)_ON_MOC_QUEUE_enableDataGatheringQueryForID:(id)arg0 context:(id)arg1 ;
+(id)cachedQueryResponseForQuery:(id)arg0 inContext:(id)arg1 errorOut:(*id)arg2 ;
+(id)enableDataGatheringQueriesForFilterPredicate:(id)arg0 context:(id)arg1 sortDescriptors:(id)arg2 fetchLimit:(NSUInteger)arg3 errorOut:(*id)arg4 ;
+(id)enableDataGatheringQueryForID:(id)arg0 context:(id)arg1 ;
+(id)entityName;
+(id)leastRecentDateFirstSortDescriptor;
+(id)mostRecentDateFirstSortDescriptor;
-(BOOL)doesMatchCachedQuery:(id)arg0 ;
-(BOOL)isEqualToDataGatheringQuery:(id)arg0 ;
-(BOOL)submitQuery;
-(id)_initWithMO_ON_MOC_QUEUE:(id)arg0 ;
-(id)initWithXPCDict:(id)arg0 ;
-(id)jsonCompatibleDictionaryRepresentation;
-(id)protobufRepresentation;
-(void)queryFinishedWithDecision:(id)arg0 error:(id)arg1 ;
-(void)updateContextWithDataGatheringQuery_ON_MOC_QUEUE:(id)arg0 ;


@end


#endif