// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCLOUDSYNCMANAGERDISCARDCACHEDOWNERIDENTIFIERSTASK_H
#define HDCLOUDSYNCMANAGERDISCARDCACHEDOWNERIDENTIFIERSTASK_H



#import "HDCloudSyncManagerTask.h"
#import "HDDaemon.h"

@interface HDCloudSyncManagerDiscardCachedOwnerIdentifiersTask : HDCloudSyncManagerTask {
    HDDaemon *_daemon;
}




-(id)initWithDaemon:(id)arg0 ;
-(void)main;


@end


#endif