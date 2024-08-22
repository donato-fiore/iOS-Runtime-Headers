// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUINSTALLATIONCONSTRAINTMONITORDRIVING_H
#define SUINSTALLATIONCONSTRAINTMONITORDRIVING_H



#import "SUInstallationConstraintMonitorBase.h"

@interface SUInstallationConstraintMonitorDriving : SUInstallationConstraintMonitorBase {
    BOOL _queue_isDriving;
}




-(NSUInteger)unsatisfiedConstraints;
-(id)initOnQueue:(id)arg0 withDownload:(id)arg1 ;
-(void)_handleVehicularStateChangeNotification:(id)arg0 ;
-(void)_queue_pollSatisfied;


@end


#endif