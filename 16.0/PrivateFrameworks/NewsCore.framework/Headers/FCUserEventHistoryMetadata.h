// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCUSEREVENTHISTORYMETADATA_H
#define FCUSEREVENTHISTORYMETADATA_H


#import <Foundation/Foundation.h>


@interface FCUserEventHistoryMetadata : NSObject

@property (nonatomic) NSInteger aggregateStoreGenerationTime; // ivar: _aggregateStoreGenerationTime
@property (nonatomic) NSInteger aggregateTotalCount; // ivar: _aggregateTotalCount
@property (nonatomic) CGFloat meanCountOfEvents; // ivar: _meanCountOfEvents
@property (nonatomic) NSInteger sessionsOnDiskSize; // ivar: _sessionsOnDiskSize
@property (nonatomic) CGFloat standardDeviationOfEvents; // ivar: _standardDeviationOfEvents
@property (nonatomic) NSInteger totalEventsCount; // ivar: _totalEventsCount


+(id)emptyWithSessionsOnDiskSize:(NSInteger)arg0 ;
-(id)description;
-(id)initWithAggregateStoreGenerationTime:(NSInteger)arg0 aggregateTotalCount:(NSInteger)arg1 meanCountOfEvents:(CGFloat)arg2 sessionsOnDiskSize:(NSInteger)arg3 standardDeviationOfEvents:(CGFloat)arg4 totalEventsCount:(NSInteger)arg5 ;


@end


#endif