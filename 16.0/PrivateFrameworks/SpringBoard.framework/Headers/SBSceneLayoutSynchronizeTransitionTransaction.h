// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSCENELAYOUTSYNCHRONIZETRANSITIONTRANSACTION_H
#define SBSCENELAYOUTSYNCHRONIZETRANSITIONTRANSACTION_H

@class BSTransaction, NSString;



@interface SBSceneLayoutSynchronizeTransitionTransaction : BSTransaction {
    NSString *_debugName;
}




-(BOOL)_canBeInterrupted;
-(id)_graphNodeDebugName;
-(id)init;
-(id)initWithDebugName:(id)arg0 ;
-(void)synchronize;


@end


#endif