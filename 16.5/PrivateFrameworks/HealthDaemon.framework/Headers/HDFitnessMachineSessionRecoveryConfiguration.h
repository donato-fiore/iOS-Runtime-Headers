// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDFITNESSMACHINESESSIONRECOVERYCONFIGURATION_H
#define HDFITNESSMACHINESESSIONRECOVERYCONFIGURATION_H

@class NSString, NSDate, NSUUID, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HDFitnessMachineSessionRecoveryConfiguration : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger activityType; // ivar: _activityType
@property (copy, nonatomic) NSString *machineBrand; // ivar: _machineBrand
@property (readonly, copy, nonatomic) NSString *machineName; // ivar: _machineName
@property (readonly, nonatomic) NSDate *machinePreferredUntilDate; // ivar: _machinePreferredUntilDate
@property (readonly, nonatomic) NSDate *machineStartDate; // ivar: _machineStartDate
@property (readonly, nonatomic) NSUInteger machineType; // ivar: _machineType
@property (readonly, nonatomic) NSUUID *machineUUID; // ivar: _machineUUID
@property (readonly, nonatomic) NSData *nfcSessionIDData; // ivar: _nfcSessionIDData
@property (readonly, nonatomic) NSUUID *sessionUUID; // ivar: _sessionUUID


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSessionUUID:(id)arg0 machineUUID:(id)arg1 machineType:(NSUInteger)arg2 machineName:(id)arg3 machineBrand:(id)arg4 activityType:(NSUInteger)arg5 machineStartDate:(id)arg6 machinePreferredUntilDate:(id)arg7 nfcSessionIDData:(id)arg8 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif