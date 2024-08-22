// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRGROUPSCLUSTERGETGROUPMEMBERSHIPRESPONSEPARAMS_H
#define MTRGROUPSCLUSTERGETGROUPMEMBERSHIPRESPONSEPARAMS_H

@class NSNumber, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRGroupsClusterGetGroupMembershipResponseParams : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *capacity; // ivar: _capacity
@property (copy, nonatomic) NSArray *groupList; // ivar: _groupList
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif