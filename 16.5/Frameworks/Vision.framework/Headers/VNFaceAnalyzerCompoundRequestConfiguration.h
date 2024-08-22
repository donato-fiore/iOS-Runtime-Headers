// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNFACEANALYZERCOMPOUNDREQUESTCONFIGURATION_H
#define VNFACEANALYZERCOMPOUNDREQUESTCONFIGURATION_H

@class NSMutableDictionary, NSString, NSMutableArray;


#import "VNRequestConfiguration.h"

@interface VNFaceAnalyzerCompoundRequestConfiguration : VNRequestConfiguration {
    NSMutableDictionary *_detectorConfigurationOptions;
}


@property (copy, nonatomic) NSString *detectorType; // ivar: _detectorType
@property (readonly, nonatomic) NSMutableArray *originalRequests; // ivar: _originalRequests


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)detectorConfigurationOptions;
-(id)initWithRequestClass:(Class)arg0 ;
-(void)setDetectorConfigurationOption:(id)arg0 value:(id)arg1 ;
-(void)setDetectorConfigurationOptions:(id)arg0 ;
-(void)setResolvedRevision:(NSUInteger)arg0 ;


@end


#endif