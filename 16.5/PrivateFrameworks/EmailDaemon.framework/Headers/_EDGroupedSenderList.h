// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EDGROUPEDSENDERLIST_H
#define _EDGROUPEDSENDERLIST_H

@class NSMutableDictionary, NSMutableOrderedSet;

#import <Foundation/Foundation.h>


@interface _EDGroupedSenderList : NSObject {
    NSMutableDictionary *_groupsBySender;
    NSMutableOrderedSet *_orderedGroups;
    id *_comparator;
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSUInteger count;


-(id)groupedSenderAtIndex:(NSUInteger)arg0 ;
-(id)groupedSenderForSenderAddress:(id)arg0 ;
-(id)initWithSortDescriptors:(id)arg0 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)orderedGroupedSendersWithLimit:(NSUInteger)arg0 ;
-(void)_checkConsistencyAndRebuildIfNecessary;
-(void)addGroupedSender:(id)arg0 ;
-(void)removeGroupedSender:(id)arg0 ;


@end


#endif