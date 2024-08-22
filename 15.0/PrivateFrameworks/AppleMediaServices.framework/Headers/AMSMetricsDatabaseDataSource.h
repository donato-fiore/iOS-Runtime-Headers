// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSMETRICSDATABASEDATASOURCE_H
#define AMSMETRICSDATABASEDATASOURCE_H

@class NSString;
@protocol AMSMetricsDataSource, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AMSMetricsDatabase.h"

@interface AMSMetricsDatabaseDataSource : NSObject <AMSMetricsDataSource>



@property (readonly, nonatomic) NSString *containerIdentifier; // ivar: _containerIdentifier
@property (retain, nonatomic) NSString *currentLockKey; // ivar: _currentLockKey
@property (readonly, nonatomic) AMSMetricsDatabase *database; // ivar: _database
@property (readonly, nonatomic) NSInteger eventCount;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(BOOL)removeEvents:(id)arg0 error:(*id)arg1 ;
-(BOOL)skipEvents:(id)arg0 error:(*id)arg1 ;
-(BOOL)willStartBatchingWithLogKey:(id)arg0 error:(*id)arg1 ;
-(id)enqueueEvents:(id)arg0 ;
-(id)initWithContainerIdentifier:(id)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)didFinishBatching;
-(void)enumerateSortedEventsForTopic:(id)arg0 block:(id)arg1 ;
-(void)removeAllEvents;


@end


#endif