// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGMEANINGFULEVENTTITLEGENERATOR_H
#define PGMEANINGFULEVENTTITLEGENERATOR_H

@class NSString;


#import "PGDefaultCollectionTitleGenerator.h"
#import "PGGraphFeatureNodeCollection.h"

@interface PGMeaningfulEventTitleGenerator : PGDefaultCollectionTitleGenerator {
    NSString *_meaningLabel;
    BOOL _meaningIsReliable;
    PGGraphFeatureNodeCollection *_featureNodes;
}




-(id)_meaningLabelForTitle;
-(id)_timeTitle;
-(id)_title;
-(id)initWithCollection:(id)arg0 meaningLabel:(id)arg1 meaningIsReliable:(BOOL)arg2 titleGenerationContext:(id)arg3 ;
-(id)initWithCollection:(id)arg0 meaningLabel:(id)arg1 meaningIsReliable:(BOOL)arg2 titleGenerationContext:(id)arg3 featureNodes:(id)arg4 ;
-(void)_generateTitleAndSubtitleWithResult:(id)arg0 ;


@end


#endif