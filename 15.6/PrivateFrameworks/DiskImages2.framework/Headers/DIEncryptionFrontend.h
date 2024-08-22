// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DIENCRYPTIONFRONTEND_H
#define DIENCRYPTIONFRONTEND_H

@class NSString, NSUUID;
@protocol NSSecureCoding, NSCoding;

#import <Foundation/Foundation.h>

#import "DIBaseParams.h"

@interface DIEncryptionFrontend : NSObject <NSSecureCoding, NSCoding>



@property (readonly, copy, nonatomic) NSString *CLIPassphrasePrompt; // ivar: _CLIPassphrasePrompt
@property (readonly, copy, nonatomic) NSString *CLIVerifyPassphrasePrompt; // ivar: _CLIVerifyPassphrasePrompt
@property (readonly, copy, nonatomic) NSString *GUIPassphraseLabel; // ivar: _GUIPassphraseLabel
@property (readonly, copy, nonatomic) NSString *GUIPassphrasePrompt; // ivar: _GUIPassphrasePrompt
@property (readonly, copy, nonatomic) NSString *GUIVerifyPassphraseLabel; // ivar: _GUIVerifyPassphraseLabel
@property (nonatomic) BOOL allowStoringInKeychain; // ivar: _allowStoringInKeychain
@property (readonly, nonatomic) DIBaseParams *diParams; // ivar: _diParams
@property (readonly, copy, nonatomic) NSUUID *encryptionUUID; // ivar: _encryptionUUID
@property (readonly, nonatomic) NSUInteger flags;


+(BOOL)hasGUIaccess;
+(BOOL)supportsSecureCoding;
+(BOOL)updateSystemKeychainAttrWithDict:(id)arg0 isStoring:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)GUIAskForPassphraseWithError:(*id)arg0 ;
-(BOOL)askPermissionWithRememberPassword:(*BOOL)arg0 error:(*id)arg1 ;
-(BOOL)checkWithHasIcloudKeychain:(*BOOL)arg0 error:(*id)arg1 ;
-(BOOL)consoleAskForPassphraseWithUseStdin:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)storeInKeychainWithPassphrase:(id)arg0 forceSystemKeychain:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)validateDeserializationWithError:(*id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithParams:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateDiskImageParamsWithFrontend:(id)arg0 error:(*id)arg1 ;


@end


#endif