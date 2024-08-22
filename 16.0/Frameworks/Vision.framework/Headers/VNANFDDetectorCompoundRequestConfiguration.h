// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNANFDDETECTORCOMPOUNDREQUESTCONFIGURATION_H
#define VNANFDDETECTORCOMPOUNDREQUESTCONFIGURATION_H

@class NSDictionary, NSString, NSMutableArray;


#import "VNRequestConfiguration.h"

@interface VNANFDDetectorCompoundRequestConfiguration : VNRequestConfiguration

@property (copy, nonatomic) NSDictionary *detectorConfigurationOptions; // ivar: _detectorConfigurationOptions
@property (copy, nonatomic) NSString *detectorType; // ivar: _detectorType
@property (readonly, nonatomic) NSMutableArray *originalRequests; // ivar: _originalRequests


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRequestClass:(Class)arg0 ;
-(void)setDetectorConfigurationOption:(id)arg0 value:(id)arg1 ;


@end


#endif