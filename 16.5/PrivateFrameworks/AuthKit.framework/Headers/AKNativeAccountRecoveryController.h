// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKNATIVEACCOUNTRECOVERYCONTROLLER_H
#define AKNATIVEACCOUNTRECOVERYCONTROLLER_H

@class CDPRecoveryController, NSString;
@protocol CDPAuthProvider, CDPStateUIProvider;

#import <Foundation/Foundation.h>

#import "AKAccountRecoveryContext.h"

@interface AKNativeAccountRecoveryController : NSObject <CDPAuthProvider>

 {
    CDPRecoveryController *_recoveryController;
    AKAccountRecoveryContext *_recoveryContext;
    id<CDPStateUIProvider> *_cdpUiProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)shouldSendServerResponseForRecoveredInfo:(id)arg0 withRecoveryError:(id)arg1 ;
+(id)postBodyForiCSCServerUIResponseWithContext:(id)arg0 recoveryError:(id)arg1 ;
+(id)requestForRecoveryCompletionWithContext:(id)arg0 recoveredInfo:(id)arg1 recoveryError:(id)arg2 ;
-(id)_mapICSCRecoveryResultsToAuthKit:(id)arg0 ;
-(id)initWithContext:(id)arg0 uiProvider:(id)arg1 ;
-(void)cdpContext:(id)arg0 performSilentRecoveryTokenRenewal:(id)arg1 ;
-(void)cdpContext:(id)arg0 verifyMasterKey:(id)arg1 completion:(id)arg2 ;
-(void)dismissNativeRecoveryUIWithCompletion:(id)arg0 ;
-(void)presentNativeRecoveryUIWithCompletion:(id)arg0 ;


@end


#endif