// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBSCENEEVENTQUEUE_H
#define FBSCENEEVENTQUEUE_H

@class BSEventQueue;
@protocol FBSceneEventQueueDelegate;



@interface FBSceneEventQueue : BSEventQueue

@property (weak, nonatomic) NSObject<FBSceneEventQueueDelegate> *delegate; // ivar: _delegate


-(void)_noteQueueDidDrain;
-(void)_noteQueueDidUnlock;
-(void)_noteWillExecuteEvent:(id)arg0 ;
-(void)_noteWillPendEvents:(id)arg0 atPosition:(int)arg1 ;


@end


#endif