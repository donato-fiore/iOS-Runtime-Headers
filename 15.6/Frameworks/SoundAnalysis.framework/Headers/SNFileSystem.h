// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SNFILESYSTEM_H
#define SNFILESYSTEM_H

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SNFileSystem : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSMutableArray *requests; // ivar: _requests
@property (retain, nonatomic) NSMutableDictionary *taskCompletionMap; // ivar: _taskCompletionMap


-(void)_removeRequest:(id)arg0 error:(id)arg1 ;
// -(void)addRequest:(id)arg0 completionHandler:(id)arg1 resultsHandler:(unk)arg2  ;
-(void)removeRequest:(id)arg0 ;


@end


#endif