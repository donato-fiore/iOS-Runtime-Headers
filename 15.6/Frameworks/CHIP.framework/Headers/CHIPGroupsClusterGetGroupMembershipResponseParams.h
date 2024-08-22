// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPGROUPSCLUSTERGETGROUPMEMBERSHIPRESPONSEPARAMS_H
#define CHIPGROUPSCLUSTERGETGROUPMEMBERSHIPRESPONSEPARAMS_H

@class NSNumber, NSArray;

#import <Foundation/Foundation.h>


@interface CHIPGroupsClusterGetGroupMembershipResponseParams : NSObject

@property (retain, nonatomic) NSNumber *capacity; // ivar: _capacity
@property (retain, nonatomic) NSArray *groupList; // ivar: _groupList


-(id)init;


@end


#endif