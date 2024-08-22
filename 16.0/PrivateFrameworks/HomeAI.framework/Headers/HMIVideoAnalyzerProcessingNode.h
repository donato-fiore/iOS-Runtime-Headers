// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMIVIDEOANALYZERPROCESSINGNODE_H
#define HMIVIDEOANALYZERPROCESSINGNODE_H



#import "HMIVideoProcessingNode.h"
#import "HMIVideoAnalyzerConfiguration.h"
#import "HMIVideoAnalyzerDynamicConfiguration.h"

@interface HMIVideoAnalyzerProcessingNode : HMIVideoProcessingNode

@property (readonly) HMIVideoAnalyzerConfiguration *configuration; // ivar: _configuration
@property (retain) HMIVideoAnalyzerDynamicConfiguration *dynamicConfiguration; // ivar: _dynamicConfiguration


-(id)initWithConfiguration:(id)arg0 ;


@end


#endif