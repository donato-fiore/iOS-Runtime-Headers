// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDQUERYURLREQUEST_H
#define CKDQUERYURLREQUEST_H

@class NSData, NSString, NSSet, CKQuery, NSMutableArray, NSArray, CKRecordZoneID;
@protocol CKDURLRequestPipelining;


#import "CKDURLRequest.h"

@interface CKDQueryURLRequest : CKDURLRequest <CKDURLRequestPipelining>



@property (retain, nonatomic) NSData *cursor; // ivar: _cursor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSSet *desiredAssetKeys; // ivar: _desiredAssetKeys
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger limit; // ivar: _limit
@property (retain, nonatomic) CKQuery *query; // ivar: _query
@property (retain, nonatomic) NSMutableArray *queryResponses; // ivar: _queryResponses
@property (retain, nonatomic) NSMutableArray *recordResponses; // ivar: _recordResponses
@property (copy, nonatomic) id *recordsParsedBlock; // ivar: _recordsParsedBlock
@property (retain, nonatomic) NSArray *requestedFields; // ivar: _requestedFields
@property (retain, nonatomic) NSData *resultsCursor; // ivar: _resultsCursor
@property (nonatomic) BOOL shouldFetchAssetContent; // ivar: _shouldFetchAssetContent
@property (readonly) Class superclass;
@property (retain, nonatomic) CKRecordZoneID *zoneID; // ivar: _zoneID


-(BOOL)allowsAnonymousAccount;
-(BOOL)handlesAnonymousCKUserIDPropagation;
-(BOOL)requestGETPreAuth;
-(BOOL)requiresCKAnonymousUserIDs;
-(id)generateRequestOperations;
-(id)initWithOperation:(id)arg0 query:(id)arg1 cursor:(id)arg2 limit:(NSUInteger)arg3 requestedFields:(id)arg4 zoneID:(id)arg5 ;
-(id)requestDidParseProtobufObject:(id)arg0 ;
-(id)requestOperationClasses;
-(void)requestDidComplete;
-(void)requestDidParseNodeFailure:(id)arg0 ;


@end


#endif