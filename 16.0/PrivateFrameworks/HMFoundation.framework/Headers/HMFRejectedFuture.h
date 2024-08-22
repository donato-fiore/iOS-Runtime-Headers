// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMFREJECTEDFUTURE_H
#define HMFREJECTEDFUTURE_H

@class NSError;


#import "HMFFuture.h"

@interface HMFRejectedFuture : HMFFuture {
    NSError *_error;
}




-(BOOL)isPending;
-(id)inContext:(id)arg0 recover:(id)arg1 ;
-(id)inContext:(id)arg0 then:(id)arg1 ;
// -(id)inContext:(id)arg0 then:(id)arg1 orRecover:(unk)arg2  ;
-(id)recover:(id)arg0 ;
-(id)then:(id)arg0 ;
// -(id)then:(id)arg0 orRecover:(unk)arg1  ;
-(struct _HMFFutureBlockOutcome )outcomeIfSettled;
-(void)getResultWithCompletion:(id)arg0 ;


@end


#endif