// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HKFITNESSMACHINESESSIONCONFIGURATION_H
#define _HKFITNESSMACHINESESSIONCONFIGURATION_H

@class NSUUID, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _HKFitnessMachineSessionConfiguration : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUUID *connectionUUID; // ivar: _connectionUUID
@property (readonly, nonatomic) NSString *machineBrand; // ivar: _machineBrand
@property (readonly, nonatomic) NSString *machineName; // ivar: _machineName
@property (readonly, nonatomic) NSUInteger machineType; // ivar: _machineType
@property (readonly, nonatomic) NSUUID *machineUUID; // ivar: _machineUUID
@property (readonly, nonatomic) NSUUID *sessionUUID; // ivar: _sessionUUID


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif