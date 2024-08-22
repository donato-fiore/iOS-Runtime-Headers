// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAP2ACCESSORYSERVERPAIRINGDRIVERTRANSPORTCONTROLWORKITEM_H
#define HAP2ACCESSORYSERVERPAIRINGDRIVERTRANSPORTCONTROLWORKITEM_H

@class NSError;


#import "HAP2AccessoryServerPairingDriverWorkItem.h"

@interface HAP2AccessoryServerPairingDriverTransportControlWorkItem : HAP2AccessoryServerPairingDriverWorkItem

@property (retain, nonatomic) NSError *cancelError; // ivar: _cancelError
@property (readonly, nonatomic) BOOL connect; // ivar: _connect


+(id)closeConnection;
+(id)openConnection;
-(id)initForClosing;
-(id)initForOpening;
-(id)initWithConnect:(BOOL)arg0 ;
-(void)_finishWithError:(id)arg0 ;
-(void)cancelWithError:(id)arg0 ;
-(void)runForPairingDriver:(id)arg0 ;


@end


#endif