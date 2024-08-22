// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NMRMEDIAREMOTEUPDATER_H
#define NMRMEDIAREMOTEUPDATER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NMRMediaRemoteUpdater : NSObject {
    NSUInteger _updateState;
    id *_updateBlock;
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)initWithQueue:(id)arg0 updateBlock:(id)arg1 ;
-(void)executeUpdateBlock;


@end


#endif