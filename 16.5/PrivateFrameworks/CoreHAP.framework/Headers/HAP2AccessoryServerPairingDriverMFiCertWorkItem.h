// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAP2ACCESSORYSERVERPAIRINGDRIVERMFICERTWORKITEM_H
#define HAP2ACCESSORYSERVERPAIRINGDRIVERMFICERTWORKITEM_H

@class NSError;


#import "HAP2AccessoryServerPairingDriverWorkItem.h"

@interface HAP2AccessoryServerPairingDriverMFiCertWorkItem : HAP2AccessoryServerPairingDriverWorkItem

@property (retain, nonatomic) NSError *cancelError; // ivar: _cancelError


+(id)checkCertificate;
-(void)cancelWithError:(id)arg0 ;
-(void)runForPairingDriver:(id)arg0 ;


@end


#endif