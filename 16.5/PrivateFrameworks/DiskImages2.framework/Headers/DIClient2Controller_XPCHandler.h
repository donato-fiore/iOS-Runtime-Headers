// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DICLIENT2CONTROLLER_XPCHANDLER_H
#define DICLIENT2CONTROLLER_XPCHANDLER_H



#import "DIBaseXPCHandler.h"

@interface DIClient2Controller_XPCHandler : DIBaseXPCHandler



-(BOOL)GUIAskForPassphraseWithEncryptionFrontend:(id)arg0 error:(*id)arg1 ;
-(BOOL)connectWithError:(*id)arg0 ;
-(BOOL)createAndStoreInSystemKeychainWithCreator:(id)arg0 account:(id)arg1 error:(*id)arg2 ;
-(BOOL)keychainUnlockWithEncryptionUnlocker:(id)arg0 error:(*id)arg1 ;
-(id)newAttachWithParams:(id)arg0 error:(*id)arg1 ;
-(id)remoteObjectInterface;
-(id)serviceName;


@end


#endif