// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCROIODOTPADELEMENT_H
#define SCROIODOTPADELEMENT_H

@class CBCentralManager, CBPeripheral, NSString;
@protocol SCROIOBTLESerialElementProtocol;


#import "SCROIOElement.h"

@interface SCROIODotPadElement : SCROIOElement <SCROIOBTLESerialElementProtocol>

 {
    CBCentralManager *_central;
    CBPeripheral *_peripheral;
    int _identifier;
}


@property (readonly, nonatomic) NSString *address;
@property (readonly, nonatomic) CBCentralManager *central;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) CBPeripheral *peripheral;
@property (readonly) Class superclass;


-(id)dotFamilyIdentifier;
-(id)initWithCentral:(id)arg0 peripheral:(id)arg1 ;
-(int)identifier;
-(int)transport;


@end


#endif