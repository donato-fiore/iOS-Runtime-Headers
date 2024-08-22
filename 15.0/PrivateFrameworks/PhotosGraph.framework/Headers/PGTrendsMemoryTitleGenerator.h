// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGTRENDSMEMORYTITLEGENERATOR_H
#define PGTRENDSMEMORYTITLEGENERATOR_H

@class NSString, NSSet;


#import "PGTitleGenerator.h"
#import "PGGraphLocationCityNode.h"
#import "PGGraphPersonNode.h"
#import "PGTimeTitleOptions.h"

@interface PGTrendsMemoryTitleGenerator : PGTitleGenerator {
    NSInteger _type;
    NSString *_sceneFeatureLabel;
    PGGraphLocationCityNode *_cityNode;
    PGGraphPersonNode *_personNode;
    NSSet *_momentNodes;
    PGTimeTitleOptions *_timeTitleOptions;
}




-(id)initWithMomentNodes:(id)arg0 sceneFeatureLabel:(id)arg1 cityNode:(id)arg2 titleGenerationContext:(id)arg3 timeTitleOptions:(id)arg4 ;
-(id)initWithMomentNodes:(id)arg0 sceneFeatureLabel:(id)arg1 personNode:(id)arg2 titleGenerationContext:(id)arg3 timeTitleOptions:(id)arg4 ;
-(id)initWithMomentNodes:(id)arg0 sceneFeatureLabel:(id)arg1 titleGenerationContext:(id)arg2 timeTitleOptions:(id)arg3 ;
-(void)_generateTitleAndSubtitleWithResult:(id)arg0 ;


@end


#endif