// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPPAIRINGSTATE_H
#define SPPAIRINGSTATE_H

@class NSUUID;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPPairingState : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSUUID *beaconIdentifier; // ivar: _beaconIdentifier
@property (nonatomic) NSInteger status; // ivar: _status


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStatus:(NSInteger)arg0 beaconIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif