// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUINSTALLATIONCONSTRAINTMONITORRESTOREFROMICLOUD_H
#define SUINSTALLATIONCONSTRAINTMONITORRESTOREFROMICLOUD_H



#import "SUInstallationConstraintMonitorBase.h"

@interface SUInstallationConstraintMonitorRestoreFromICloud : SUInstallationConstraintMonitorBase {
    BOOL _queue_isRestoring;
    int _queue_restoreToken;
}




-(NSUInteger)unsatisfiedConstraints;
-(id)initOnQueue:(id)arg0 withDownload:(id)arg1 ;
-(void)_queue_restoreStateChanged;
-(void)dealloc;


@end


#endif