// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGLOCATIONCLIPTRENDSMEMORYGENERATOR_H
#define PGLOCATIONCLIPTRENDSMEMORYGENERATOR_H



#import "PGLocationTrendsMemoryGenerator.h"

@interface PGLocationCLIPTrendsMemoryGenerator : PGLocationTrendsMemoryGenerator {
    NSUInteger _minimumSceneAnalysisVersion;
}




-(NSUInteger)minimumSceneAnalysisVersion;
-(id)initWithMemoryGenerationContext:(id)arg0 configurations:(id)arg1 ;
-(void)setMinimumSceneAnalysisVersion:(NSUInteger)arg0 ;


@end


#endif