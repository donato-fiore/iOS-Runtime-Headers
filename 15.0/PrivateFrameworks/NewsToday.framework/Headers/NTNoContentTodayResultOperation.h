// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTNOCONTENTTODAYRESULTOPERATION_H
#define NTNOCONTENTTODAYRESULTOPERATION_H

@class NSDictionary, NTPBTodayResultOperationFetchInfo;


#import "NTTodayResultOperation.h"
#import "NTTodayResults.h"

@interface NTNoContentTodayResultOperation : NTTodayResultOperation

@property (copy, nonatomic) NSDictionary *resultAssetHandlesByAssetID; // ivar: _resultAssetHandlesByAssetID
@property (copy, nonatomic) NTPBTodayResultOperationFetchInfo *resultFetchInfo; // ivar: _resultFetchInfo
@property (copy, nonatomic) NTTodayResults *resultTodayResults; // ivar: _resultTodayResults


-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif