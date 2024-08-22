// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDARCHIVERECORDSURLREQUEST_H
#define CKDARCHIVERECORDSURLREQUEST_H

@class NSMutableDictionary;


#import "CKDURLRequest.h"

@interface CKDArchiveRecordsURLRequest : CKDURLRequest

@property (copy, nonatomic) id *recordArchivedBlock; // ivar: _recordArchivedBlock
@property (retain, nonatomic) NSMutableDictionary *recordZoneIDByRequestID; // ivar: _recordZoneIDByRequestID
@property (retain, nonatomic) NSMutableDictionary *zoneIDToRecordIDs; // ivar: _zoneIDToRecordIDs


-(id)generateRequestOperations;
-(id)initWithOperation:(id)arg0 recordIDsToArchive:(id)arg1 ;
-(id)requestDidParseProtobufObject:(id)arg0 ;
-(id)requestOperationClasses;
-(id)zoneIDsToLock;
-(void)requestDidParseNodeFailure:(id)arg0 ;


@end


#endif