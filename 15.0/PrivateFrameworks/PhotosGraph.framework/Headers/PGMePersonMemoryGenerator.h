// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGMEPERSONMEMORYGENERATOR_H
#define PGMEPERSONMEMORYGENERATOR_H



#import "PGPersonMemoryGenerator.h"
#import "PGFeaturedTimePeriodMemoryConfiguration.h"

@interface PGMePersonMemoryGenerator : PGPersonMemoryGenerator {
    PGFeaturedTimePeriodMemoryConfiguration *_featuredSeasonConfiguration;
}




-(id)featuredSeasonConfiguration;
-(id)initWithMemoryGenerationContext:(id)arg0 ;
-(void)enumerateMomentNodesAndFeatureNodesInGraph:(id)arg0 usingBlock:(id)arg1 ;


@end


#endif