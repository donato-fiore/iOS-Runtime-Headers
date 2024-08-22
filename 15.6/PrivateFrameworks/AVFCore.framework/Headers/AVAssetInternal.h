// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVASSETINTERNAL_H
#define AVASSETINTERNAL_H

@class NSArray, NSString;
@protocol AVLoggingIdentifier;

#import <Foundation/Foundation.h>

#import "AVWeakReference.h"
#import "AVDispatchOnce.h"

@interface AVAssetInternal : NSObject {
    AVWeakReference *weakReference;
    AVDispatchOnce *loadChapterInfoOnce;
    NSArray *chapterGroupInfo;
    NSString *anchorChapterType;
    NSArray *availableChapterLanguages;
    NSArray *availableCanonicalizedChapterLanguages;
    NSArray *availableChapterLocales;
    id<AVLoggingIdentifier> *loggingIdentifier;
}






@end


#endif