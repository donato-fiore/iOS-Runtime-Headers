// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHCWORKLOOP_H
#define CHCWORKLOOP_H


#import <Foundation/Foundation.h>


@interface CHCWorkloop : NSObject



+(id)serialQueueTargetingSharedWorkloop:(id)arg0 ;
+(id)serialQueueTargetingSharedWorkloop:(id)arg0 withQoS:(unsigned int)arg1 ;
+(id)sharedDaemonWorkloop;


@end


#endif