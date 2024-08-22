// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPEXIFANALYZER_H
#define VCPEXIFANALYZER_H

@class NSDictionary, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface VCPExifAnalyzer : NSObject {
    NSDictionary *_properties;
    NSUInteger _requestedAnalyses;
    NSMutableDictionary *_results;
}




-(id)initWithProperties:(id)arg0 forAnalysisTypes:(NSUInteger)arg1 ;
-(int)addFaceResults:(id)arg0 flags:(*NSUInteger)arg1 ;
-(int)analyzeAsset:(*NSUInteger)arg0 results:(*id)arg1 ;
-(struct CGAffineTransform )transformUprightAboutTopLeft:(unsigned int)arg0 ;


@end


#endif