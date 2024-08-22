// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDFETCHRECORDZONESURLREQUEST_H
#define CKDFETCHRECORDZONESURLREQUEST_H

@class NSArray, NSMutableDictionary;


#import "CKDURLRequest.h"

@interface CKDFetchRecordZonesURLRequest : CKDURLRequest

@property (copy, nonatomic) id *anonymousRecordZoneTuplesFetchedBlock; // ivar: _anonymousRecordZoneTuplesFetchedBlock
@property (copy, nonatomic) id *errorFetchingAllRecordZonesBlock; // ivar: _errorFetchingAllRecordZonesBlock
@property (nonatomic) BOOL onlyFetchPCSInfo; // ivar: _onlyFetchPCSInfo
@property (copy, nonatomic) id *recordZoneFetchedBlock; // ivar: _recordZoneFetchedBlock
@property (readonly, nonatomic) NSArray *recordZones; // ivar: _recordZones
@property (retain, nonatomic) NSMutableDictionary *zoneIDByRequestID; // ivar: _zoneIDByRequestID
@property (retain, nonatomic) NSArray *zoneIDs; // ivar: _zoneIDs


-(BOOL)allowsAnonymousAccount;
-(BOOL)handlesAnonymousCKUserIDPropagation;
-(BOOL)requiresCKAnonymousUserIDs;
-(id)generateRequestOperations;
-(id)initWithOperation:(id)arg0 recordZoneIDs:(id)arg1 ;
-(id)requestDidParseProtobufObject:(id)arg0 ;
-(id)requestOperationClasses;
-(void)requestDidParseNodeFailure:(id)arg0 ;


@end


#endif