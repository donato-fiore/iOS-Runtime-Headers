// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCPENDINGPROMISES_H
#define ASCPENDINGPROMISES_H

@class NSMutableArray, NSRecursiveLock;

#import <Foundation/Foundation.h>


@interface ASCPendingPromises : NSObject

@property (readonly, nonatomic) NSMutableArray *binaryPromises;
@property (retain, nonatomic) NSMutableArray *binaryPromisesIfLoaded; // ivar: _binaryPromisesIfLoaded
@property (readonly, nonatomic) BOOL hasPromises;
@property (readonly, nonatomic) NSMutableArray *promises;
@property (retain, nonatomic) NSMutableArray *promisesIfLoaded; // ivar: _promisesIfLoaded
@property (readonly, nonatomic) NSRecursiveLock *stateLock; // ivar: _stateLock


-(BOOL)containsBinaryPromise:(id)arg0 ;
-(BOOL)containsPromise:(id)arg0 ;
-(id)init;
-(void)addBinaryPromise:(id)arg0 ;
-(void)addPromise:(id)arg0 ;
-(void)cancelAll;
// -(void)enumerateBinaryPromises:(id)arg0 andPromises:(unk)arg1  ;
-(void)finishAllWithError:(id)arg0 ;
-(void)withLock:(id)arg0 ;


@end


#endif