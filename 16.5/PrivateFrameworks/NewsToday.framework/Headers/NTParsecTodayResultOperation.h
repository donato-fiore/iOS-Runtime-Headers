// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPARSECTODAYRESULTOPERATION_H
#define NTPARSECTODAYRESULTOPERATION_H

@class NSDictionary, NTPBTodayResultOperationFetchInfo;


#import "NTTodayResultOperation.h"
#import "NTTodayResults.h"

@interface NTParsecTodayResultOperation : NTTodayResultOperation

@property (copy, nonatomic) NSDictionary *resultAssetHandlesByAssetID; // ivar: _resultAssetHandlesByAssetID
@property (copy, nonatomic) NTPBTodayResultOperationFetchInfo *resultFetchInfo; // ivar: _resultFetchInfo
@property (copy, nonatomic) NTTodayResults *resultTodayResults; // ivar: _resultTodayResults


-(BOOL)validateOperation;
-(id)_aggregateSectionsWithSectionDescriptor:(id)arg0 headlines:(id)arg1 ;
-(id)_todayResultsWithSectionDescriptor:(id)arg0 aggregationResult:(id)arg1 searchResultsByHeadline:(id)arg2 ZKWNewsOperation:(id)arg3 ;
-(void)_fetchThumbnailsForTodayResults:(id)arg0 withSearchResultsByHeadline:(id)arg1 completionHandler:(id)arg2 ;
-(void)_fetchTodayResultsWithCompletionHandler:(id)arg0 ;
-(void)_updateUseParsecEnabledWithCompletionHandler:(id)arg0 ;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif