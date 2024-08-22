// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTTODAYITEMOPERATION_H
#define NTTODAYITEMOPERATION_H

@class FCOperation, NSDictionary, NSArray;
@protocol FCNewsAppConfiguration, FCContentContext, FCFeedPersonalizing, NTTodayResultOperationInfoProviding, FCTodayPrivateData;

#import <Foundation/Foundation.h>

#import "NTCatchUpOperationForYouFetchInfo.h"

@interface NTTodayItemOperation : FCOperation

@property (copy, nonatomic) NSObject<FCNewsAppConfiguration> *appConfiguration; // ivar: _appConfiguration
@property (copy, nonatomic) NSDictionary *catchUpOperationResultsBySectionDescriptor; // ivar: _catchUpOperationResultsBySectionDescriptor
@property (retain, nonatomic) NSObject<FCContentContext> *contentContext; // ivar: _contentContext
@property (copy, nonatomic) NSArray *feedItems; // ivar: _feedItems
@property (retain, nonatomic) NSObject<FCFeedPersonalizing> *feedPersonalizer; // ivar: _feedPersonalizer
@property (copy, nonatomic) NTCatchUpOperationForYouFetchInfo *forYouFetchInfo; // ivar: _forYouFetchInfo
@property (copy, nonatomic) NSObject<NTTodayResultOperationInfoProviding> *operationInfo; // ivar: _operationInfo
@property (retain, nonatomic) NSDictionary *resultAssetFileURLsByRemoteURL; // ivar: _resultAssetFileURLsByRemoteURL
@property (retain, nonatomic) NSObject *resultAssetsHoldToken; // ivar: _resultAssetsHoldToken
@property (retain, nonatomic) NSObject *resultRecordsHoldToken; // ivar: _resultRecordsHoldToken
@property (retain, nonatomic) NSDictionary *resultTodayItemsBySectionDescriptor; // ivar: _resultTodayItemsBySectionDescriptor
@property (copy, nonatomic) NSDictionary *slotAllocationByDynamicSlotItemID; // ivar: _slotAllocationByDynamicSlotItemID
@property (retain, nonatomic) NSObject<FCTodayPrivateData> *todayData; // ivar: _todayData
@property (copy, nonatomic) id *todayItemCompletion; // ivar: _todayItemCompletion


-(BOOL)validateOperation;
-(id)_extractFeedItemsFromInputs;
-(id)init;
-(void)_fetchProtoitemsWithCompletion:(id)arg0 ;
-(void)_saveWithCompletion:(id)arg0 ;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif