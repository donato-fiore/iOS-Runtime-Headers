// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPPLUGINPROTOCOLOPERATION_H
#define CHIPPLUGINPROTOCOLOPERATION_H

@class HAPCharacteristic, CHIPDevice;

#import <Foundation/Foundation.h>

#import "CHIPPluginClusterDescription.h"

@interface CHIPPluginProtocolOperation : NSObject

@property (retain, nonatomic) HAPCharacteristic *characteristic; // ivar: _characteristic
@property (retain, nonatomic) CHIPPluginClusterDescription *characteristicDescription; // ivar: _characteristicDescription
@property (retain, nonatomic) CHIPDevice *device; // ivar: _device
@property (nonatomic) NSUInteger type; // ivar: _type
@property (retain, nonatomic) id *value; // ivar: _value


-(id)initWithOperationOfType:(NSUInteger)arg0 characteristic:(id)arg1 device:(id)arg2 ;
-(id)initWithOperationOfType:(NSUInteger)arg0 characteristic:(id)arg1 device:(id)arg2 primaryArgument:(id)arg3 ;
-(id)initWithOperationOfType:(NSUInteger)arg0 targetCharacteristic:(id)arg1 targetValue:(id)arg2 device:(id)arg3 ;


@end


#endif