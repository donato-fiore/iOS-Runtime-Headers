// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSMETRICSMEMORYDATASOURCE_H
#define AMSMETRICSMEMORYDATASOURCE_H

@class NSMutableDictionary;
@protocol AMSMetricsDataSource;

#import <Foundation/Foundation.h>


@interface AMSMetricsMemoryDataSource : NSObject <AMSMetricsDataSource>



@property (retain, nonatomic) NSMutableDictionary *batches; // ivar: _batches


+(id)batchesFromEvents:(id)arg0 ;
-(BOOL)removeEvents:(id)arg0 error:(*id)arg1 ;
-(BOOL)skipEvents:(id)arg0 error:(*id)arg1 ;
-(BOOL)willStartBatchingWithLogKey:(id)arg0 error:(*id)arg1 ;
-(id)initWithEvents:(id)arg0 ;
-(void)cancel;
-(void)didFinishBatching;
-(void)enumerateSortedEventsForTopic:(id)arg0 block:(id)arg1 ;


@end


#endif