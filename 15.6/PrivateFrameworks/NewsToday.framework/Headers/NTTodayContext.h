// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTTODAYCONTEXT_H
#define NTTODAYCONTEXT_H

@class NSString, FCAsyncSerialQueue;
@protocol FCNetworkReachabilityObserving, NTTodayContext, OS_dispatch_queue, FCContentContext, FCReadablePrivateDataStorage, NTTodayResultsSource, FCWritablePrivateDataStorage;

#import <Foundation/Foundation.h>

#import "NTSourceAvailabilityManager.h"

@interface NTTodayContext : NSObject <FCNetworkReachabilityObserving, NTTodayContext>



@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // ivar: _accessQueue
@property (retain, nonatomic) NSObject<FCContentContext> *contentContext; // ivar: _contentContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) FCAsyncSerialQueue *fetchQueue; // ivar: _fetchQueue
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *newResultsHandler; // ivar: _newResultsHandler
@property (retain, nonatomic) NSObject<FCReadablePrivateDataStorage> *readablePrivateDataStorage; // ivar: _readablePrivateDataStorage
@property (retain, nonatomic) NTSourceAvailabilityManager *sourceAvailabilityManager; // ivar: _sourceAvailabilityManager
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<NTTodayResultsSource> *todayResultsSource; // ivar: _todayResultsSource
@property (retain, nonatomic) NSObject<FCWritablePrivateDataStorage> *writablePrivateDataStorage; // ivar: _writablePrivateDataStorage


-(id)init;
-(id)initWithContentContext:(id)arg0 processVariant:(NSUInteger)arg1 accessQueue:(id)arg2 fetchQueue:(id)arg3 ;
-(id)initWithContentHostDirectory:(id)arg0 processVariant:(NSUInteger)arg1 accessQueue:(id)arg2 fetchQueue:(id)arg3 ;
-(id)placeholderResultsWithOperationInfo:(id)arg0 ;
-(void)_setupTodayResultsSource;
-(void)fetchLatestResultsWithOperationInfo:(id)arg0 completion:(id)arg1 ;
-(void)fetchModuleDescriptorsWithCompletion:(id)arg0 ;
-(void)networkReachabilityDidChange:(id)arg0 ;
-(void)writeUserDidReadHeadlineWithAnalyticsElement:(id)arg0 atDate:(id)arg1 withCompletion:(id)arg2 ;
-(void)writeUserDidSeeHeadlinesWithAnalyticsElements:(id)arg0 atDate:(id)arg1 withCompletion:(id)arg2 ;


@end


#endif