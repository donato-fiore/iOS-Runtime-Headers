// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDFETCHUSERRECORDOPERATION_H
#define CKDFETCHUSERRECORDOPERATION_H

@class CKRecord;


#import "CKDFetchRecordsOperation.h"

@interface CKDFetchUserRecordOperation : CKDFetchRecordsOperation

@property (retain, nonatomic) CKRecord *userRecord; // ivar: _userRecord


-(id)analyticsPayload;
-(int)operationType;
-(void)fetchRecordsWithIDs:(id)arg0 andFullRecords:(id)arg1 ;
-(void)main;


@end


#endif