// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDMANAGEDSTAGEDVALUE_H
#define HMDMANAGEDSTAGEDVALUE_H

@class HMFStagedValue;

#import <Foundation/Foundation.h>


@interface HMDManagedStagedValue : NSObject {
    os_unfair_lock_s _lock;
}


@property (copy, nonatomic) id *commitBlock; // ivar: _commitBlock
@property (readonly, copy, nonatomic) id *initialValue; // ivar: _initialValue
@property (retain) HMFStagedValue *stagedValue; // ivar: _stagedValue
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) id *value;


-(id)initWithValue:(id)arg0 commitBlock:(id)arg1 ;
-(void)_commitIfStaged:(id)arg0 ;
-(void)_handleCommitCompletionWithStagedValue:(id)arg0 success:(BOOL)arg1 committingValue:(id)arg2 ;
-(void)resetAndStagePriorValue;
-(void)stageValue:(id)arg0 ;


@end


#endif