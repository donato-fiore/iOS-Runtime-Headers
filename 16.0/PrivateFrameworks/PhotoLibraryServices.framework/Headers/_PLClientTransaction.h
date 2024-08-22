// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PLCLIENTTRANSACTION_H
#define _PLCLIENTTRANSACTION_H

@class NSSet, NSString;
@protocol OS_dispatch_semaphore;


#import "PLClientServerTransaction.h"

@interface _PLClientTransaction : PLClientServerTransaction {
    id *_processAssertion;
    NSSet *_changeScopes;
    NSInteger _addChangeScopesBatch;
    NSSet *_batchScopes;
}


@property (copy) NSString *changeScopesDescriptionSnapshot; // ivar: _changeScopesDescriptionSnapshot
@property (weak, nonatomic) NSObject<OS_dispatch_semaphore> *fdResourceSemaphore; // ivar: _fdResourceSemaphore
@property (nonatomic) int fileDescriptor; // ivar: _fileDescriptor
@property (retain, nonatomic) NSString *path; // ivar: _path


+(id)_fdIsolationQueue;
-(BOOL)isClientTransaction;
-(id)changeScopes;
-(id)description;
-(id)generateChangeScopesDescription;
-(id)initWithPathManager:(id)arg0 ;
-(id)initWithPathManager:(id)arg0 identifier:(char *)arg1 ;
-(void)_updateChangeScopesDescriptionSnapshot;
-(void)abortTransaction;
-(void)addChangeScopes:(id)arg0 ;
-(void)completeTransaction;
-(void)completeTransactionScope:(id)arg0 ;
-(void)dealloc;
-(void)persistTransactionScopes:(id)arg0 ;
-(void)popChangeScopesBatch;
-(void)pushChangeScopesBatch;


@end


#endif