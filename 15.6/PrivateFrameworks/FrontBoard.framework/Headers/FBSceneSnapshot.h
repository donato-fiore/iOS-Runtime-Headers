// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FBSCENESNAPSHOT_H
#define FBSCENESNAPSHOT_H

@class _FBSSnapshot, IOSurface;

#import <Foundation/Foundation.h>

#import "FBScene.h"
#import "FBSceneSnapshotContext.h"

@interface FBSceneSnapshot : NSObject {
    FBScene *_scene;
    _FBSSnapshot *_snapshot;
}


@property (readonly, nonatomic) *CGImage CGImage;
@property (readonly, nonatomic) IOSurface *IOSurface;
@property (readonly, copy, nonatomic) FBSceneSnapshotContext *context; // ivar: _context
@property (readonly, nonatomic) IOSurface *fallbackIOSurface;
@property (readonly, nonatomic) BOOL hasProtectedContent;


-(BOOL)capture;
-(id)_collectLayersToSnapshotFromScene:(id)arg0 withSnapshotContext:(id)arg1 rootContext:(id)arg2 ;
-(id)initWithScene:(id)arg0 snapshotContext:(id)arg1 ;
-(struct CGAffineTransform )_baseTransformForSnapshotContext:(id)arg0 rootContext:(id)arg1 ;


@end


#endif