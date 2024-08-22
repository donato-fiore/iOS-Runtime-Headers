// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDPRECOVERYTESTCONTROLLER_H
#define CDPRECOVERYTESTCONTROLLER_H

@class CDPDBackupInfoRecoveryFlowController, NSArray, UINavigationController;

#import <Foundation/Foundation.h>


@interface CDPRecoveryTestController : NSObject {
    CDPDBackupInfoRecoveryFlowController *_recoveryController;
    NSArray *_mockDevices;
    UINavigationController *_navController;
}




-(id)dummyRecoveryInfo;
-(id)initWithDevices:(id)arg0 andNavigationController:(id)arg1 ;
-(void)beginIDMSRecoveryFlow;
-(void)beginIDMSRecoveryFlowWithSecretFailure;
-(void)setUp;


@end


#endif