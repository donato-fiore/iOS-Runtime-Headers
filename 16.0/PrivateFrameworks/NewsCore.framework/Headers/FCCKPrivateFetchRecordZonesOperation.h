// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCCKPRIVATEFETCHRECORDZONESOPERATION_H
#define FCCKPRIVATEFETCHRECORDZONESOPERATION_H

@class NSArray, NSDictionary;


#import "FCCKPrivateDatabaseOperation.h"

@interface FCCKPrivateFetchRecordZonesOperation : FCCKPrivateDatabaseOperation

@property (copy, nonatomic) id *fetchRecordZonesCompletionBlock; // ivar: _fetchRecordZonesCompletionBlock
@property (copy, nonatomic) NSArray *recordZoneIDs; // ivar: _recordZoneIDs
@property (retain, nonatomic) NSDictionary *resultRecordZonesByZoneID; // ivar: _resultRecordZonesByZoneID


-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif