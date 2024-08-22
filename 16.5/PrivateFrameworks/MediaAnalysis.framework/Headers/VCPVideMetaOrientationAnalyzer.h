// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPVIDEMETAORIENTATIONANALYZER_H
#define VCPVIDEMETAORIENTATIONANALYZER_H

@class NSMutableArray;


#import "VCPVideoMetaAnalyzer.h"

@interface VCPVideMetaOrientationAnalyzer : VCPVideoMetaAnalyzer {
    NSMutableArray *_results;
}




-(id)init;
-(id)privateResults;
-(int)processMetadataGroup:(id)arg0 flags:(*NSUInteger)arg1 ;


@end


#endif