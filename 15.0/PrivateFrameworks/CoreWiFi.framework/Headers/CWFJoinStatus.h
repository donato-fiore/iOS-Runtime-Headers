// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CWFJOINSTATUS_H
#define CWFJOINSTATUS_H

@class NSDate, NSUUID, NSError, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CWFNetworkProfile.h"
#import "CWFScanResult.h"

@interface CWFJoinStatus : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) int EAP8021XClientStatus; // ivar: _EAP8021XClientStatus
@property (nonatomic) unsigned int EAP8021XControlMode; // ivar: _EAP8021XControlMode
@property (nonatomic) unsigned int EAP8021XControlState; // ivar: _EAP8021XControlState
@property (nonatomic) unsigned int EAP8021XSupplicantState; // ivar: _EAP8021XSupplicantState
@property (copy, nonatomic) NSDate *IPv4AssignedAt; // ivar: _IPv4AssignedAt
@property (copy, nonatomic) NSDate *IPv6AssignedAt; // ivar: _IPv6AssignedAt
@property (copy, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (copy, nonatomic) NSDate *associationEndedAt; // ivar: _associationEndedAt
@property (copy, nonatomic) NSDate *authenticationEndedAt; // ivar: _authenticationEndedAt
@property (nonatomic, getter=isAutoJoin) BOOL autoJoin; // ivar: _autoJoin
@property (copy, nonatomic) NSDate *endedAt; // ivar: _endedAt
@property (copy, nonatomic) NSError *error; // ivar: _error
@property (copy, nonatomic) NSString *interfaceName; // ivar: _interfaceName
@property (copy, nonatomic) CWFNetworkProfile *knownNetworkProfile; // ivar: _knownNetworkProfile
@property (copy, nonatomic) CWFScanResult *scanResult; // ivar: _scanResult
@property (copy, nonatomic) NSDate *startedAt; // ivar: _startedAt


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToJoinStatus:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif