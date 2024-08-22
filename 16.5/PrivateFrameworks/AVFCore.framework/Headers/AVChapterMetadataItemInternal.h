// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCHAPTERMETADATAITEMINTERNAL_H
#define AVCHAPTERMETADATAITEMINTERNAL_H

@class NSString, NSMutableArray;
@protocol NSObject><NSCopying, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVWeakReference.h"

@interface AVChapterMetadataItemInternal : NSObject {
    AVWeakReference *weakReference;
    *OpaqueFigAsset figAsset;
    NSInteger chapterGroupIndex;
    NSInteger chapterIndex;
    NSString *chapterType;
    NSString *extendedLanguageTag;
    NSString *languageCode;
    NSString *chapterDataType;
    id<NSObject><NSCopying> *value;
    ? time;
    ? duration;
    NSInteger valueStatus;
    int valueErrorCode;
    NSMutableArray *completions;
    NSObject<OS_dispatch_queue> *readWriteQueue;
}






@end


#endif