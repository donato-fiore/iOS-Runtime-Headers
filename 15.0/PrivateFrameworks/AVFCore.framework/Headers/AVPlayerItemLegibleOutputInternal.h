// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVPLAYERITEMLEGIBLEOUTPUTINTERNAL_H
#define AVPLAYERITEMLEGIBLEOUTPUTINTERNAL_H

@class NSArray, NSString;
@protocol AVPlayerItemLegibleOutputDependencyFactory, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVWeakReferencingDelegateStorage.h"
#import "AVWeakReference.h"

@interface AVPlayerItemLegibleOutputInternal : NSObject {
    id<AVPlayerItemLegibleOutputDependencyFactory> *dependencyFactory;
    NSArray *nativeRepresentationSubtypes;
    AVWeakReferencingDelegateStorage *delegateStorage;
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    AVWeakReference *weakReferenceToHost;
    BOOL suppressesPlayerRendering;
    CGFloat advanceInterval;
    NSString *textStylingResolution;
}






@end


#endif