// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRGROUPSCLUSTERGETGROUPMEMBERSHIPPARAMS_H
#define MTRGROUPSCLUSTERGETGROUPMEMBERSHIPPARAMS_H

@class NSArray, NSNumber;

#import <Foundation/Foundation.h>


@interface MTRGroupsClusterGetGroupMembershipParams : NSObject

@property (retain, nonatomic) NSArray *groupList; // ivar: _groupList
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif