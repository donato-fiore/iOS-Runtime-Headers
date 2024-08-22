// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLENGINESTORETRANSACTION_H
#define CPLENGINESTORETRANSACTION_H

@class NSThread, NSMutableArray, NSError, NSString;

#import <Foundation/Foundation.h>

#import "CPLTransaction.h"
#import "CPLEngineWriteTransactionBlocker.h"
#import "CPLEngineStore.h"

@interface CPLEngineStoreTransaction : NSObject {
    NSThread *_currentThread;
    BOOL _forWrite;
    NSMutableArray *_cleanupBlocks;
    CPLTransaction *_dirty;
}


@property (retain, nonatomic) CPLEngineWriteTransactionBlocker *blocker; // ivar: _blocker
@property (copy, nonatomic) NSError *error; // ivar: _error
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) CPLEngineStore *store; // ivar: _store


-(BOOL)_forWrite;
-(BOOL)canRead;
-(BOOL)canWrite;
-(BOOL)do:(id)arg0 ;
-(id)description;
-(id)initForWrite:(BOOL)arg0 store:(id)arg1 identifier:(id)arg2 description:(id)arg3 ;
-(id)redactedDescription;
-(void)_releaseDirty;
-(void)_transactionDidFinish;
-(void)_transactionWillBeginOnThread:(id)arg0 ;
-(void)addCleanupBlock:(id)arg0 ;
-(void)dealloc;


@end


#endif