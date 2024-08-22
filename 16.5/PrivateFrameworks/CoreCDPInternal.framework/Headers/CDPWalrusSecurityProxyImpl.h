// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPWALRUSSECURITYPROXYIMPL_H
#define CDPWALRUSSECURITYPROXYIMPL_H

@class CDPContext, OTClique, NSString;
@protocol CDPWalrusSecurityProxy;

#import <Foundation/Foundation.h>

#import "CDPDSecureBackupController.h"

@interface CDPWalrusSecurityProxyImpl : NSObject <CDPWalrusSecurityProxy>

 {
    CDPContext *_context;
    CDPDSecureBackupController *_backupController;
    OTClique *_clique;
    os_unfair_lock_s _accountSettingsLock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)init;
-(id)initWithContext:(id)arg0 ;
-(void)setWebAccessStatusEnabled:(BOOL)arg0 completion:(id)arg1 ;
-(void)webAccessStatusWithCompletion:(id)arg0 ;


@end


#endif