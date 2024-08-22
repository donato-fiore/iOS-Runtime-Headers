// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHADIRTYCHANGECOALESCER_H
#define PHADIRTYCHANGECOALESCER_H

@class PFCoalescer;
@protocol OS_dispatch_queue, PHADirtyChangeCoalescerDelegate;

#import <Foundation/Foundation.h>


@interface PHADirtyChangeCoalescer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    PFCoalescer *_valueCoalescer;
}


@property (weak, nonatomic) NSObject<PHADirtyChangeCoalescerDelegate> *delegate; // ivar: _delegate


-(id)init;
-(void)recordDirtyTransitionForAssetIdentifier:(id)arg0 workerType:(short)arg1 workerFlags:(int)arg2 ;


@end


#endif