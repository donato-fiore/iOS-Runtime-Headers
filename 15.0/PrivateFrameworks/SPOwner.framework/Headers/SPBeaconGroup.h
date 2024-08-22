// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPBEACONGROUP_H
#define SPBEACONGROUP_H

@class NSSet, NSDictionary, NSUUID, NSData, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SPLostModeInfo.h"

@interface SPBeaconGroup : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSSet *beaconIdentifiers; // ivar: _beaconIdentifiers
@property (copy, nonatomic) NSDictionary *beaconMap; // ivar: _beaconMap
@property (nonatomic) NSInteger classification; // ivar: _classification
@property (copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (nonatomic) BOOL isClassicConnected; // ivar: _isClassicConnected
@property (nonatomic) BOOL isConnected; // ivar: _isConnected
@property (nonatomic) BOOL isFindMyNetworkEnabled; // ivar: _isFindMyNetworkEnabled
@property (nonatomic) BOOL isPairingComplete; // ivar: _isPairingComplete
@property (copy, nonatomic) SPLostModeInfo *lostModeInfo; // ivar: _lostModeInfo
@property (copy, nonatomic) NSData *macAddress; // ivar: _macAddress
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSInteger status; // ivar: _status
@property (copy, nonatomic) NSDictionary *taskInformation; // ivar: _taskInformation


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif