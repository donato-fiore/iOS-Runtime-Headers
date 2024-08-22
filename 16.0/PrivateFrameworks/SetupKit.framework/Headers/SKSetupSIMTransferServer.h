// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKSETUPSIMTRANSFERSERVER_H
#define SKSETUPSIMTRANSFERSERVER_H

@class CBAdvertiser, CBServer;


#import "SKSetupBase.h"

@interface SKSetupSIMTransferServer : SKSetupBase {
    CBAdvertiser *_bleAdvertiser;
    CBServer *_bleServer;
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
-(void)_run;


@end


#endif