// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRCOREUTILSSYSTEMPAIRINGSESSION_H
#define MRCOREUTILSSYSTEMPAIRINGSESSION_H



#import "MRCoreUtilsPairingSession.h"

@interface MRCoreUtilsSystemPairingSession : MRCoreUtilsPairingSession



+(BOOL)systemPairingAvailable;
+(id)pairingManager;
-(BOOL)shouldAutoRetryPairingExchange:(id)arg0 ;
-(id)addPeer;
-(id)initializePairingSession:(struct PairingSessionPrivate *)arg0 ;
-(id)mediaRemotePairedDevices;
-(id)pairedPeerDevice;
-(id)pairedPeerDevices;
-(id)removePeer;
-(id)updatePeer;


@end


#endif