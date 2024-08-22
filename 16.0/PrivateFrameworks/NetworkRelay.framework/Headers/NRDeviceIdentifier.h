// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NRDEVICEIDENTIFIER_H
#define NRDEVICEIDENTIFIER_H

@class NSUUID;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface NRDeviceIdentifier : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) BOOL ephemeral; // ivar: _ephemeral
@property (copy, nonatomic) NSUUID *nrDeviceIdentifier; // ivar: _nrDeviceIdentifier


+(BOOL)supportsSecureCoding;
+(id)copyBestTestingDeviceIdentifier;
+(id)newDeviceIdentifierWithBluetoothUUID:(id)arg0 ;
+(id)newDeviceIdentifierWithIDSDeviceID:(id)arg0 ;
+(id)newEphemeralDeviceIdentifier;
-(BOOL)isEphemeral;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif