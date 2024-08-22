// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVLAZYVALUELOADINGMETADATAITEMINTERNAL_H
#define AVLAZYVALUELOADINGMETADATAITEMINTERNAL_H

@class NSString, NSError, NSMutableArray;
@protocol NSObject><NSCopying, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVMetadataItemValueRequest.h"

@interface AVLazyValueLoadingMetadataItemInternal : NSObject {
    id<NSObject><NSCopying> *value;
    NSString *dataType;
    AVMetadataItemValueRequest *valueRequest;
    id *valueLoadingHandler;
    NSInteger valueStatus;
    NSError *valueLoadingError;
    NSMutableArray *loadingCompletionHandlers;
    NSObject<OS_dispatch_queue> *readWriteQueue;
}






@end


#endif