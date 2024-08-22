// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLENGINESTORETRANSACTION_H
#define CPLENGINESTORETRANSACTION_H

@class NSThread, NSMutableArray, NSError, NSString;

#import <Foundation/Foundation.h>

#import "CPLTransaction.h"
#import "CPLEngineWriteTransactionBlocker.h"

@interface CPLEngineStoreTransaction : NSObject {
    NSThread *_currentThread;
    BOOL _forWrite;
    NSMutableArray *_cleanupBlocks;
    CPLTransaction *_dirty;
}


@property (retain, nonatomic) CPLEngineWriteTransactionBlocker *blocker; // ivar: _blocker
@property (copy, nonatomic) NSError *error; // ivar: _error
@property (copy, nonatomic) NSString *name; // ivar: _name


-(BOOL)_forWrite;
-(BOOL)canRead;
-(BOOL)canWrite;
-(BOOL)do:(id)arg0 ;
-(id)description;
-(id)initForWrite:(BOOL)arg0 identifier:(id)arg1 description:(id)arg2 ;
-(id)redactedDescription;
-(void)_releaseDirty;
-(void)_transactionDidFinish;
-(void)_transactionWillBeginOnThread:(id)arg0 ;
-(void)addCleanupBlock:(id)arg0 ;
-(void)dealloc;


@end


#endif