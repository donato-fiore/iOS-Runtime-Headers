// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PRREMOTEDEVICE_H
#define PRREMOTEDEVICE_H

@class NSUUID, NSData;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PRRemoteDevice : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (copy, nonatomic) NSData *btAdvAddress; // ivar: _btAdvAddress
@property (nonatomic) NSInteger deviceType; // ivar: _deviceType
@property (copy, nonatomic) NSData *roseMACAddress; // ivar: _roseMACAddress


+(BOOL)supportsSecureCoding;
-(BOOL)compareField:(id)arg0 to:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBTAdvAddress:(id)arg0 ;
-(id)initWithBeaconUUID:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCompanionUUID:(id)arg0 ;
-(id)initWithRoseMACAddress:(id)arg0 ;
-(id)initWithTestCompanionBtAdvAddress:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif