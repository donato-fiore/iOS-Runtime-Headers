// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPSCENESCLUSTERGETSCENEMEMBERSHIPRESPONSEPARAMS_H
#define CHIPSCENESCLUSTERGETSCENEMEMBERSHIPRESPONSEPARAMS_H

@class NSNumber, NSArray;

#import <Foundation/Foundation.h>


@interface CHIPScenesClusterGetSceneMembershipResponseParams : NSObject

@property (retain, nonatomic) NSNumber *capacity; // ivar: _capacity
@property (retain, nonatomic) NSNumber *groupId; // ivar: _groupId
@property (retain, nonatomic) NSNumber *sceneCount; // ivar: _sceneCount
@property (retain, nonatomic) NSArray *sceneList; // ivar: _sceneList
@property (retain, nonatomic) NSNumber *status; // ivar: _status


-(id)init;


@end


#endif