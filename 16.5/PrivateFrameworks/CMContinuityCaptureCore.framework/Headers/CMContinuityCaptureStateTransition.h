// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMCONTINUITYCAPTURESTATETRANSITION_H
#define CMCONTINUITYCAPTURESTATETRANSITION_H


#import <Foundation/Foundation.h>

#import "CMContinuityCaptureState.h"
#import "CMContinuityCaptureStateMachineEvent.h"

@interface CMContinuityCaptureStateTransition : NSObject

@property (copy, nonatomic) id *action; // ivar: _action
@property (retain, nonatomic) CMContinuityCaptureState *dstState; // ivar: _dstState
@property (retain, nonatomic) CMContinuityCaptureStateMachineEvent *event; // ivar: _event
@property (copy, nonatomic) id *guard; // ivar: _guard
@property (retain, nonatomic) CMContinuityCaptureState *srcState; // ivar: _srcState


// -(id)initWithAttributes:(id)arg0 dstState:(id)arg1 event:(id)arg2 guard:(id)arg3 action:(unk)arg4  ;
-(id)transactionFromStateOnEvent:(id)arg0 event:(id)arg1 ;


@end


#endif