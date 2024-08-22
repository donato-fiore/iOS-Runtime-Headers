// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _REAUDIOMANAGERASYNCLISTENERUPDATER_H
#define _REAUDIOMANAGERASYNCLISTENERUPDATER_H

@protocol OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface _REAudioManagerAsyncListenerUpdater : NSObject {
    *OpaqueFigSTS _sts;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_group;
    atomic<bool> _quitting;
    atomic<int> _updateCount;
    CGFloat _totalLatency;
    CGFloat _maxUpdateLatency;
    NSUInteger _cumulativeUpdateCount;
    int _droppedUpdates;
}




-(id)initWithSTS:(struct OpaqueFigSTS *)arg0 ;
-(void)dealloc;
-(void)updateListenerTransform:(struct ? )arg0 ;


@end


#endif