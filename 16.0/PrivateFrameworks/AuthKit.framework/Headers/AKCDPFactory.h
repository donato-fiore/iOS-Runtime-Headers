// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKCDPFACTORY_H
#define AKCDPFACTORY_H


#import <Foundation/Foundation.h>


@interface AKCDPFactory : NSObject



+(BOOL)cdpAccountIsICDPEnabledForDSID:(id)arg0 ;
+(id)accountRecoveryControllerWithPresentingViewController:(id)arg0 ;
+(id)cdpErrorDomain;
+(id)cdpIDMSRecordMIDKey;
+(id)cdpIDMSRecordPRKKey;
+(id)cdpStateUIController;
+(id)cdpUIControllerWithPresentingViewController:(id)arg0 ;
+(id)context;
+(id)contextWithAuthResults:(id)arg0 ;
+(id)followUpController;
+(id)followUpRepairContext;
+(id)recoveryControllerWithContext:(id)arg0 ;
+(id)stateControllerWithContext:(id)arg0 ;


@end


#endif