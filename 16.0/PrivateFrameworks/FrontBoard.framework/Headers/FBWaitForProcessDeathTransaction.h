// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBWAITFORPROCESSDEATHTRANSACTION_H
#define FBWAITFORPROCESSDEATHTRANSACTION_H

@class BSAbsoluteMachTimer, NSString;
@protocol FBProcessManagerObserver;


#import "FBTransaction.h"
#import "FBProcess.h"

@interface FBWaitForProcessDeathTransaction : FBTransaction <FBProcessManagerObserver>

 {
    BSAbsoluteMachTimer *_timer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) FBProcess *process; // ivar: _process
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timeout; // ivar: _timeout


-(BOOL)_canBeInterrupted;
-(id)_customizedDescriptionProperties;
-(id)initWithProcess:(id)arg0 ;
-(id)initWithProcess:(id)arg0 timeout:(CGFloat)arg1 ;
-(void)_begin;
-(void)_didComplete;
-(void)processManager:(id)arg0 didAddProcess:(id)arg1 ;
-(void)processManager:(id)arg0 didRemoveProcess:(id)arg1 ;


@end


#endif