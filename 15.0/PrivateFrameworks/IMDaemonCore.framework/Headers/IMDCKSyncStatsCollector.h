// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMDCKSYNCSTATSCOLLECTOR_H
#define IMDCKSYNCSTATSCOLLECTOR_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface IMDCKSyncStatsCollector : NSObject

@property (retain, nonatomic) NSMutableDictionary *inMemorySyncStatistics; // ivar: _inMemorySyncStatistics


+(id)sharedInstance;
-(id)currentInMemorySyncStatistics;
-(id)init;
-(void)_incrementCountsForColumnSyncedKey:(id)arg0 syncedColumnAmountToIncrease:(NSUInteger)arg1 totalColumnAmountKey:(id)arg2 totalColumnAmountToIncrease:(NSUInteger)arg3 ;
-(void)dealloc;
-(void)incrementSyncedAttachmentCount:(NSUInteger)arg0 incrementTotalAttachmentCount:(NSUInteger)arg1 ;
-(void)incrementSyncedChatCount:(NSUInteger)arg0 incrementTotalChatCount:(NSUInteger)arg1 ;
-(void)incrementSyncedMessageCount:(NSUInteger)arg0 incrementTotalMessageCount:(NSUInteger)arg1 ;
-(void)refreshWithDBSyncStatistics;


@end


#endif