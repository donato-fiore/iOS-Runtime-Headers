// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSCLOUDKITGROUPSERVER_H
#define IDSCLOUDKITGROUPSERVER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "IDSCKDatabase.h"

@interface IDSCloudKitGroupServer : NSObject

@property (retain, nonatomic) IDSCKDatabase *database; // ivar: _database
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)initWithDatabase:(id)arg0 queue:(id)arg1 ;
-(void)fetchGroupWithID:(id)arg0 inContext:(id)arg1 completion:(id)arg2 ;
-(void)fetchGroupsWithStableGroupID:(id)arg0 inContext:(id)arg1 completion:(id)arg2 ;
-(void)q_groupFromRecord:(id)arg0 inContext:(id)arg1 completion:(id)arg2 ;
-(void)saveGroup:(id)arg0 inContext:(id)arg1 completion:(id)arg2 ;


@end


#endif