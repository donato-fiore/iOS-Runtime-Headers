// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFAIRDROPTRANSFEROBSERVER_H
#define SFAIRDROPTRANSFEROBSERVER_H

@class NSString, NSMutableDictionary;
@protocol SFAirDropTransferObserverProtocol, SFAirDropTransferObserverDelegate;


#import "SFXPCClient.h"

@interface SFAirDropTransferObserver : SFXPCClient <SFAirDropTransferObserverProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SFAirDropTransferObserverDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain) NSMutableDictionary *transferIdentifierToTransfer; // ivar: _transferIdentifierToTransfer


-(BOOL)shouldEscapeXpcTryCatch;
-(id)exportedInterface;
-(id)init;
-(id)machServiceName;
-(id)remoteObjectInterface;
-(void)_getRemoteObjectProxyOnQueue:(id)arg0 ;
-(void)activate;
-(void)invalidate;
-(void)observeForLocalOnlyPropertiesOnTransfer:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeObserverForLocalOnlyPropertiesOnTransfer:(id)arg0 ;
-(void)removedTransfer:(id)arg0 ;
-(void)updateActionHandlersOnTransfer:(id)arg0 ;
-(void)updatedTransfer:(id)arg0 ;


@end


#endif