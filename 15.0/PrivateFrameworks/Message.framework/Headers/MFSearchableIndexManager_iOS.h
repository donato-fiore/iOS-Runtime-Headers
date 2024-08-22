// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFSEARCHABLEINDEXMANAGER_IOS_H
#define MFSEARCHABLEINDEXMANAGER_IOS_H

@class EDSearchableIndexManager, NSSet, NSString, EDSearchableIndex, EDSearchableIndexPersistence, EDSearchableIndexScheduler;
@protocol EDSearchableIndexReasonProvider;



@interface MFSearchableIndexManager_iOS : EDSearchableIndexManager <EDSearchableIndexReasonProvider>

 {
    os_unfair_lock_s _indexLock;
}


@property (readonly, copy, nonatomic) NSSet *currentReasons;
@property (readonly, copy, nonatomic) NSSet *dataSourceRefreshReasons;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSSet *exclusionReasons;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) EDSearchableIndex *index; // ivar: _index
@property (retain, nonatomic) EDSearchableIndexPersistence *persistence; // ivar: _persistence
@property (readonly, copy, nonatomic) NSSet *purgeReasons;
@property (retain, nonatomic) EDSearchableIndexScheduler *scheduler; // ivar: _scheduler
@property (readonly) Class superclass;


-(id)initWithDatabase:(id)arg0 hookResponder:(id)arg1 ;
-(void)enableIndexingAndBeginScheduling:(BOOL)arg0 ;
-(void)enableIndexingAndBeginScheduling:(BOOL)arg0 budgetConfiguration:(id)arg1 ;


@end


#endif