// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKAUDIOPLAYER_H
#define NPKAUDIOPLAYER_H


#import <Foundation/Foundation.h>


@interface NPKAudioPlayer : NSObject



+(void)_playSoundsWithFallbackHapticIfNecessaryForSoundIdentifier:(unsigned int)arg0 ;
+(void)_playSoundsWithIdentifier:(unsigned int)arg0 ;
+(void)playAccessScanCompleteHaptic;
+(void)playIdentityReaderConnectionCompleteHaptic;
+(void)playIdentityReaderConnectionStartHaptic;
+(void)playInAppPaymentFailureHaptic;
+(void)playInAppPaymentSuccessHaptic;
+(void)playProvisioningFailureHaptic;
+(void)playProvisioningSuccessHaptic;
+(void)playSessionStartFailureHaptic;
+(void)playSessionTimeoutHaptic;
+(void)playTerminalRequestedAuthenticationHaptic;
+(void)playTransactionAuthenticationHaptic;
+(void)playTransactionFailureHaptic;
+(void)playTransactionSuccessHaptic;
+(void)playWarsawHaptic;


@end


#endif