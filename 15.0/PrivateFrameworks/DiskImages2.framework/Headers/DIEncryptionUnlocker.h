// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DIENCRYPTIONUNLOCKER_H
#define DIENCRYPTIONUNLOCKER_H



#import "DIEncryptionFrontend.h"

@interface DIEncryptionUnlocker : DIEncryptionFrontend



+(BOOL)supportsSecureCoding;
-(BOOL)keychainUnlockWithError:(*id)arg0 ;
-(BOOL)keychainUnlockWithIsSystemKeychain:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)lookupLegacyKeychainWithXpcHandler:(id)arg0 error:(*id)arg1 ;
-(BOOL)unlockWithXpcHandler:(id)arg0 error:(*id)arg1 ;
-(id)CLIPassphrasePrompt;
-(id)GUIPassphraseLabel;
-(id)GUIPassphrasePrompt;


@end


#endif