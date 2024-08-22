// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVMOVIEINTERNAL_H
#define AVMOVIEINTERNAL_H

@class NSURL, NSData, NSDictionary, NSArray;

#import <Foundation/Foundation.h>

#import "AVAssetInspectorLoader.h"
#import "AVDispatchOnce.h"

@interface AVMovieInternal : NSObject {
    AVAssetInspectorLoader *loader;
    NSURL *URL;
    NSData *data;
    NSDictionary *initializationOptions;
    NSArray *tracks;
    AVDispatchOnce *makeTracksArrayOnce;
}






@end


#endif