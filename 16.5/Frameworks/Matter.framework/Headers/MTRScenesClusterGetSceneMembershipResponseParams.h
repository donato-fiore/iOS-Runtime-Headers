// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRSCENESCLUSTERGETSCENEMEMBERSHIPRESPONSEPARAMS_H
#define MTRSCENESCLUSTERGETSCENEMEMBERSHIPRESPONSEPARAMS_H

@class NSNumber, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRScenesClusterGetSceneMembershipResponseParams : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *capacity; // ivar: _capacity
@property (copy, nonatomic) NSNumber *groupID; // ivar: _groupID
@property (copy, nonatomic) NSNumber *groupId;
@property (copy, nonatomic) NSArray *sceneList; // ivar: _sceneList
@property (copy, nonatomic) NSNumber *status; // ivar: _status
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif