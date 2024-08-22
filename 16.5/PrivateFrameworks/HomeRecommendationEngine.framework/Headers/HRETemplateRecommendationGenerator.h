// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HRETEMPLATERECOMMENDATIONGENERATOR_H
#define HRETEMPLATERECOMMENDATIONGENERATOR_H

@class NSArray;


#import "HREStandardAsyncRecommendationSource.h"

@interface HRETemplateRecommendationGenerator : HREStandardAsyncRecommendationSource

@property (retain, nonatomic) NSArray *templates; // ivar: _templates


+(id)allAvailableTemplates;
-(Class)generationProcessClass;
-(NSUInteger)disablingOptions;
-(id)filterTemplates:(id)arg0 withOptions:(NSUInteger)arg1 ;
-(id)initWithTemplates:(id)arg0 ;
-(void)setupProcess:(id)arg0 ;


@end


#endif