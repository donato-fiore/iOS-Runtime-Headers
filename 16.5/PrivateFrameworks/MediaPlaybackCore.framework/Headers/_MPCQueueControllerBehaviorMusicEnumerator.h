// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MPCQUEUECONTROLLERBEHAVIORMUSICENUMERATOR_H
#define _MPCQUEUECONTROLLERBEHAVIORMUSICENUMERATOR_H

@class NSEnumerator;


#import "MPCQueueControllerBehaviorMusicIdentifierComponents.h"
#import "_MPCQueueControllerEnumerator.h"

@interface _MPCQueueControllerBehaviorMusicEnumerator : NSEnumerator {
    MPCQueueControllerBehaviorMusicIdentifierComponents *_startingComponents;
    MPCQueueControllerBehaviorMusicIdentifierComponents *_repeatOneComponents;
    NSInteger _repeatIteration;
}


@property (readonly, nonatomic) _MPCQueueControllerEnumerator *queueEnumerator; // ivar: _queueEnumerator


-(id)_loadingComponentsForHeadOfSection:(id)arg0 ;
-(id)initWithQueueEnumerator:(id)arg0 startingComponents:(id)arg1 ;
-(id)nextObject;


@end


#endif