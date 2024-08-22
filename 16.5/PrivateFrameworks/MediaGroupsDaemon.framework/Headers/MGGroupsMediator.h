// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MGGROUPSMEDIATOR_H
#define MGGROUPSMEDIATOR_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>

#import "MGGroupsQueryAgent.h"

@interface MGGroupsMediator : NSObject {
    os_unfair_lock_s _lock;
    NSDictionary *_groups;
}


@property (copy, nonatomic) NSArray *activities; // ivar: _activities
@property (nonatomic, getter=hasPendingChanges) BOOL pendingChanges; // ivar: _pendingChanges
@property (readonly, weak, nonatomic) MGGroupsQueryAgent *queryAgent; // ivar: _queryAgent


-(id)currentGroups;
-(id)description;
-(id)group:(id)arg0 addMember:(id)arg1 ;
-(id)group:(id)arg0 removeMember:(id)arg1 ;
-(id)group:(id)arg0 renameTo:(id)arg1 ;
-(id)groupsForUpdate_unsafe;
-(id)groups_unsafe;
-(id)initWithGroupsQueryAgent:(id)arg0 ;
-(id)startActivityWithName:(id)arg0 ;
-(void)_withLock:(id)arg0 ;
-(void)addGroup:(id)arg0 ;
-(void)endActivity:(id)arg0 ;
-(void)removeGroup:(id)arg0 ;
-(void)removeGroup:(id)arg0 ifExists_unsafe:(*BOOL)arg1 ;
-(void)removeGroupWithIdentifier:(id)arg0 ;
-(void)upsertGroup_unsafe:(id)arg0 ;


@end


#endif