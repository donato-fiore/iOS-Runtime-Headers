// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRSCENESCLUSTERENHANCEDVIEWSCENERESPONSEPARAMS_H
#define MTRSCENESCLUSTERENHANCEDVIEWSCENERESPONSEPARAMS_H

@class NSArray, NSNumber, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRScenesClusterEnhancedViewSceneResponseParams : NSObject <NSCopying>



@property (copy, nonatomic) NSArray *extensionFieldSets; // ivar: _extensionFieldSets
@property (copy, nonatomic) NSNumber *groupID; // ivar: _groupID
@property (copy, nonatomic) NSNumber *groupId;
@property (copy, nonatomic) NSNumber *sceneID; // ivar: _sceneID
@property (copy, nonatomic) NSNumber *sceneId;
@property (copy, nonatomic) NSString *sceneName; // ivar: _sceneName
@property (copy, nonatomic) NSNumber *status; // ivar: _status
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs
@property (copy, nonatomic) NSNumber *transitionTime; // ivar: _transitionTime


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif