// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDTIMECONDITION_H
#define PDTIMECONDITION_H


#import <Foundation/Foundation.h>

#import "PDAnimationTarget.h"

@interface PDTimeCondition : NSObject {
    BOOL mHasDelay;
    int mDelay;
    BOOL mHasTriggerEvent;
    int mTriggerEvent;
    PDAnimationTarget *mTarget;
}




-(BOOL)hasDelay;
-(BOOL)hasTriggerEvent;
-(id)description;
-(id)init;
-(id)target;
-(int)delay;
-(int)triggerEvent;
-(int)writeDelay;
-(void)setDelay:(int)arg0 ;
-(void)setTarget:(id)arg0 ;
-(void)setTriggerEvent:(int)arg0 ;


@end


#endif