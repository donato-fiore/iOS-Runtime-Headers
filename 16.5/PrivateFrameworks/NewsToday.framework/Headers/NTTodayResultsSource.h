// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTTODAYRESULTSSOURCE_H
#define NTTODAYRESULTSSOURCE_H

@class NSString, FCAsyncSerialQueue;
@protocol NTTodayResultsSource, FCContentContext, NTTodayResultsFetchDescriptor, FCReadablePrivateDataStorage;

#import <Foundation/Foundation.h>


@interface NTTodayResultsSource : NSObject <NTTodayResultsSource>



@property (readonly, nonatomic) NSObject<FCContentContext> *contentContext; // ivar: _contentContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSObject<NTTodayResultsFetchDescriptor> *fetchDescriptor; // ivar: _fetchDescriptor
@property (nonatomic, getter=hasFlushingBeenEnabled) BOOL flushingHasBeenEnabled; // ivar: _flushingHasBeenEnabled
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject *latestResultRecordsHoldToken; // ivar: _latestResultRecordsHoldToken
@property (readonly, nonatomic) NSObject<FCReadablePrivateDataStorage> *privateDataStorage; // ivar: _privateDataStorage
@property (readonly, nonatomic) FCAsyncSerialQueue *serialQueue; // ivar: _serialQueue
@property (readonly) Class superclass;


+(id)placeholderResultsWithFetchDescriptor:(id)arg0 contentContext:(id)arg1 operationInfo:(id)arg2 ;
-(id)init;
-(id)initWithFetchDescriptor:(id)arg0 privateDataStorage:(id)arg1 contentContext:(id)arg2 fetchQueue:(id)arg3 ;
-(id)placeholderResultsWithOperationInfo:(id)arg0 ;
-(void)_fetchLatestResultsWithOperationInfo:(id)arg0 prefetchedContent:(id)arg1 completion:(id)arg2 ;
-(void)_fetchTodayModuleDescriptorsWithContentRequests:(id)arg0 requireRefreshedAppConfig:(BOOL)arg1 qualityOfService:(NSInteger)arg2 completion:(id)arg3 ;
-(void)fetchLatestResultsWithOperationInfo:(id)arg0 completion:(id)arg1 ;
-(void)fetchModuleDescriptorsWithCompletion:(id)arg0 ;


@end


#endif