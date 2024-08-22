// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _BMFMDATABASEQUEUE_H
#define _BMFMDATABASEQUEUE_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_bmFMDatabase.h"

@interface _bmFMDatabaseQueue : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    _bmFMDatabase *_db;
}


@property (readonly) int openFlags; // ivar: _openFlags
@property (retain) NSString *path; // ivar: _path
@property (copy) NSString *vfsName; // ivar: _vfsName


+(Class)databaseClass;
+(id)databaseQueueWithPath:(id)arg0 ;
+(id)databaseQueueWithPath:(id)arg0 flags:(int)arg1 ;
+(id)databaseQueueWithURL:(id)arg0 ;
+(id)databaseQueueWithURL:(id)arg0 flags:(int)arg1 ;
-(BOOL)checkpoint:(int)arg0 error:(*id)arg1 ;
-(BOOL)checkpoint:(int)arg0 name:(id)arg1 error:(*id)arg2 ;
-(BOOL)checkpoint:(int)arg0 name:(id)arg1 logFrameCount:(*int)arg2 checkpointCount:(*int)arg3 error:(*id)arg4 ;
-(id)database;
-(id)inSavePoint:(id)arg0 ;
-(id)init;
-(id)initWithPath:(id)arg0 ;
-(id)initWithPath:(id)arg0 flags:(int)arg1 ;
-(id)initWithPath:(id)arg0 flags:(int)arg1 vfs:(id)arg2 ;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 flags:(int)arg1 ;
-(id)initWithURL:(id)arg0 flags:(int)arg1 vfs:(id)arg2 ;
-(void)beginTransaction:(NSInteger)arg0 withBlock:(id)arg1 ;
-(void)close;
-(void)dealloc;
-(void)inDatabase:(id)arg0 ;
-(void)inDeferredTransaction:(id)arg0 ;
-(void)inExclusiveTransaction:(id)arg0 ;
-(void)inImmediateTransaction:(id)arg0 ;
-(void)inTransaction:(id)arg0 ;
-(void)interrupt;


@end


#endif