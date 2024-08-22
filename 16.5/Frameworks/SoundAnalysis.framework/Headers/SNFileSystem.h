// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SNFILESYSTEM_H
#define SNFILESYSTEM_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SNFileSystem : NSObject {
    NSMutableDictionary *_taskCompletionMap;
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)init;
// -(void)addRequest:(id)arg0 completionHandler:(id)arg1 resultsHandler:(unk)arg2  ;
-(void)removeRequest:(id)arg0 ;


@end


#endif