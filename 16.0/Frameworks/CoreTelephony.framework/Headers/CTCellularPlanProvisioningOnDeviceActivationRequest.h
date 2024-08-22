// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CTCELLULARPLANPROVISIONINGONDEVICEACTIVATIONREQUEST_H
#define CTCELLULARPLANPROVISIONINGONDEVICEACTIVATIONREQUEST_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTCellularPlanProvisioningOnDeviceActivationRequest : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSString *eid; // ivar: _eid
@property (retain, nonatomic) NSString *flowType; // ivar: _flowType
@property (retain, nonatomic) NSString *gid1; // ivar: _gid1
@property (retain, nonatomic) NSString *gid2; // ivar: _gid2
@property (retain, nonatomic) NSString *iccid; // ivar: _iccid
@property (nonatomic) BOOL isESim; // ivar: _isESim
@property (retain, nonatomic) NSString *mcc; // ivar: _mcc
@property (retain, nonatomic) NSString *mnc; // ivar: _mnc
@property (retain, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber
@property (retain, nonatomic) NSString *smdpAddress; // ivar: _smdpAddress
@property (retain, nonatomic) NSString *sourceIccid; // ivar: _sourceIccid
@property (retain, nonatomic) NSString *unusableIccid; // ivar: _unusableIccid
@property (nonatomic) BOOL useDS; // ivar: _useDS


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDetails:(id)arg0 installIccid:(id)arg1 sourceIccid:(id)arg2 unusableIccid:(id)arg3 phoneNumber:(id)arg4 mcc:(id)arg5 mnc:(id)arg6 gid1:(id)arg7 gid2:(id)arg8 smdp:(id)arg9 useDS:(BOOL)arg10 esim:(BOOL)arg11 ;
-(id)initWithDetails:(id)arg0 installIccid:(id)arg1 sourceIccid:(id)arg2 unusableIccid:(id)arg3 phoneNumber:(id)arg4 mcc:(id)arg5 mnc:(id)arg6 gid1:(id)arg7 gid2:(id)arg8 smdp:(id)arg9 useDS:(BOOL)arg10 esim:(BOOL)arg11 flowType:(id)arg12 ;
-(id)initWithEid:(id)arg0 installIccid:(id)arg1 sourceIccid:(id)arg2 phoneNumber:(id)arg3 mcc:(id)arg4 mnc:(id)arg5 gid1:(id)arg6 gid2:(id)arg7 smdp:(id)arg8 useDS:(BOOL)arg9 esim:(BOOL)arg10 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif