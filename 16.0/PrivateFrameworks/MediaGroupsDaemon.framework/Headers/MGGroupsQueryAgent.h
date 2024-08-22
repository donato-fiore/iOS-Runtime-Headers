// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MGGROUPSQUERYAGENT_H
#define MGGROUPSQUERYAGENT_H

@class NSDictionary, MGGroupIdentifier, NSOperationQueue;
@protocol MGGroupsQueryAgentDelegate;

#import <Foundation/Foundation.h>


@interface MGGroupsQueryAgent : NSObject {
    os_unfair_lock_s _lock;
}


@property (copy, nonatomic) NSDictionary *containers; // ivar: _containers
@property (copy, nonatomic) MGGroupIdentifier *currentIdentifier; // ivar: _currentIdentifier
@property (readonly, weak, nonatomic) NSObject<MGGroupsQueryAgentDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSDictionary *groups; // ivar: _groups
@property (copy, nonatomic) NSDictionary *operations; // ivar: _operations
@property (copy, nonatomic) NSDictionary *queries; // ivar: _queries
@property (readonly, nonatomic) NSOperationQueue *queue; // ivar: _queue
@property (copy, nonatomic) NSDictionary *variables; // ivar: _variables


-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(void)_performQueryExchangeUsingGroups:(id)arg0 currentIdentifier:(id)arg1 ;
-(void)_prepareWithGroups:(id)arg0 currentIdentifier:(id)arg1 ;
-(void)_queryOperation:(id)arg0 didFindGroups:(id)arg1 ;
-(void)_withLock:(id)arg0 ;
-(void)addOutstandingQuery:(id)arg0 ;
-(void)groupsMediator:(id)arg0 didUpdateGroups:(id)arg1 ;
-(void)removeOutstandingQuery:(id)arg0 ;
-(void)setCurrentDeviceIdentifier:(id)arg0 ;


@end


#endif