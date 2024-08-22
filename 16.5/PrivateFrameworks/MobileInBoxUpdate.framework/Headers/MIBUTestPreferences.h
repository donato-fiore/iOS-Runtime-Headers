// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MIBUTESTPREFERENCES_H
#define MIBUTESTPREFERENCES_H


#import <Foundation/Foundation.h>


@interface MIBUTestPreferences : NSObject



+(id)sharedInstance;
-(BOOL)factorySUCertExist;
-(BOOL)inBoxUpdateMode;
-(BOOL)skipCertDeletion;
-(BOOL)skipDaemonDisable;
-(BOOL)skipWiFiAssociation;
-(BOOL)useAppleConnect;
-(BOOL)useLiveTatsu;
-(id)factorySUCertPath;
-(id)factorySUKeyIsSEP;
-(id)factorySUKeyPath;
-(id)fakeTatsuPayloadPath;
-(id)getValueFromTestPreferencesForKey:(id)arg0 ;
-(id)initialBuddySetupComplete;
-(id)isActivated;
-(id)isOnLockScreen;
-(id)iseTrustCertName;
-(id)iseTrustCertPaths;
-(id)nfcIdleTime;
-(id)wifiSSID;


@end


#endif