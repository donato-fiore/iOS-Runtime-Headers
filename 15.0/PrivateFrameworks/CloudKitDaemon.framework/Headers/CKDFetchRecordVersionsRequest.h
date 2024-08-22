// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDFETCHRECORDVERSIONSREQUEST_H
#define CKDFETCHRECORDVERSIONSREQUEST_H

@class NSArray, NSString, NSMutableDictionary;


#import "CKDURLRequest.h"

@interface CKDFetchRecordVersionsRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *desiredKeys; // ivar: _desiredKeys
@property (nonatomic) BOOL isDeleted; // ivar: _isDeleted
@property (retain, nonatomic) NSString *minimumVersionETag; // ivar: _minimumVersionETag
@property (retain, nonatomic) NSMutableDictionary *recordIDByRequestID; // ivar: _recordIDByRequestID
@property (retain, nonatomic) NSArray *recordIDs; // ivar: _recordIDs
@property (copy, nonatomic) id *recordVersionsFetchedBlock; // ivar: _recordVersionsFetchedBlock
@property (nonatomic) BOOL shouldFetchAssetContent; // ivar: _shouldFetchAssetContent


-(id)generateRequestOperations;
-(id)initWithOperation:(id)arg0 recordIDs:(id)arg1 desiredKeys:(id)arg2 minimumVersionETag:(id)arg3 ;
-(id)requestDidParseProtobufObject:(id)arg0 ;
-(id)requestOperationClasses;
-(id)zoneIDsToLock;
-(void)requestDidParseNodeFailure:(id)arg0 ;


@end


#endif