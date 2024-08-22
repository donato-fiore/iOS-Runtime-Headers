// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CBPAIRINGAGENT_H
#define CBPAIRINGAGENT_H

@protocol CBPairingAgentDelegate, CBPairingAgentParentDelegate;

#import <Foundation/Foundation.h>


@interface CBPairingAgent : NSObject

@property (weak, nonatomic) NSObject<CBPairingAgentDelegate> *delegate; // ivar: _delegate
@property (weak, nonatomic) NSObject<CBPairingAgentParentDelegate> *parentManager; // ivar: _parentManager
@property (nonatomic) BOOL useOOBMode; // ivar: _useOOBMode


-(BOOL)isPeerCloudPaired:(id)arg0 ;
-(BOOL)isPeerMagicPaired:(id)arg0 ;
-(BOOL)isPeerPaired:(id)arg0 ;
-(id)initWithParentManager:(id)arg0 ;
-(id)retrieveOOBDataForPeer:(id)arg0 ;
-(id)retrievePairedPeers;
-(void)dealloc;
-(void)handlePairingCompleted:(id)arg0 ;
-(void)handlePairingMessage:(unsigned short)arg0 args:(id)arg1 ;
-(void)handlePairingRequested:(id)arg0 ;
-(void)handleUnpaired:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pairPeer:(id)arg0 ;
-(void)pairPeer:(id)arg0 options:(id)arg1 ;
-(void)pairPeer:(id)arg0 useMITM:(BOOL)arg1 ;
-(void)respondToPairingRequest:(id)arg0 type:(NSInteger)arg1 accept:(BOOL)arg2 data:(id)arg3 ;
-(void)setOOBPairingEnabled:(BOOL)arg0 forPeer:(id)arg1 ;
-(void)unpairPeer:(id)arg0 ;
-(void)unpairPeer:(id)arg0 options:(id)arg1 ;
-(void)updateRegistration;


@end


#endif