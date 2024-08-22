// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSNONFTGL_H
#define IDSNONFTGL_H



#import "IDSGlobalLink.h"

@interface IDSNonFTGL : IDSGlobalLink



-(BOOL)_isBetterCandidatePair:(id)arg0 newCandidatePair:(id)arg1 ;
-(BOOL)_processRemovedLocalAddressList:(id)arg0 ;
-(BOOL)_setupNewQRLinkIfNecessary:(id)arg0 ;
-(id)_nextConnectedCandidatePair;
-(void)_handleNewRATChange;
-(void)_handleNoRemotePacket;
-(void)_handleRemapping:(id)arg0 ;
-(void)_notifyCandidatePairConnected:(id)arg0 ;
-(void)_notifyCandidatePairDisconnected:(id)arg0 withReason:(unsigned char)arg1 ;
-(void)_notifyDefaultUnderlyingLinkChanged:(id)arg0 error:(NSInteger)arg1 ;
-(void)_selectBetterDefaultCandidatePair:(id)arg0 ;
-(void)_selectDefaultCandidatePair;
-(void)_setDefaultCandidatePairForNonFT;
-(void)_setFirstDefaultCandidatePair:(id)arg0 ;
-(void)_startHB:(id)arg0 ;
-(void)currentCellularSignalStrength:(*int)arg0 signalStrength:(*int)arg1 signalGrade:(*int)arg2 ;
-(void)disconnectWithCompletionHandler:(id)arg0 ;
-(void)dropIPPackets:(char)arg0 payloadArray:(id)arg1 ;
-(void)setPacketNotificationFilter:(char)arg0 uniqueTag:(unsigned int)arg1 isEnabled:(BOOL)arg2 ;
-(void)startWithOptions:(id)arg0 ;
-(void)stopKeepAlive:(id)arg0 ;
-(void)updateProtocolQualityOfService:(char)arg0 isGood:(BOOL)arg1 ;


@end


#endif