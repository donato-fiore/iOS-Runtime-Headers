// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFREMOTEHOTSPOTDEVICE_H
#define SFREMOTEHOTSPOTDEVICE_H

@class NSData, NSNumber, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SFRemoteHotspotDevice : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSData *advertisementData; // ivar: _advertisementData
@property (retain) NSNumber *batteryLife; // ivar: _batteryLife
@property (copy) NSString *deviceIdentifier; // ivar: _deviceIdentifier
@property (copy) NSString *deviceName; // ivar: _deviceName
@property NSInteger group; // ivar: _group
@property BOOL hasDuplicates; // ivar: _hasDuplicates
@property (retain) NSString *model; // ivar: _model
@property unsigned char networkType; // ivar: _networkType
@property BOOL osSupportsAutoHotspot; // ivar: _osSupportsAutoHotspot
@property (retain) NSNumber *signalStrength; // ivar: _signalStrength
@property (nonatomic) BOOL supportsCompanionLink; // ivar: _supportsCompanionLink


+(BOOL)supportsSecureCoding;
-(BOOL)componentsAreEqualTo:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)batteryLifeFromInfo:(unsigned int)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 identifier:(id)arg1 advertisement:(struct ? )arg2 ;
-(id)signalStrengthFromInfo:(unsigned int)arg0 ;
-(unsigned char)networkTypeForIncomingType:(unsigned char)arg0 ;
-(unsigned char)networkTypeFromInfo:(unsigned int)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithHotspotInfo:(unsigned int)arg0 ;


@end


#endif