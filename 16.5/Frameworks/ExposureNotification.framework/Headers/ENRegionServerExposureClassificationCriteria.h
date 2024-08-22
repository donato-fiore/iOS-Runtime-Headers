// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ENREGIONSERVEREXPOSURECLASSIFICATIONCRITERIA_H
#define ENREGIONSERVEREXPOSURECLASSIFICATIONCRITERIA_H

@class NSString, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ENRegionServerExposureClassificationCriteria : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSString *classificationName; // ivar: _classificationName
@property (readonly, nonatomic) unsigned char index; // ivar: _index
@property (readonly, nonatomic) unsigned int perDayMaxERVThreshold; // ivar: _perDayMaxERVThreshold
@property (readonly, nonatomic) unsigned int perDaySumERVThreshold; // ivar: _perDaySumERVThreshold
@property (readonly, copy, nonatomic) NSDictionary *perDaySumERVThresholdsByDiagnosisReportType; // ivar: _perDaySumERVThresholdsByDiagnosisReportType
@property (readonly, nonatomic) unsigned int weightedDurationAtAttenuationThreshold; // ivar: _weightedDurationAtAttenuationThreshold


+(BOOL)getCriteria:(*id)arg0 fromDictionary:(id)arg1 index:(unsigned char)arg2 ;
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif