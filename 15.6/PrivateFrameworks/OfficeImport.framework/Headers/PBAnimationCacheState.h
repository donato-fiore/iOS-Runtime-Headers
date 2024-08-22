// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PBANIMATIONCACHESTATE_H
#define PBANIMATIONCACHESTATE_H

@class NSMutableSet;


#import "PDAnimationCacheState.h"

@interface PBAnimationCacheState : PDAnimationCacheState {
    NSMutableSet *mEntranceDrawables;
    NSMutableSet *mExitDrawables;
}




-(BOOL)isValid:(id)arg0 ;
-(id)init;


@end


#endif