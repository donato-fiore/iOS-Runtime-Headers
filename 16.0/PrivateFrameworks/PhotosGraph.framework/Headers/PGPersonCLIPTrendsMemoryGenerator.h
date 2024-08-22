// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGPERSONCLIPTRENDSMEMORYGENERATOR_H
#define PGPERSONCLIPTRENDSMEMORYGENERATOR_H



#import "PGPersonTrendsMemoryGenerator.h"

@interface PGPersonCLIPTrendsMemoryGenerator : PGPersonTrendsMemoryGenerator {
    NSUInteger _minimumSceneAnalysisVersion;
}




-(NSUInteger)minimumSceneAnalysisVersion;
-(id)initWithMemoryGenerationContext:(id)arg0 configurations:(id)arg1 ;
-(void)setMinimumSceneAnalysisVersion:(NSUInteger)arg0 ;


@end


#endif