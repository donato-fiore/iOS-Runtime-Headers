// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BPSAPPLEPAYLOCALLYSTOREDVALUEMANAGER_H
#define BPSAPPLEPAYLOCALLYSTOREDVALUEMANAGER_H


#import <Foundation/Foundation.h>


@interface BPSApplePayLocallyStoredValueManager : NSObject



+(id)remoteLocallyStoredValuePassNames;
+(void)_attemptToMarkAllAppletsForDeletionWithCompletion:(id)arg0 ;
+(void)_presentApplePayLocallyStoredValueWarningInController:(id)arg0 unableToConnect:(BOOL)arg1 legacyDevice:(BOOL)arg2 withCompletion:(id)arg3 ;
+(void)presentApplePayLocallyStoredValueOfflineWarningIfNeededInController:(id)arg0 forPairedDevice:(id)arg1 withCompletion:(id)arg2 ;


@end


#endif