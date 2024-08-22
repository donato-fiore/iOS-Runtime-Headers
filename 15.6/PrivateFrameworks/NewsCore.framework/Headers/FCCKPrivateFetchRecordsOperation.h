// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCCKPRIVATEFETCHRECORDSOPERATION_H
#define FCCKPRIVATEFETCHRECORDSOPERATION_H

@class NSArray, NSDictionary;


#import "FCCKPrivateDatabaseOperation.h"

@interface FCCKPrivateFetchRecordsOperation : FCCKPrivateDatabaseOperation

@property (copy, nonatomic) NSArray *desiredKeys; // ivar: _desiredKeys
@property (copy, nonatomic) id *fetchRecordsCompletionBlock; // ivar: _fetchRecordsCompletionBlock
@property (copy, nonatomic) NSArray *recordIDs; // ivar: _recordIDs
@property (retain, nonatomic) NSDictionary *resultRecordsByRecordID; // ivar: _resultRecordsByRecordID


-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif