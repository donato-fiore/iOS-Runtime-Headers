// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCNEWSPERSONALIZATIONARTICLEEMBEDDINGSFITTINGCONFIGURATION_H
#define FCNEWSPERSONALIZATIONARTICLEEMBEDDINGSFITTINGCONFIGURATION_H

@class NSNumber;

#import <Foundation/Foundation.h>

#import "FCNewsPersonalizationArticleEmbeddingsFittingRequirements.h"
#import "FCNewsPersonalizationLogisticRegressionClassifierConfiguration.h"

@interface FCNewsPersonalizationArticleEmbeddingsFittingConfiguration : NSObject

@property (retain, nonatomic) FCNewsPersonalizationArticleEmbeddingsFittingRequirements *articleReadRequirements; // ivar: _articleReadRequirements
@property (retain, nonatomic) FCNewsPersonalizationArticleEmbeddingsFittingRequirements *articleSeenRequirements; // ivar: _articleSeenRequirements
@property (retain, nonatomic) FCNewsPersonalizationLogisticRegressionClassifierConfiguration *logisticRegressionClassifierConfiguration; // ivar: _logisticRegressionClassifierConfiguration
@property (readonly, nonatomic) NSNumber *maximumRatioOfArticleSeenEmbeddingsToArticleReadEmbeddings; // ivar: _maximumRatioOfArticleSeenEmbeddingsToArticleReadEmbeddings


-(id)description;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif