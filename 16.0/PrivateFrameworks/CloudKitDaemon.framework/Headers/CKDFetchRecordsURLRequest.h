// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDFETCHRECORDSURLREQUEST_H
#define CKDFETCHRECORDSURLREQUEST_H

@class NSSet, NSArray, NSMutableDictionary, NSDictionary;


#import "CKDURLRequest.h"

@interface CKDFetchRecordsURLRequest : CKDURLRequest

@property (nonatomic) NSUInteger URLOptions; // ivar: _URLOptions
@property (retain, nonatomic) NSSet *assetFieldNamesToPublishURLs; // ivar: _assetFieldNamesToPublishURLs
@property (retain, nonatomic) NSSet *desiredAssetKeys; // ivar: _desiredAssetKeys
@property (retain, nonatomic) NSArray *desiredIndexedListKeys; // ivar: _desiredIndexedListKeys
@property (retain, nonatomic) NSSet *desiredKeys; // ivar: _desiredKeys
@property (nonatomic) NSUInteger recordCount; // ivar: _recordCount
@property (copy, nonatomic) id *recordFetchedBlock; // ivar: _recordFetchedBlock
@property (retain, nonatomic) NSMutableDictionary *recordIDByRequestID; // ivar: _recordIDByRequestID
@property (retain, nonatomic) NSArray *recordIDs; // ivar: _recordIDs
@property (retain, nonatomic) NSDictionary *recordIDsToETags; // ivar: _recordIDsToETags
@property (retain, nonatomic) NSDictionary *recordIDsToVersionETags; // ivar: _recordIDsToVersionETags
@property (nonatomic) NSUInteger requestedTTL; // ivar: _requestedTTL
@property (nonatomic) BOOL shouldFetchAssetContent; // ivar: _shouldFetchAssetContent


-(BOOL)allowsAnonymousAccount;
-(BOOL)handlesAnonymousCKUserIDPropagation;
-(BOOL)requestGETPreAuth;
-(id)generateRequestOperations;
-(id)initWithOperation:(id)arg0 recordIDs:(id)arg1 recordIDsToEtags:(id)arg2 recordIDsToVersionETags:(id)arg3 desiredKeys:(id)arg4 ;
-(id)requestDidParseProtobufObject:(id)arg0 ;
-(id)requestOperationClasses;
-(id)requestedListFieldsForDesiredIndexedListKeys;
-(id)zoneIDsToLock;
-(void)requestDidParseNodeFailure:(id)arg0 ;


@end


#endif