// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DIENCRYPTIONCREATOR_H
#define DIENCRYPTIONCREATOR_H



#import "DIEncryptionFrontend.h"

@interface DIEncryptionCreator : DIEncryptionFrontend



+(BOOL)supportsSecureCoding;
-(BOOL)allowStoringInKeychain;
-(BOOL)createAndStoreInSystemKeychainWithAccount:(id)arg0 error:(*id)arg1 ;
-(BOOL)createWithXpcHandler:(id)arg0 error:(*id)arg1 ;
-(id)CLIPassphrasePrompt;
-(id)CLIVerifyPassphrasePrompt;
-(id)GUIPassphraseLabel;
-(id)GUIPassphrasePrompt;
-(id)GUIVerifyPassphraseLabel;


@end


#endif