// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ENTEMPORARYEXPOSUREKEY_H
#define ENTEMPORARYEXPOSUREKEY_H

@class NSData;
@protocol CUXPCCodable;

#import <Foundation/Foundation.h>


@interface ENTemporaryExposureKey : NSObject <CUXPCCodable>



@property (nonatomic) NSInteger daysSinceOnsetOfSymptoms; // ivar: _daysSinceOnsetOfSymptoms
@property (nonatomic) unsigned int diagnosisReportType; // ivar: _diagnosisReportType
@property (copy, nonatomic) NSData *keyData; // ivar: _keyData
@property (nonatomic) BOOL revised; // ivar: _revised
@property (nonatomic) unsigned int rollingPeriod; // ivar: _rollingPeriod
@property (nonatomic) unsigned int rollingStartNumber; // ivar: _rollingStartNumber
@property (nonatomic) unsigned char transmissionRiskLevel; // ivar: _transmissionRiskLevel
@property (nonatomic) BOOL vaccinated; // ivar: _vaccinated
@property (readonly, nonatomic, getter=isValid) BOOL valid;


-(id)description;
-(id)init;
-(id)initWithXPCObject:(id)arg0 error:(*id)arg1 ;
-(void)deriveRollingProximityIdentifiersWithBuffer:(struct ? *)arg0 count:(NSUInteger)arg1 ;
-(void)encodeWithXPCObject:(id)arg0 ;
-(void)getAEMBytes:(*void)arg0 input:(*void)arg1 length:(NSUInteger)arg2 RPI:(struct ? *)arg3 ;


@end


#endif