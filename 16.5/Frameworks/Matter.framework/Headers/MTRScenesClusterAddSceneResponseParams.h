// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRSCENESCLUSTERADDSCENERESPONSEPARAMS_H
#define MTRSCENESCLUSTERADDSCENERESPONSEPARAMS_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRScenesClusterAddSceneResponseParams : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *groupID; // ivar: _groupID
@property (copy, nonatomic) NSNumber *groupId;
@property (copy, nonatomic) NSNumber *sceneID; // ivar: _sceneID
@property (copy, nonatomic) NSNumber *sceneId;
@property (copy, nonatomic) NSNumber *status; // ivar: _status
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif