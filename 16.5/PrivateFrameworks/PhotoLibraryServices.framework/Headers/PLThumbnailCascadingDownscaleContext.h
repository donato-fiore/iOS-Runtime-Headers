// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLTHUMBNAILCASCADINGDOWNSCALECONTEXT_H
#define PLTHUMBNAILCASCADINGDOWNSCALECONTEXT_H

@class NSLock;

#import <Foundation/Foundation.h>

#import "PLThumbnailContextCleanupTimer.h"

@interface PLThumbnailCascadingDownscaleContext : NSObject {
    NSLock *_lock;
    *_CMPhotoCascadeContext _portraitContext;
    *_CMPhotoCascadeContext _landscapeContext;
    PLThumbnailContextCleanupTimer *_idleCleanupTimer;
}




-(BOOL)downscaleImageSurface:(struct __IOSurface *)arg0 destinationCount:(int)arg1 sizes:(struct ? *)arg2 cropModes:(*int)arg3 pixelFormat:(unsigned int)arg4 bytesPerRowAlignment:(int)arg5 destinationData:(id)arg6 ;
-(id)init;
-(void)_cleanupTimerFired;
-(void)dealloc;
-(void)discardContexts;


@end


#endif