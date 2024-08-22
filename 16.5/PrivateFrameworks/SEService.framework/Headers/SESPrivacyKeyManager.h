// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SESPRIVACYKEYMANAGER_H
#define SESPRIVACYKEYMANAGER_H


#import <Foundation/Foundation.h>


@interface SESPrivacyKeyManager : NSObject



+(id)sharedManager;
-(BOOL)deletePrivacyKey:(id)arg0 outError:(*id)arg1 ;
-(id)createPrivacyKeyForGroupIdentifier:(id)arg0 withOptions:(id)arg1 outError:(*id)arg2 ;
-(id)createPrivacyKeysForGroupIdentifier:(id)arg0 withOptions:(id)arg1 outError:(*id)arg2 ;
-(id)decryptPayload:(id)arg0 withGroupIdentifier:(id)arg1 outError:(*id)arg2 ;
-(id)encryptData:(id)arg0 scheme:(id)arg1 recipientPublicKey:(id)arg2 outError:(*id)arg3 ;
-(id)privacyKeysForGroupIdentifier:(id)arg0 privacyKeyIdentifier:(id)arg1 outError:(*id)arg2 ;


@end


#endif