// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSOPERATION_H
#define AMSOPERATION_H

@class NSOperation, NSLock, NSMutableSet, NSError;


#import "AMSOperation.h"
#import "AMSBinaryPromise.h"

@interface AMSOperation : NSOperation {
    NSLock *_lock;
    NSMutableSet *_subOperations;
    BOOL _cancelled;
}


@property (retain, nonatomic) NSError *error; // ivar: _error
@property (weak, nonatomic) AMSOperation *parentOperation; // ivar: _parentOperation
@property (readonly, nonatomic) AMSBinaryPromise *promise; // ivar: _promise
@property (nonatomic) BOOL success; // ivar: _success


-(BOOL)isCancelled;
-(id)init;
-(void)cancel;
-(void)lock;
-(void)main;
-(void)run;
-(void)runSubOperation:(id)arg0 ;
-(void)runSubOperation:(id)arg0 onQueue:(id)arg1 ;
-(void)unlock;


@end


#endif