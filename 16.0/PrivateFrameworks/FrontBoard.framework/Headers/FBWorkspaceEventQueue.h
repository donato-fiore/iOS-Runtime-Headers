// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBWORKSPACEEVENTQUEUE_H
#define FBWORKSPACEEVENTQUEUE_H

@class BSEventQueue;



@interface FBWorkspaceEventQueue : BSEventQueue



+(id)sharedInstance;
-(BOOL)_shouldProcessEvent:(id)arg0 enqueuedDuringExecutionOfEvent:(id)arg1 ;
-(void)_noteQueueDidLock;
-(void)_noteQueueDidUnlock;
-(void)_noteWillCancelEventsWithName:(id)arg0 count:(NSUInteger)arg1 ;
-(void)_noteWillExecuteEvent:(id)arg0 ;
-(void)_noteWillPendEvents:(id)arg0 atPosition:(int)arg1 ;
-(void)executeOrAppendEvent:(id)arg0 ;
-(void)executeOrPrependEvent:(id)arg0 ;
-(void)executeOrPrependEvents:(id)arg0 ;


@end


#endif