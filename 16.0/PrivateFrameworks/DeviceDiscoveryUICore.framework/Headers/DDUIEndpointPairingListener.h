// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DDUIENDPOINTPAIRINGLISTENER_H
#define DDUIENDPOINTPAIRINGLISTENER_H

@protocol DDUIEndpointPairingListeningTransport;

#import <Foundation/Foundation.h>


@interface DDUIEndpointPairingListener : NSObject

@property (retain, nonatomic) NSObject<DDUIEndpointPairingListeningTransport> *transport; // ivar: _transport


-(id)initWithTransport:(id)arg0 ;
// -(void)beginListeningWithErrorHandler:(id)arg0 pairingHandler:(unk)arg1 completion:(id)arg2  ;
-(void)checkIfUserNeedsReconfirmationForSession:(id)arg0 withServiceIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)createListenerMappingForSession:(id)arg0 withServiceIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)invalidate;


@end


#endif