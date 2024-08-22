// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC15MEDIAFOUNDATION24INTERNALPLAYERCONTROLLER_H
#define _TTC15MEDIAFOUNDATION24INTERNALPLAYERCONTROLLER_H

@class SwiftObject, NSDictionary;
@protocol MFStateDumpable, MFResettable, MFStateDumpable, MFResettable;



@interface _TtC15MediaFoundation24InternalPlayerController : SwiftObject <MFStateDumpable, MFResettable, MFStateDumpable, MFResettable>

 {
    ? delegate;
    ? targetRate;
    ? targetStartTime;
    ? player;
    ? reporter;
    ? queue;
    ? scanningSubscription;
    ? lastFullyDownloadedPlayerItem;
    ? reportedResumePlaybackTime;
    ? preSetQueueItem;
    ? pendingSeek;
    ? preferredRate;
    ? hasPrerolled;
}


@property (nonatomic, readonly) NSDictionary *stateDictionary;


-(void)reset;


@end


#endif