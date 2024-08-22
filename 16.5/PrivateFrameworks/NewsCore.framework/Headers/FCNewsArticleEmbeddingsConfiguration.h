// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCNEWSARTICLEEMBEDDINGSCONFIGURATION_H
#define FCNEWSARTICLEEMBEDDINGSCONFIGURATION_H


#import <Foundation/Foundation.h>

#import "FCNewsArticleEmbeddingConfiguration.h"
#import "FCNewsPersonalizationArticleEmbeddingsFittingConfiguration.h"

@interface FCNewsArticleEmbeddingsConfiguration : NSObject

@property (retain, nonatomic) FCNewsArticleEmbeddingConfiguration *bodyEmbeddingConfiguration; // ivar: _bodyEmbeddingConfiguration
@property (retain, nonatomic) FCNewsPersonalizationArticleEmbeddingsFittingConfiguration *fittingConfiguration; // ivar: _fittingConfiguration
@property (nonatomic) NSInteger requiredDimensions; // ivar: _requiredDimensions
@property (retain, nonatomic) FCNewsArticleEmbeddingConfiguration *titleEmbeddingConfiguration; // ivar: _titleEmbeddingConfiguration


-(id)description;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif