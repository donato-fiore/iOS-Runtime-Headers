// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DRSREQUEST_H
#define DRSREQUEST_H

@class NSString, NSNumber, NSDictionary, NSData, NSArray, PBRequest, NSDate, NSUUID;
@protocol DRSDSRequestObject, DRSDecisionServerBatchRequest;

#import <Foundation/Foundation.h>


@interface DRSRequest : NSObject <DRSDSRequestObject>



@property (readonly, nonatomic) NSString *build; // ivar: _build
@property (retain, nonatomic) NSNumber *cachedLogSize; // ivar: _cachedLogSize
@property (readonly, nonatomic) NSDictionary *contextDictionary; // ivar: _contextDictionary
@property (readonly, nonatomic) NSData *contextDictionaryData; // ivar: _contextDictionaryData
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned char decisionServerDecision; // ivar: _decisionServerDecision
@property (readonly, nonatomic) NSString *decisionServerDecisionString;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *errorDescription; // ivar: _errorDescription
@property (readonly, nonatomic) NSUInteger expectedType;
@property (readonly, nonatomic) NSArray *fileNames;
@property (readonly, nonatomic) NSArray *filePaths;
@property (readonly, nonatomic) NSArray *fileURLs;
@property (readonly, nonatomic) NSString *functionName;
@property (nonatomic) BOOL hasBeenCountedByTelemetry; // ivar: _hasBeenCountedByTelemetry
@property (readonly, nonatomic) BOOL hasUploadableContent;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isExpedited; // ivar: _isExpedited
@property (readonly, nonatomic) NSString *issueCategory; // ivar: _issueCategory
@property (readonly, nonatomic) NSString *issueDescription; // ivar: _issueDescription
@property (retain, nonatomic) NSString *logPath; // ivar: _logPath
@property (readonly, nonatomic) NSNumber *logSize;
@property (readonly, nonatomic) NSUInteger logSizeLimitBytes;
@property (retain, nonatomic) NSString *logType; // ivar: _logType
@property (readonly, nonatomic) NSObject<DRSDecisionServerBatchRequest> *pbBatchInstance;
@property (readonly, nonatomic) Class pbBatchResponseClass;
@property (readonly, nonatomic) PBRequest *pbRequest;
@property (readonly, nonatomic) NSDate *requestDate; // ivar: _requestDate
@property (readonly, nonatomic) NSUUID *requestID; // ivar: _requestID
@property (readonly, nonatomic) NSUInteger requestMCT; // ivar: _requestMCT
@property (readonly, nonatomic) unsigned char requestOutcome;
@property (readonly, nonatomic) NSString *requestOutcomeString;
@property (nonatomic) NSUInteger requestState; // ivar: _requestState
@property (readonly, nonatomic) NSString *requestStateString;
@property (readonly, nonatomic) NSString *requestType;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *teamID; // ivar: _teamID
@property (readonly, nonatomic) NSUUID *uniqueID;
@property (nonatomic) unsigned short uploadAttemptCount; // ivar: _uploadAttemptCount
@property (readonly, nonatomic) NSUInteger uploadID; // ivar: _uploadID


+(BOOL)cleanRequestRecordsFromPersistentContainer:(id)arg0 removeFiles:(BOOL)arg1 removeRecord:(BOOL)arg2 matchingPredicate:(id)arg3 errorOut:(*id)arg4 ;
+(BOOL)isExpeditedTeamID:(id)arg0 issueCategory:(id)arg1 ;
+(Class)_moClass;
+(NSUInteger)requestCountForFilterPredicate:(id)arg0 context:(id)arg1 fetchLimit:(NSUInteger)arg2 errorOut:(*id)arg3 ;
+(id)_requestWithRequestMO_ON_MOC_QUEUE:(id)arg0 ;
+(id)entityName;
+(id)leastRecentDateFirstSortDescriptor;
+(id)mostRecentDateFirstSortDescriptor;
+(id)requestForMessage:(id)arg0 ;
+(id)requestsForFilterPredicate:(id)arg0 context:(id)arg1 sortDescriptors:(id)arg2 fetchLimit:(NSUInteger)arg3 errorOut:(*id)arg4 ;
+(id)requiredSystemResourceName;
+(id)unreportedTerminalRequestsFromContext:(id)arg0 sortDescriptors:(id)arg1 fetchLimit:(NSUInteger)arg2 errorOut:(*id)arg3 ;
+(id)uploadedBytesSinceDate:(id)arg0 context:(id)arg1 errorOut:(*id)arg2 ;
-(BOOL)_deleteLog;
-(BOOL)_markLogsAsPurgeableWithUrgencyWithDeleteFallback:(NSUInteger)arg0 ;
-(BOOL)_updateLogFileStateForTransitionFromPreviousState:(NSUInteger)arg0 ;
-(BOOL)_updateLogStateToExpectedState:(unsigned char)arg0 ;
-(BOOL)isEqualToRequest:(id)arg0 ;
-(BOOL)performOnReceiptWork:(id)arg0 dampeningOutcome:(NSUInteger)arg1 ;
-(BOOL)updateToState:(NSUInteger)arg0 errorDescription:(id)arg1 errorOut:(*id)arg2 ;
-(BOOL)uploadStarted;
-(id)_initWithRequestMO_ON_MOC_QUEUE:(id)arg0 ;
-(id)fileAssets;
-(id)initWithXPCDict:(id)arg0 ;
-(id)jsonCompatibleDictionaryRepresentationVerbose:(BOOL)arg0 ;
-(id)newRequestMOInContext_ON_MOC_QUEUE:(id)arg0 ;
-(id)protoFileDescription;
-(id)protoRequestDescription;
-(id)recordRepresentation;
-(id)replyForMessage:(id)arg0 ;
-(id)targetContainerName;
-(id)uploadRequest;
-(void)_configureRequestMO:(id)arg0 ;
-(void)updateContextWithRequest_ON_MOC_QUEUE:(id)arg0 ;
-(void)uploadAbortedDueToLogSize;
-(void)uploadAbortedDueToMissingLog;
-(void)uploadCompleteWithError:(id)arg0 ;
-(void)uploadDeniedByDecisionServerWithReason:(id)arg0 ;
-(void)uploadFailedDueToReason:(id)arg0 ;


@end


#endif