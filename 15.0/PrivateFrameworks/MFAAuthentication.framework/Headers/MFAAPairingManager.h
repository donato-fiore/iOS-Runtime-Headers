// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFAAPAIRINGMANAGER_H
#define MFAAPAIRINGMANAGER_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface MFAAPairingManager : NSObject

@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(id)sharedManager;
-(id)_init;
-(id)init;
-(void)addPairingWithToken:(id)arg0 completionHandler:(id)arg1 ;
-(void)generatePairingTokenWithCompletionHandler:(id)arg0 ;
-(void)removePairingWithToken:(id)arg0 completionHandler:(id)arg1 ;
-(void)verifyPairingWithToken:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif