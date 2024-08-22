// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCARDGROUPMEMBERSHIPGROUP_H
#define CNCARDGROUPMEMBERSHIPGROUP_H

@class NSArray;


#import "CNCardGroup.h"

@interface CNCardGroupMembershipGroup : CNCardGroup

@property (retain, nonatomic) NSArray *groupsToDisplayForEditing; // ivar: _groupsToDisplayForEditing
@property (retain, nonatomic) NSArray *parentGroups; // ivar: _parentGroups


-(id)displayItems;
-(id)editingItems;
-(id)groupItemsToDisplayForEditing;
-(id)parentGroupItems;
-(id)title;


@end


#endif