// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDCMDBEHAVIOR_H
#define PDCMDBEHAVIOR_H



#import "PDAnimateBehavior.h"

@interface PDCmdBehavior : PDAnimateBehavior {
    BOOL mHasBehaviorType;
    int mBehaviorType;
}




-(BOOL)hasBehaviorType;
-(int)behaviorType;
-(void)setBehaviorType:(int)arg0 ;


@end


#endif