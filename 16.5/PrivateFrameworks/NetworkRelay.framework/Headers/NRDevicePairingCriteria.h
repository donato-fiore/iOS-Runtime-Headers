// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NRDEVICEPAIRINGCRITERIA_H
#define NRDEVICEPAIRINGCRITERIA_H

@class NSNumber;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface NRDevicePairingCriteria : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) NSUInteger deviceType; // ivar: _deviceType
@property (nonatomic) unsigned char pairingTransport; // ivar: _pairingTransport
@property (retain, nonatomic) NSNumber *rssi; // ivar: _rssi


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif