// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPCPLAYBACKHISTORYCONTROLLER_H
#define MPCPLAYBACKHISTORYCONTROLLER_H

@class NSString, MPModelPlayEvent, NSOperationQueue;
@protocol MPCPlaybackEngineEventObserving;

#import <Foundation/Foundation.h>

#import "MPCPlaybackEngine.h"

@interface MPCPlaybackHistoryController : NSObject <MPCPlaybackEngineEventObserving>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MPModelPlayEvent *lastRecordedPlayEvent; // ivar: _lastRecordedPlayEvent
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine; // ivar: _playbackEngine
@property (readonly) Class superclass;


-(id)initWithPlaybackEngine:(id)arg0 ;
-(void)engine:(id)arg0 willChangeToItem:(id)arg1 fromItem:(id)arg2 ;


@end


#endif