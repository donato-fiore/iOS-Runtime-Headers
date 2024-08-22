// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AWDSYMPTOMSDIAGNOSTICREMOTEUPLOAD_H
#define AWDSYMPTOMSDIAGNOSTICREMOTEUPLOAD_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface AWDSymptomsDiagnosticRemoteUpload : PBCodable <NSCopying>

 {
    ? _primaryNetworkObservedOnCompletions;
    ? _taskErrorCodes;
    ? _taskFileSizes;
    ? _taskHttpStatusCodes;
    ? _taskRetryCounts;
    ? _taskStatus;
    ? _has;
}


@property (nonatomic) NSUInteger apnsMsgIdentifier; // ivar: _apnsMsgIdentifier
@property (retain, nonatomic) NSString *caseIdentifier; // ivar: _caseIdentifier
@property (nonatomic) int consentStatus; // ivar: _consentStatus
@property (nonatomic) int expectedFileCount; // ivar: _expectedFileCount
@property (nonatomic) BOOL hasApnsMsgIdentifier;
@property (readonly, nonatomic) BOOL hasCaseIdentifier;
@property (nonatomic) BOOL hasConsentStatus;
@property (nonatomic) BOOL hasExpectedFileCount;
@property (nonatomic) BOOL hasPreflightStatus;
@property (nonatomic) BOOL hasRadarIdentifier;
@property (nonatomic) BOOL hasRequestStatus;
@property (nonatomic) BOOL hasRequestedTimestamp;
@property (nonatomic) BOOL hasScheduledTimestamp;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasUrgency;
@property (nonatomic) int preflightStatus; // ivar: _preflightStatus
@property (readonly, nonatomic) *int primaryNetworkObservedOnCompletions;
@property (readonly, nonatomic) NSUInteger primaryNetworkObservedOnCompletionsCount;
@property (nonatomic) unsigned int radarIdentifier; // ivar: _radarIdentifier
@property (nonatomic) int requestStatus; // ivar: _requestStatus
@property (nonatomic) NSUInteger requestedTimestamp; // ivar: _requestedTimestamp
@property (nonatomic) NSUInteger scheduledTimestamp; // ivar: _scheduledTimestamp
@property (readonly, nonatomic) *NSInteger taskErrorCodes;
@property (readonly, nonatomic) NSUInteger taskErrorCodesCount;
@property (retain, nonatomic) NSMutableArray *taskErrorDomains; // ivar: _taskErrorDomains
@property (readonly, nonatomic) *NSInteger taskFileSizes;
@property (readonly, nonatomic) NSUInteger taskFileSizesCount;
@property (readonly, nonatomic) *int taskHttpStatusCodes;
@property (readonly, nonatomic) NSUInteger taskHttpStatusCodesCount;
@property (readonly, nonatomic) *int taskRetryCounts;
@property (readonly, nonatomic) NSUInteger taskRetryCountsCount;
@property (readonly, nonatomic) *int taskStatus;
@property (readonly, nonatomic) NSUInteger taskStatusCount;
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) unsigned int urgency; // ivar: _urgency


+(Class)taskErrorDomainType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSInteger)taskErrorCodeAtIndex:(NSUInteger)arg0 ;
-(NSInteger)taskFileSizeAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(id)consentStatusAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)preflightStatusAsString:(int)arg0 ;
-(id)primaryNetworkObservedOnCompletionsAsString:(int)arg0 ;
-(id)requestStatusAsString:(int)arg0 ;
-(id)taskErrorDomainAtIndex:(NSUInteger)arg0 ;
-(id)taskStatusAsString:(int)arg0 ;
-(int)StringAsConsentStatus:(id)arg0 ;
-(int)StringAsPreflightStatus:(id)arg0 ;
-(int)StringAsPrimaryNetworkObservedOnCompletions:(id)arg0 ;
-(int)StringAsRequestStatus:(id)arg0 ;
-(int)StringAsTaskStatus:(id)arg0 ;
-(int)primaryNetworkObservedOnCompletionAtIndex:(NSUInteger)arg0 ;
-(int)taskHttpStatusCodeAtIndex:(NSUInteger)arg0 ;
-(int)taskRetryCountAtIndex:(NSUInteger)arg0 ;
-(int)taskStatusAtIndex:(NSUInteger)arg0 ;
-(void)addPrimaryNetworkObservedOnCompletion:(int)arg0 ;
-(void)addTaskErrorCode:(NSInteger)arg0 ;
-(void)addTaskErrorDomain:(id)arg0 ;
-(void)addTaskFileSize:(NSInteger)arg0 ;
-(void)addTaskHttpStatusCode:(int)arg0 ;
-(void)addTaskRetryCount:(int)arg0 ;
-(void)addTaskStatus:(int)arg0 ;
-(void)clearPrimaryNetworkObservedOnCompletions;
-(void)clearTaskErrorCodes;
-(void)clearTaskErrorDomains;
-(void)clearTaskFileSizes;
-(void)clearTaskHttpStatusCodes;
-(void)clearTaskRetryCounts;
-(void)clearTaskStatus;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif