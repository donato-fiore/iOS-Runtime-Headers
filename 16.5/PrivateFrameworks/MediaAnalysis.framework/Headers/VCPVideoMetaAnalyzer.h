// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPVIDEOMETAANALYZER_H
#define VCPVIDEOMETAANALYZER_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface VCPVideoMetaAnalyzer : NSObject

@property (readonly, retain, nonatomic) NSDictionary *privateResults;
@property (readonly, retain, nonatomic) NSDictionary *publicResults;


+(id)analyzerForTrackType:(id)arg0 withTransform:(struct CGAffineTransform )arg1 requestAnalyses:(NSUInteger)arg2 formatDescription:(struct opaqueCMFormatDescription *)arg3 ;
-(int)finalizeAnalysis;
-(int)processMetadataGroup:(id)arg0 flags:(*NSUInteger)arg1 ;


@end


#endif