// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPPAIRINGSTATE_H
#define SPPAIRINGSTATE_H

@class NSUUID, NSData, NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPPairingState : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSUUID *beaconIdentifier; // ivar: _beaconIdentifier
@property (copy, nonatomic) NSData *macAddress; // ivar: _macAddress
@property (copy, nonatomic) NSNumber *pairingEpoch; // ivar: _pairingEpoch
@property (nonatomic) NSInteger pairingType; // ivar: _pairingType
@property (nonatomic) unsigned char partId; // ivar: _partId
@property (nonatomic) NSInteger status; // ivar: _status


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStatus:(NSInteger)arg0 beaconIdentifier:(id)arg1 macAddress:(id)arg2 pairingEpoch:(id)arg3 partId:(unsigned char)arg4 pairingType:(NSInteger)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif