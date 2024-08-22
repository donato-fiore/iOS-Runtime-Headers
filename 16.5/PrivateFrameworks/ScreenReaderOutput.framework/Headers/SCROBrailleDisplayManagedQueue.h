// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCROBRAILLEDISPLAYMANAGEDQUEUE_H
#define SCROBRAILLEDISPLAYMANAGEDQUEUE_H

@class SCRCIndexMap;

#import <Foundation/Foundation.h>


@interface SCROBrailleDisplayManagedQueue : NSObject {
    SCRCIndexMap *_stateQueueMap;
    *__CFDictionary _queueStateDict;
    *__CFDictionary _displayQueueDict;
    SCRCIndexMap *_tokenDisplayMap;
    NSUInteger _maxActiveQueueSize;
}




-(NSUInteger)activeQueueMaximumSize;
-(NSUInteger)displayCountIncludingDisconnectedDisplays:(BOOL)arg0 ;
-(id)_queueForState:(int)arg0 createQueue:(BOOL)arg1 ;
-(id)activeDisplays;
-(id)activePendingDisplays;
-(id)disconnectedDisplays;
-(id)displayForToken:(int)arg0 ;
-(id)init;
-(id)loadingDisplays;
-(id)primaryDisplay;
-(id)sleepingDisplays;
-(int)stateForDisplay:(id)arg0 ;
-(void)_fillActiveBrailleDisplayQueue;
-(void)addDisplay:(id)arg0 withState:(int)arg1 ;
-(void)dealloc;
-(void)removeDisplay:(id)arg0 ;
-(void)setActiveQueueMaximumSize:(NSUInteger)arg0 ;
-(void)setPrimaryDisplay:(id)arg0 ;
-(void)setState:(int)arg0 forDisplay:(id)arg1 ;


@end


#endif