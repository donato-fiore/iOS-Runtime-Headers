// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LIVEFSPATHHELPER_H
#define LIVEFSPATHHELPER_H

@class NSString, NSData, NSArray, NSMutableOrderedSet, NSMutableArray, NSError;
@protocol OS_dispatch_queue, LiveFSVolumeCore;

#import <Foundation/Foundation.h>


@interface LiveFSPathHelper : NSObject {
    NSObject<OS_dispatch_queue> *ourQueue;
    id<LiveFSVolumeCore> *ourMount;
    NSString *rootFileHandle;
    NSData *_attributes;
    NSArray *pathComponents;
    NSUInteger currentPathComponent;
    NSMutableOrderedSet *fileHandleStack;
    NSMutableArray *attributeStack;
    NSUInteger fileHandleStackCount;
    BOOL lookupCompleted;
    BOOL lookupInProgress;
    BOOL resolveTrailingSymlink;
    NSUInteger numberOfSymlinks;
    id *completionHandler;
}


@property (readonly) NSData *attributes;
@property (readonly) NSError *error; // ivar: _error
@property (readonly) NSString *fileHandle;
@property BOOL resolveTrailingSymlink;


+(id)helperWithMount:(id)arg0 andPath:(id)arg1 ;
-(id)currentFileHandle;
-(id)initWithMount:(id)arg0 andPath:(id)arg1 ;
-(id)peekFileHandle;
-(id)popFileHandle;
-(void)dealloc;
-(void)finalizeWithErrno:(int)arg0 ;
-(void)finalizeWithError:(id)arg0 ;
-(void)lookupNextComponent;
-(void)lookupWithCompletionHandler:(id)arg0 ;
-(void)processLookupReplyWithResult:(int)arg0 item:(id)arg1 andAttributes:(id)arg2 ;
-(void)processReadLinkReplyForLink:(id)arg0 withResult:(int)arg1 linkString:(id)arg2 andAttributes:(id)arg3 ;
-(void)pushFileHandle:(id)arg0 attributes:(id)arg1 ;
-(void)reclaimItem:(id)arg0 withContinuation:(id)arg1 ;
-(void)resolveSymlink:(id)arg0 ;


@end


#endif