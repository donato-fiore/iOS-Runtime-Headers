// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVMOVIETRACKINTERNAL_H
#define AVMOVIETRACKINTERNAL_H

@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface AVMovieTrackInternal : NSObject {
    NSObject<OS_dispatch_semaphore> *metadataWaitingSemaphore;
}






@end


#endif