// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUINSTALLATIONCONSTRAINTMONITORMEDIAPLAYING_H
#define SUINSTALLATIONCONSTRAINTMONITORMEDIAPLAYING_H

@protocol OS_dispatch_queue;


#import "SUInstallationConstraintMonitorBase.h"

@interface SUInstallationConstraintMonitorMediaPlaying : SUInstallationConstraintMonitorBase {
    BOOL _queue_mediaPlaying;
    NSObject<OS_dispatch_queue> *_mediaRemoteQueue;
}




-(NSUInteger)unsatisfiedConstraints;
-(id)initOnQueue:(id)arg0 withDownload:(id)arg1 ;
-(void)_handlePlaybackChangeNotification:(id)arg0 ;
-(void)_queue_pollSatisfied;
-(void)dealloc;


@end


#endif