// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBAPPSWITCHERSNAPSHOTVIEWSTATE_H
#define SBAPPSWITCHERSNAPSHOTVIEWSTATE_H


#import <Foundation/Foundation.h>

#import "SBDeviceApplicationSceneHandle.h"
#import "SBAppSwitcherSnapshotCacheEntry.h"

@interface SBAppSwitcherSnapshotViewState : NSObject {
    BOOL _animatingTransition;
    SBDeviceApplicationSceneHandle *_sceneHandle;
    SBAppSwitcherSnapshotCacheEntry *_cacheEntry;
}






@end


#endif