// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPSETUPPAYLOAD_H
#define CHIPSETUPPAYLOAD_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface CHIPSetupPayload : NSObject {
    SetupPayload _chipSetupPayload;
}


@property (nonatomic) NSUInteger commissioningFlow; // ivar: _commissioningFlow
@property (retain, nonatomic) NSNumber *discriminator; // ivar: _discriminator
@property (retain, nonatomic) NSNumber *productID; // ivar: _productID
@property (nonatomic) NSUInteger rendezvousInformation; // ivar: _rendezvousInformation
@property (retain, nonatomic) NSString *serialNumber; // ivar: _serialNumber
@property (retain, nonatomic) NSNumber *setUpPINCode; // ivar: _setUpPINCode
@property (retain, nonatomic) NSNumber *vendorID; // ivar: _vendorID
@property (retain, nonatomic) NSNumber *version; // ivar: _version


-(NSUInteger)convertCommissioningFlow:(unsigned char)arg0 ;
-(NSUInteger)convertRendezvousFlags:(struct BitFlags<chip::RendezvousInformationFlag, unsigned char> )arg0 ;
-(id)getAllOptionalVendorData:(*id)arg0 ;
-(id)initWithSetupPayload:(struct SetupPayload )arg0 ;
-(void)getSerialNumber:(struct SetupPayload )arg0 ;


@end


#endif