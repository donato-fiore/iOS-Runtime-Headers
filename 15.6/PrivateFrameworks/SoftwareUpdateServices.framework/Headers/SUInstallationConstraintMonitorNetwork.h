// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUINSTALLATIONCONSTRAINTMONITORNETWORK_H
#define SUINSTALLATIONCONSTRAINTMONITORNETWORK_H

@class NSString;
@protocol SUNetworkObserver;


#import "SUInstallationConstraintMonitorBase.h"
#import "SUNetworkMonitor.h"

@interface SUInstallationConstraintMonitorNetwork : SUInstallationConstraintMonitorBase <SUNetworkObserver>

 {
    SUNetworkMonitor *_queue_networkMonitor;
    BOOL _queue_hasNetwork;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)unsatisfiedConstraints;
-(id)initOnQueue:(id)arg0 withDownload:(id)arg1 ;
-(id)initOnQueue:(id)arg0 withDownload:(id)arg1 networkMonitor:(id)arg2 ;
-(void)_queue_networkDidChange;
-(void)dealloc;
-(void)networkChangedFromNetworkType:(int)arg0 toNetworkType:(int)arg1 ;


@end


#endif