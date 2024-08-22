// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCFILEPROVIDERDAEMONUTILS_H
#define BRCFILEPROVIDERDAEMONUTILS_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BRCFileProviderDaemonUtils : NSObject {
    NSObject<OS_dispatch_queue> *_timerQueue;
    BOOL _inSyncBubble;
    BOOL _isFPFS;
}




-(id)initWithSyncBubble:(BOOL)arg0 isFPFS:(BOOL)arg1 ;
// -(void)_waitForFPToBeReadyToAcceptXPCAndExecuteBlock:(id)arg0 checkIntervalInSec:(unk)arg1 retries:(unsigned char)arg2  ;
-(void)waitForFPToBeReadyToAcceptXPCAndExecuteBlock:(id)arg0 ;


@end


#endif