// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPUICUSTODIANRECOVERYCONTROLLER_H
#define CDPUICUSTODIANRECOVERYCONTROLLER_H

@class CDPContext, NSString, AACustodianController;

#import <Foundation/Foundation.h>


@interface CDPUICustodianRecoveryController : NSObject {
    CDPContext *_context;
    NSString *_recoverySession;
    AACustodianController *_custodianController;
}




-(id)initWithContext:(id)arg0 ;
-(void)_fetchRecoveryInfoWithCompletion:(id)arg0 ;
-(void)startRecoverySessionWithCompletion:(id)arg0 ;
-(void)validateRecoveryCode:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif