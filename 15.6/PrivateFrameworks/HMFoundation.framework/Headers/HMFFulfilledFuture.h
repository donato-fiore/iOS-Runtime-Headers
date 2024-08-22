// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMFFULFILLEDFUTURE_H
#define HMFFULFILLEDFUTURE_H



#import "HMFFuture.h"

@interface HMFFulfilledFuture : HMFFuture {
    id *_value;
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