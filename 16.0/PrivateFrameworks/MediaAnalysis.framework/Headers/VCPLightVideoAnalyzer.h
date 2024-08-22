// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPLIGHTVIDEOANALYZER_H
#define VCPLIGHTVIDEOANALYZER_H

@class AVAsset, NSArray, NSMutableDictionary, NSDictionary;

#import <Foundation/Foundation.h>


@interface VCPLightVideoAnalyzer : NSObject {
    NSUInteger _requestedAnalyses;
    AVAsset *_avAsset;
    CGAffineTransform _transform;
    NSArray *_metaTracks;
    NSMutableDictionary *_publicMutableResults;
    NSMutableDictionary *_privateMutableResults;
}


@property (readonly, nonatomic) NSDictionary *privateResults;
@property (readonly, nonatomic) NSDictionary *publicResults;


-(id)findMetaTrackforType:(id)arg0 ;
-(id)initWithAVAsset:(id)arg0 forAnalysisTypes:(NSUInteger)arg1 ;
// -(int)analyzeAsset:(id)arg0 flags:(unk)arg1  ;
-(int)checkTimeRangeConsistency;
-(int)postProcessOrientationResults;
// -(int)processMetaTrackForType:(id)arg0 cancel:(id)arg1 flags:(unk)arg2  ;


@end


#endif