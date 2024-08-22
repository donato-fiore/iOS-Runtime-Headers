// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACCBLEPAIRINGDELEGATEREFERENCE_H
#define ACCBLEPAIRINGDELEGATEREFERENCE_H

@protocol ACCBLEPairingProviderProtocol;

#import <Foundation/Foundation.h>

#import "ACCBLEPairingProvider.h"

@interface ACCBLEPairingDelegateReference : NSObject

@property (weak, nonatomic) NSObject<ACCBLEPairingProviderProtocol> *delegate; // ivar: _delegate
@property (weak, nonatomic) ACCBLEPairingProvider *provider; // ivar: _provider


-(id)initWithDelegate:(id)arg0 provider:(id)arg1 ;


@end


#endif