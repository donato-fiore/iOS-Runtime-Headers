// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUINSTALLATIONCONSTRAINTMONITORRESTOREFROMITUNES_H
#define SUINSTALLATIONCONSTRAINTMONITORRESTOREFROMITUNES_H



#import "SUInstallationConstraintMonitorBase.h"

@interface SUInstallationConstraintMonitorRestoreFromITunes : SUInstallationConstraintMonitorBase {
    BOOL _queue_isRestoring;
    int _queue_startNotifyToken;
    int _queue_endNotifyToken;
}




-(NSUInteger)unsatisfiedConstraints;
-(id)initOnQueue:(id)arg0 withDownload:(id)arg1 ;
-(void)_queue_beganRestoring;
-(void)_queue_endedRestoring;
-(void)_queue_setRestoring:(BOOL)arg0 ;
-(void)dealloc;


@end


#endif