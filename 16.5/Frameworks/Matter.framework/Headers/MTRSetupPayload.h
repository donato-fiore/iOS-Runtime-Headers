// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
@property (nonatomic) NSUInteger discoveryCapabilities; // ivar: _discoveryCapabilities
@property (copy, nonatomic) NSNumber *discriminator; // ivar: _discriminator
@property (nonatomic) BOOL hasShortDiscriminator; // ivar: _hasShortDiscriminator
@property (copy, nonatomic) NSNumber *productID; // ivar: _productID
@property (copy, nonatomic) NSNumber *rendezvousInformation;
@property (copy, nonatomic) NSString *serialNumber; // ivar: _serialNumber
@property (copy, nonatomic) NSNumber *setUpPINCode;
@property (copy, nonatomic) NSNumber *setupPasscode; // ivar: _setupPasscode
@property (copy, nonatomic) NSNumber *vendorID; // ivar: _vendorID
@property (copy, nonatomic) NSNumber *version; // ivar: _version


+(BOOL)isQRCode:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(NSUInteger)_unboxDiscoveryCapabilities:(id)arg0 ;
+(NSUInteger)generateRandomPIN;
+(id)_boxDiscoveryCapabilities:(NSUInteger)arg0 ;
+(id)generateRandomSetupPasscode;
+(id)new;
+(id)setupPayloadWithOnboardingPayload:(id)arg0 error:(*id)arg1 ;
+(struct Optional<chip::BitFlags<chip::RendezvousInformationFlag, unsigned char>> )convertDiscoveryCapabilities:(NSUInteger)arg0 ;
+(unsigned char)unconvertCommissioningFlow:(NSUInteger)arg0 ;
-(NSUInteger)convertCommissioningFlow:(unsigned char)arg0 ;
-(NSUInteger)convertRendezvousFlags:(*void)arg0 ;
-(id)getAllOptionalVendorData:(*id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSetupPasscode:(id)arg0 discriminator:(id)arg1 ;
-(id)initWithSetupPayload:(struct SetupPayload )arg0 ;
-(id)manualEntryCode;
-(id)qrCodeString:(*id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getSerialNumber:(struct SetupPayload )arg0 ;


@end


#endif