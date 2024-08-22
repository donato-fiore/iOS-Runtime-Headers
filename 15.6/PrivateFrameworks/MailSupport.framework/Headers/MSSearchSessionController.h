// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSSEARCHSESSIONCONTROLLER_H
#define MSSEARCHSESSIONCONTROLLER_H

@class NSMutableArray, NSArray;
@protocol MSSearchSessionControllerDataSource, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MSSearchSessionController : NSObject

@property (readonly, weak, nonatomic) NSObject<MSSearchSessionControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, nonatomic) int emailProvider; // ivar: _emailProvider
@property (readonly, nonatomic) NSMutableArray *mutableSessionEngagements; // ivar: _mutableSessionEngagements
@property (readonly, nonatomic) NSUInteger numberOfMessagesLeftToIndex; // ivar: _numberOfMessagesLeftToIndex
@property (readonly, nonatomic) NSUInteger percentOfMessagesIndexed; // ivar: _percentOfMessagesIndexed
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, copy, nonatomic) NSArray *sessionEngagements;


-(id)init;
-(id)initWithDataSource:(id)arg0 ;
-(void)_addToLatestEngagementWithUserEngagement:(id)arg0 ;
-(void)_recordEngagement:(int)arg0 forMessage:(id)arg1 isTopHit:(BOOL)arg2 messageListIndex:(NSInteger)arg3 spotlightListIndex:(NSInteger)arg4 ;
-(void)_recordUserDidNotSelectAnyMessage;
-(void)addNewEngagementWithAWDAtoms:(id)arg0 searchScope:(BOOL)arg1 suggestionsEngagements:(id)arg2 ;
-(void)addNewEngagementWithAtoms:(id)arg0 searchScope:(BOOL)arg1 suggestionsEngagement:(id)arg2 ;
-(void)endSession;
-(void)recordUserDidOrbMessage:(id)arg0 ;
-(void)recordUserDidOrbMessage:(id)arg0 isTopHit:(BOOL)arg1 messageListIndex:(NSInteger)arg2 spotlightListIndex:(NSInteger)arg3 ;
-(void)recordUserDidRightClickMessage:(id)arg0 ;
-(void)recordUserDidRightClickMessage:(id)arg0 isTopHit:(BOOL)arg1 messageListIndex:(NSInteger)arg2 spotlightListIndex:(NSInteger)arg3 ;
-(void)recordUserDidSelectMessage:(id)arg0 ;
-(void)recordUserDidSelectMessage:(id)arg0 isTopHit:(BOOL)arg1 messageListIndex:(NSInteger)arg2 spotlightListIndex:(NSInteger)arg3 ;
-(void)recordUserDidSwipeMessage:(id)arg0 ;
-(void)recordUserDidSwipeMessage:(id)arg0 isTopHit:(BOOL)arg1 messageListIndex:(NSInteger)arg2 spotlightListIndex:(NSInteger)arg3 ;
-(void)updateLastEngagementSearchResultCount:(NSUInteger)arg0 ;


@end


#endif