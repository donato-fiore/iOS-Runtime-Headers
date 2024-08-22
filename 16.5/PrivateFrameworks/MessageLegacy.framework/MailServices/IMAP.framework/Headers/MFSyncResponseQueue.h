// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFSYNCRESPONSEQUEUE_H
#define MFSYNCRESPONSEQUEUE_H



#import "MFBaseSyncResponseQueue.h"

@interface MFSyncResponseQueue : MFBaseSyncResponseQueue {
    BOOL _shouldSyncFlags;
}




-(BOOL)addItem:(id)arg0 ;
-(BOOL)shouldSyncFlags;


@end


#endif