// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRSCENESCLUSTERGETSCENEMEMBERSHIPRESPONSEPARAMS_H
#define MTRSCENESCLUSTERGETSCENEMEMBERSHIPRESPONSEPARAMS_H

@class NSNumber, NSArray;

#import <Foundation/Foundation.h>


@interface MTRScenesClusterGetSceneMembershipResponseParams : NSObject

@property (retain, nonatomic) NSNumber *capacity; // ivar: _capacity
@property (retain, nonatomic) NSNumber *groupId; // ivar: _groupId
@property (retain, nonatomic) NSArray *sceneList; // ivar: _sceneList
@property (retain, nonatomic) NSNumber *status; // ivar: _status
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif