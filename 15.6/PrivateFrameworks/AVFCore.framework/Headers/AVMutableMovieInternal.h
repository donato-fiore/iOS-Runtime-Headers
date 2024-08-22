// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVMUTABLEMOVIEINTERNAL_H
#define AVMUTABLEMOVIEINTERNAL_H

@class NSURL, NSData, NSDictionary, NSMutableArray;
@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "AVDispatchOnce.h"

@interface AVMutableMovieInternal : NSObject {
    *OpaqueFigMutableMovie figMutableMovie;
    *OpaqueFigFormatReader formatReader;
    *OpaqueFigAsset figAsset;
    NSURL *URL;
    NSData *data;
    NSDictionary *initializationOptions;
    NSObject<OS_dispatch_semaphore> *trackWaitingSemaphore;
    NSObject<OS_dispatch_semaphore> *metadataWaitingSemaphore;
    NSMutableArray *tracks;
    AVDispatchOnce *makeTracksArrayOnce;
}






@end


#endif