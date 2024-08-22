// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ENEXPOSUREDETECTIONDAEMONSESSIONSTATE_H
#define ENEXPOSUREDETECTIONDAEMONSESSIONSTATE_H

@class NSString, NSDictionary, NSDate, ENRegion;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ENExposureDetectionDaemonSessionState : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *clientSigningIdentity; // ivar: _clientSigningIdentity
@property (copy, nonatomic) NSDictionary *infectiousnessForDaysSinceOnsetOfSymptoms; // ivar: _infectiousnessForDaysSinceOnsetOfSymptoms
@property (copy, nonatomic) NSDate *infectiousnessForDaysSinceOnsetOfSymptomsChangeDate; // ivar: _infectiousnessForDaysSinceOnsetOfSymptomsChangeDate
@property (copy, nonatomic) ENRegion *region; // ivar: _region


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif