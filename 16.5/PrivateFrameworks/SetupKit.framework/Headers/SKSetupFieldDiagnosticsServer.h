// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKSETUPFIELDDIAGNOSTICSSERVER_H
#define SKSETUPFIELDDIAGNOSTICSSERVER_H

@class CBAdvertiser, CBServer;


#import "SKSetupBase.h"

@interface SKSetupFieldDiagnosticsServer : SKSetupBase {
    CBAdvertiser *_bleAdvertiser;
    CBServer *_bleServer;
    BOOL _completed;
}




-(BOOL)_bleAdvertiserShouldRun;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)init;
-(void)_activate;
-(void)_bleAdvertiserEnsureStarted;
-(void)_bleAdvertiserEnsureStopped;
-(void)_bleServerAcceptConnecton:(id)arg0 ;
-(void)_bleServerEnsureStarted;
-(void)_bleServerEnsureStopped;
-(void)_invalidate;
-(void)_oobEnsureStarted;
-(void)_prepareSteps;
-(void)_run;


@end


#endif