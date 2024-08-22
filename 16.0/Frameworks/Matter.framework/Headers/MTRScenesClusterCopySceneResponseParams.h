// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRSCENESCLUSTERCOPYSCENERESPONSEPARAMS_H
#define MTRSCENESCLUSTERCOPYSCENERESPONSEPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTRScenesClusterCopySceneResponseParams : NSObject

@property (retain, nonatomic) NSNumber *groupIdFrom; // ivar: _groupIdFrom
@property (retain, nonatomic) NSNumber *sceneIdFrom; // ivar: _sceneIdFrom
@property (retain, nonatomic) NSNumber *status; // ivar: _status
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif