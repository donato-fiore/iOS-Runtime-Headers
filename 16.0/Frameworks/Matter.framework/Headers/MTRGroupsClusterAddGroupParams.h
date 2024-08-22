// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRGROUPSCLUSTERADDGROUPPARAMS_H
#define MTRGROUPSCLUSTERADDGROUPPARAMS_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface MTRGroupsClusterAddGroupParams : NSObject

@property (retain, nonatomic) NSNumber *groupId; // ivar: _groupId
@property (retain, nonatomic) NSString *groupName; // ivar: _groupName
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif