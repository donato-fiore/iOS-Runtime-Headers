// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSHANDLER_H
#define STSHANDLER_H

@class NSData;
@protocol NFSession;

#import <Foundation/Foundation.h>

#import "STSCredential.h"
#import "STSHardwareManagerWrapper.h"

@interface STSHandler : NSObject

@property (readonly, nonatomic) STSCredential *activeSTSCredential; // ivar: _activeSTSCredential
@property (retain, nonatomic) NSData *handoffToken; // ivar: _handoffToken
@property (retain, nonatomic) STSHardwareManagerWrapper *nfHwManager; // ivar: _nfHwManager
@property (retain, nonatomic) NSObject<NFSession> *startedNFSession; // ivar: _startedNFSession
@property (readonly, nonatomic) unsigned char supportedCredentialType;


-(id)activateWithHandoffToken:(id)arg0 ;
-(id)nfHardwareManager;
-(id)setActiveCredential:(id)arg0 ;
-(id)startNFSessionWithCompletion:(id)arg0 ;
-(void)_tearDown;
-(void)tearDownWithCompletion:(id)arg0 ;


@end


#endif