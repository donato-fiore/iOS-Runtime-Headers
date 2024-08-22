// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDSNAPSHOTCOMPLETIONTIMER_H
#define HMDSNAPSHOTCOMPLETIONTIMER_H

@class HMFTimer;


#import "HMDSnapshotSession.h"

@interface HMDSnapshotCompletionTimer : HMFTimer

@property (readonly, weak, nonatomic) HMDSnapshotSession *snapshotSession; // ivar: _snapshotSession


-(id)initWithSnapshotSession:(id)arg0 timer:(CGFloat)arg1 ;


@end


#endif