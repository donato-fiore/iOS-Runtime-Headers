// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC17MEDIAPLAYBACKCORE24INTERNALPLAYERCONTROLLER_H
#define _TTC17MEDIAPLAYBACKCORE24INTERNALPLAYERCONTROLLER_H

@class SwiftObject, NSDictionary;
@protocol MFStateDumpable, MFResettable, MFStateDumpable, MFResettable;



@interface _TtC17MediaPlaybackCore24InternalPlayerController : SwiftObject <MFStateDumpable, MFResettable, MFStateDumpable, MFResettable>

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


-(void)resetWithReason:(id)arg0 ;


@end


#endif