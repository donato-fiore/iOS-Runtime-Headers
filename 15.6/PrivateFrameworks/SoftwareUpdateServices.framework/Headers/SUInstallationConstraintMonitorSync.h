// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUINSTALLATIONCONSTRAINTMONITORSYNC_H
#define SUINSTALLATIONCONSTRAINTMONITORSYNC_H

@class ATConnection, NSString;
@protocol ATConnectionDelegate;


#import "SUInstallationConstraintMonitorBase.h"

@interface SUInstallationConstraintMonitorSync : SUInstallationConstraintMonitorBase <ATConnectionDelegate>

 {
    BOOL _queue_isSyncing;
    ATConnection *_queue_airTrafficConnection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)unsatisfiedConstraints;
-(id)initOnQueue:(id)arg0 withDownload:(id)arg1 ;
-(void)_queue_initilizaSyncState;
-(void)_queue_setSyncing:(BOOL)arg0 ;
-(void)connection:(id)arg0 updatedProgress:(id)arg1 ;
-(void)connectionWasInterrupted:(id)arg0 ;
-(void)dealloc;


@end


#endif