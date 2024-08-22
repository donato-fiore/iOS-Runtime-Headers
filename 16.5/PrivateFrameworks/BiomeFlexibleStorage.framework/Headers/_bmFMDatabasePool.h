// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _BMFMDATABASEPOOL_H
#define _BMFMDATABASEPOOL_H

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _bmFMDatabasePool : NSObject {
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSMutableArray *_databaseInPool;
    NSMutableArray *_databaseOutPool;
}


@property (readonly, nonatomic) NSUInteger countOfCheckedInDatabases;
@property (readonly, nonatomic) NSUInteger countOfCheckedOutDatabases;
@property (readonly, nonatomic) NSUInteger countOfOpenDatabases;
@property id *delegate; // ivar: _delegate
@property NSUInteger maximumNumberOfDatabasesToCreate; // ivar: _maximumNumberOfDatabasesToCreate
@property (readonly) int openFlags; // ivar: _openFlags
@property (copy) NSString *path; // ivar: _path
@property (copy) NSString *vfsName; // ivar: _vfsName


+(Class)databaseClass;
+(id)databasePoolWithPath:(id)arg0 ;
+(id)databasePoolWithPath:(id)arg0 flags:(int)arg1 ;
+(id)databasePoolWithURL:(id)arg0 ;
+(id)databasePoolWithURL:(id)arg0 flags:(int)arg1 ;
-(id)db;
-(id)inSavePoint:(id)arg0 ;
-(id)init;
-(id)initWithPath:(id)arg0 ;
-(id)initWithPath:(id)arg0 flags:(int)arg1 ;
-(id)initWithPath:(id)arg0 flags:(int)arg1 vfs:(id)arg2 ;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 flags:(int)arg1 ;
-(id)initWithURL:(id)arg0 flags:(int)arg1 vfs:(id)arg2 ;
-(void)beginTransaction:(NSInteger)arg0 withBlock:(id)arg1 ;
-(void)dealloc;
-(void)executeLocked:(id)arg0 ;
-(void)inDatabase:(id)arg0 ;
-(void)inDeferredTransaction:(id)arg0 ;
-(void)inExclusiveTransaction:(id)arg0 ;
-(void)inImmediateTransaction:(id)arg0 ;
-(void)inTransaction:(id)arg0 ;
-(void)pushDatabaseBackInPool:(id)arg0 ;
-(void)releaseAllDatabases;


@end


#endif