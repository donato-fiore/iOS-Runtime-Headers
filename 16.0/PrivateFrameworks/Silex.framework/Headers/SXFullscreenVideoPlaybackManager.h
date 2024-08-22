// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXFULLSCREENVIDEOPLAYBACKMANAGER_H
#define SXFULLSCREENVIDEOPLAYBACKMANAGER_H

@class NSHashTable;

#import <Foundation/Foundation.h>


@interface SXFullscreenVideoPlaybackManager : NSObject {
    BOOL _transitionInProgress;
    BOOL _layoutInProgress;
    NSHashTable *_candidates;
}




-(id)init;


@end


#endif