// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRSCENESCLUSTERADDSCENEPARAMS_H
#define MTRSCENESCLUSTERADDSCENEPARAMS_H

@class NSArray, NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface MTRScenesClusterAddSceneParams : NSObject

@property (retain, nonatomic) NSArray *extensionFieldSets; // ivar: _extensionFieldSets
@property (retain, nonatomic) NSNumber *groupId; // ivar: _groupId
@property (retain, nonatomic) NSNumber *sceneId; // ivar: _sceneId
@property (retain, nonatomic) NSString *sceneName; // ivar: _sceneName
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs
@property (retain, nonatomic) NSNumber *transitionTime; // ivar: _transitionTime


-(id)description;
-(id)init;


@end


#endif