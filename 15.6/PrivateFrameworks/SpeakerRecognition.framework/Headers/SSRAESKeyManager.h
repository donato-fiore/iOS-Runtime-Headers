// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSRAESKEYMANAGER_H
#define SSRAESKEYMANAGER_H


#import <Foundation/Foundation.h>


@interface SSRAESKeyManager : NSObject



+(BOOL)deleteAESKeyWithApplicationTag:(id)arg0 keyLabel:(id)arg1 ;
+(BOOL)storeAESKeyInKeychain:(id)arg0 applicationTag:(id)arg1 keyLabel:(id)arg2 ;
+(id)generateAESKeyWithKeySizeInBits:(NSUInteger)arg0 ;
+(id)generateIfNecessaryAESKeyWithKeySizeInBits:(NSUInteger)arg0 applicationTag:(id)arg1 keyLabel:(id)arg2 shouldGenerateIfNecessary:(BOOL)arg3 ;
+(id)generateIfNecessaryVoiceTriggerProfilesAESKey;
+(id)getAESKeyFromKeychainWithApplicationTag:(id)arg0 keyLabel:(id)arg1 ;
+(id)getKeychainAttributesForAESKeyWithApplicationTag:(id)arg0 keyLabel:(id)arg1 ;
+(id)getVoiceTriggerProfilesAESKey;


@end


#endif