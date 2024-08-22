// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNIMAGEANALYZERCOMPOUNDREQUESTCONFIGURATION_H
#define VNIMAGEANALYZERCOMPOUNDREQUESTCONFIGURATION_H

@class NSDictionary, NSString, NSArray;


#import "VNRequestConfiguration.h"

@interface VNImageAnalyzerCompoundRequestConfiguration : VNRequestConfiguration

@property (copy, nonatomic) NSDictionary *detectorConfigurationOptions; // ivar: _detectorConfigurationOptions
@property (copy, nonatomic) NSString *detectorType; // ivar: _detectorType
@property (copy, nonatomic) NSArray *originalRequestConfigurations; // ivar: _originalRequestConfigurations


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif