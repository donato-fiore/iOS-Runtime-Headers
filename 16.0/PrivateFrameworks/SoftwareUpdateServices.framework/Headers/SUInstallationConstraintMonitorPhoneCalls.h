// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUINSTALLATIONCONSTRAINTMONITORPHONECALLS_H
#define SUINSTALLATIONCONSTRAINTMONITORPHONECALLS_H

@class TUCallCenter;


#import "SUInstallationConstraintMonitorBase.h"

@interface SUInstallationConstraintMonitorPhoneCalls : SUInstallationConstraintMonitorBase {
    TUCallCenter *_queue_callCenter;
    BOOL _queue_satisfied;
    BOOL _inSpringBoard;
}




-(NSUInteger)unsatisfiedConstraints;
-(id)initOnQueue:(id)arg0 withDownload:(id)arg1 ;
-(id)initOnQueue:(id)arg0 withDownload:(id)arg1 callCenter:(id)arg2 inSpringBoard:(BOOL)arg3 onExistingPhoneCall:(BOOL)arg4 ;
-(void)_callStatusChanged;
-(void)_queue_noteOnExistingPhoneCallDidChange:(BOOL)arg0 ;
-(void)dealloc;


@end


#endif