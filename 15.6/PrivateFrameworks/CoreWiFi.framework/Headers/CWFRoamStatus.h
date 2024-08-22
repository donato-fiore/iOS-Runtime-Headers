// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CWFROAMSTATUS_H
#define CWFROAMSTATUS_H

@class NSData, NSUUID, NSDate, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CWFRoamStatus : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSData *SSID; // ivar: _SSID
@property (copy, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (copy, nonatomic) NSDate *endedAt; // ivar: _endedAt
@property (copy, nonatomic) NSString *fromBSSID; // ivar: _fromBSSID
@property (nonatomic) NSUInteger fromChannel; // ivar: _fromChannel
@property (nonatomic) NSInteger fromRSSI; // ivar: _fromRSSI
@property (copy, nonatomic) NSString *interfaceName; // ivar: _interfaceName
@property (readonly, copy, nonatomic) NSString *networkName;
@property (copy, nonatomic) NSString *originOUI; // ivar: _originOUI
@property (nonatomic) int reason; // ivar: _reason
@property (copy, nonatomic) NSDate *startedAt; // ivar: _startedAt
@property (nonatomic) NSInteger status; // ivar: _status
@property (copy, nonatomic) NSString *targetOUI; // ivar: _targetOUI
@property (copy, nonatomic) NSString *toBSSID; // ivar: _toBSSID
@property (nonatomic) NSUInteger toChannel; // ivar: _toChannel
@property (nonatomic) NSInteger toRSSI; // ivar: _toRSSI


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRoamStatus:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif