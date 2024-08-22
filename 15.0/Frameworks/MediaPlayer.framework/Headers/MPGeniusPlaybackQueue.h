// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPGENIUSPLAYBACKQUEUE_H
#define MPGENIUSPLAYBACKQUEUE_H

@class NSURL;


#import "MPRemotePlaybackQueue.h"

@interface MPGeniusPlaybackQueue : MPRemotePlaybackQueue

@property (readonly, nonatomic) NSURL *seedTrack;


+(BOOL)supportsSecureCoding;
-(id)description;


@end


#endif