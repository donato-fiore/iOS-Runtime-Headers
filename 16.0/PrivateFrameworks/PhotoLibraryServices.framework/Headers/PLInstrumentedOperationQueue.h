// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLINSTRUMENTEDOPERATIONQUEUE_H
#define PLINSTRUMENTEDOPERATIONQUEUE_H

@class NSOperationQueue;



@interface PLInstrumentedOperationQueue : NSOperationQueue

@property (copy) id *pl_operationCountChangedBlock; // ivar: _pl_operationCountChangedBlock


-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif