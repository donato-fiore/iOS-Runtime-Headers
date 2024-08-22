// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDFETCHUSERRECORDURLREQUEST_H
#define CKDFETCHUSERRECORDURLREQUEST_H

@class CKRecord;


#import "CKDURLRequest.h"

@interface CKDFetchUserRecordURLRequest : CKDURLRequest

@property (copy, nonatomic) id *recordFetchedBlock; // ivar: _recordFetchedBlock
@property (retain, nonatomic) CKRecord *userRecord; // ivar: _userRecord


-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg0 ;
-(id)requestOperationClasses;


@end


#endif