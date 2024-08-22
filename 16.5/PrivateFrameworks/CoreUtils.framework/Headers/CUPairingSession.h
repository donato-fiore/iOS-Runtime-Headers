// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUPAIRINGSESSION_H
#define CUPAIRINGSESSION_H

@class NSMutableDictionary, NSDictionary, NSArray, NSString, NSData;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CUAppleIDClient.h"
#import "CUPairedPeer.h"

@interface CUPairingSession : NSObject {
    *PairingSessionPrivate _pairingSession;
    NSMutableDictionary *_pairingStreams;
    *LogCategory _ucat;
}


@property (copy, nonatomic) NSDictionary *acl; // ivar: _acl
@property (readonly, copy, nonatomic) NSDictionary *aclActual; // ivar: _aclActual
@property (copy, nonatomic) NSDictionary *additionalPeerInfo; // ivar: _additionalPeerInfo
@property (copy, nonatomic) NSDictionary *additionalSelfInfo; // ivar: _additionalSelfInfo
@property (copy, nonatomic) NSArray *allowedMACAddresses; // ivar: _allowedMACAddresses
@property (readonly, copy, nonatomic) NSDictionary *appInfoPeer;
@property (copy, nonatomic) NSDictionary *appInfoSelf; // ivar: _appInfoSelf
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (copy, nonatomic) id *copyIdentityHandler; // ivar: _copyIdentityHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *findPeerHandler; // ivar: _findPeerHandler
@property (copy, nonatomic) NSString *fixedPIN; // ivar: _fixedPIN
@property (nonatomic) unsigned int flags; // ivar: _flags
@property (copy, nonatomic) id *hidePINHandler; // ivar: _hidePINHandler
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) NSData *mfiCertificateData; // ivar: _mfiCertificateData
@property (copy, nonatomic) NSString *mfiProductType; // ivar: _mfiProductType
@property (copy, nonatomic) NSString *mfiSerialNumber; // ivar: _mfiSerialNumber
@property (copy, nonatomic) NSData *mfiToken; // ivar: _mfiToken
@property (copy, nonatomic) NSString *myAppleID; // ivar: _myAppleID
@property (retain, nonatomic) CUAppleIDClient *myAppleIDInfoClient; // ivar: _myAppleIDInfoClient
@property (readonly, nonatomic) CUPairedPeer *pairedPeer;
@property (readonly, nonatomic) NSUInteger peerAppFlags;
@property (copy, nonatomic) NSString *peerAppleID; // ivar: _peerAppleID
@property (readonly, copy, nonatomic) NSDictionary *peerInfo; // ivar: _peerInfo
@property (nonatomic) unsigned int pinType; // ivar: _pinType
@property (readonly, nonatomic) unsigned int pinTypeActual; // ivar: _pinTypeActual
@property (copy, nonatomic) id *promptForPINHandler; // ivar: _promptForPINHandler
@property (copy, nonatomic) id *savePeerHandler; // ivar: _savePeerHandler
@property (nonatomic) NSUInteger selfAppFlags; // ivar: _selfAppFlags
@property (copy, nonatomic) id *sendDataHandler; // ivar: _sendDataHandler
@property (nonatomic) unsigned int sessionType; // ivar: _sessionType
@property (copy, nonatomic) id *showPINHandler; // ivar: _showPINHandler
@property (copy, nonatomic) id *showPINHandlerEx; // ivar: _showPINHandlerEx
@property (copy, nonatomic) id *signDataHandler; // ivar: _signDataHandler
@property (copy, nonatomic) id *verifySignatureHandler; // ivar: _verifySignatureHandler


-(id)init;
-(id)openStreamWithName:(id)arg0 error:(*id)arg1 ;
-(id)openStreamWithName:(id)arg0 type:(int)arg1 error:(*id)arg2 ;
-(int)deriveKeyWithSaltPtr:(*void)arg0 saltLen:(NSUInteger)arg1 infoPtr:(*void)arg2 infoLen:(NSUInteger)arg3 keyLen:(NSUInteger)arg4 outputKeyPtr:(*void)arg5 ;
-(void)_activate;
-(void)_cleanup;
-(void)_completed:(id)arg0 ;
-(void)_receivedData:(id)arg0 flags:(unsigned int)arg1 ;
-(void)_tryPIN:(id)arg0 ;
-(void)activate;
-(void)closeStream:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)receivedData:(id)arg0 ;
-(void)tryPIN:(id)arg0 ;


@end


#endif