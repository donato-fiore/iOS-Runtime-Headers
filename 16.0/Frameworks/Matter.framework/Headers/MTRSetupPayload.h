// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRSETUPPAYLOAD_H
#define MTRSETUPPAYLOAD_H

@class NSNumber, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MTRSetupPayload : NSObject <NSSecureCoding>

 {
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


+(BOOL)supportsSecureCoding;
-(NSUInteger)convertCommissioningFlow:(unsigned char)arg0 ;
-(NSUInteger)convertRendezvousFlags:(struct BitFlags<chip::RendezvousInformationFlag, unsigned char> )arg0 ;
-(id)getAllOptionalVendorData:(*id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSetupPayload:(struct SetupPayload )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getSerialNumber:(struct SetupPayload )arg0 ;


@end


#endif