// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCNOTIFICATIONCOLLAPSINGQUEUE_H
#define NCNOTIFICATIONCOLLAPSINGQUEUE_H

@class NSArray, NSMutableArray;

#import <Foundation/Foundation.h>


@interface NCNotificationCollapsingQueue : NSObject

@property (nonatomic) NSUInteger collapsingThreshold; // ivar: _collapsingThreshold
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) NSArray *enqueuedRequestIdentifiers;
@property (retain, nonatomic) NSMutableArray *requests; // ivar: _requests


-(BOOL)containsNotificationRequest:(id)arg0 ;
-(BOOL)containsNotificationRequestMatchingRequest:(id)arg0 ;
-(NSUInteger)_collapsedCountForCollapsibleRequests:(id)arg0 ;
-(NSUInteger)_indexOfRequestMatchingNotificationRequest:(id)arg0 ;
-(id)_collapsedNotificationRequestForNotificationRequest:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(id)_collapsedNotificationRequestFromCollapsibleRequests:(id)arg0 ;
-(id)_requestsCollapsibleWithNotificationRequest:(id)arg0 ;
-(id)init;
-(id)notificationRequestsCoalescebleWithCoalescedRequest:(id)arg0 ;
-(id)peekNextNotificationRequest;
-(id)peekNextNotificationRequestPassingTest:(id)arg0 ;
-(void)_insertPreemptingNotificationRequest:(id)arg0 ;
-(void)addNotificationRequest:(id)arg0 ;
-(void)removeNotificationRequest:(id)arg0 ;
-(void)replaceNotificationRequest:(id)arg0 ;


@end


#endif