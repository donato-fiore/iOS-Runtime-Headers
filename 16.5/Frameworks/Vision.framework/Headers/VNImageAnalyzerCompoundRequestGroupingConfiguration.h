// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNIMAGEANALYZERCOMPOUNDREQUESTGROUPINGCONFIGURATION_H
#define VNIMAGEANALYZERCOMPOUNDREQUESTGROUPINGCONFIGURATION_H

@class NSMutableArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface VNImageAnalyzerCompoundRequestGroupingConfiguration : NSObject {
    NSMutableArray *_originalRequests;
    NSMutableDictionary *_kindToOriginalRequestsMapping;
    NSMutableDictionary *_detectorConfigurationOptions;
}




-(id)init;
-(void)addTilingWarningRecorder:(id)arg0 ;


@end


#endif