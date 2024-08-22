// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UARPDEPLOYMENTRULE_H
#define UARPDEPLOYMENTRULE_H

@class NSString, NSDate, NSArray, NSNumber;
@protocol NSCopying, NSSecureCoding, OS_os_log;

#import <Foundation/Foundation.h>


@interface UARPDeploymentRule : NSObject <NSCopying, NSSecureCoding>

 {
    NSObject<OS_os_log> *_log;
    NSString *_currentISOCountryCode;
    NSDate *_goLiveDate;
    NSArray *_countryList;
    NSNumber *_rampPeriod;
    NSNumber *_deploymentLimit;
    NSString *_testSerialNumber;
    NSNumber *_deploymentPercent;
    NSNumber *_deploymentDay;
    NSString *_serialNumber;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isDeploymentAllowed:(*id)arg0 ;
-(BOOL)isDeploymentAllowedPerCountryList;
-(BOOL)isDeploymentAllowedPerDeploymentLimit;
-(BOOL)isDeploymentAllowedPerGoLiveDate;
-(BOOL)isDeploymentAllowedPerRampPeriod;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deploymentDay;
-(id)deploymentPercent;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfig:(id)arg0 ;
-(id)testSerialNumber;
-(void)calculateDeploymentDay;
-(void)calculateDeploymentPercent;
-(void)createSerialNumber;
-(void)dumpWithTabDepth:(NSUInteger)arg0 dumpString:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setDeploymentDay:(id)arg0 ;
-(void)setDeploymentPercent:(id)arg0 ;
-(void)setTestSerialNumber:(id)arg0 ;


@end


#endif