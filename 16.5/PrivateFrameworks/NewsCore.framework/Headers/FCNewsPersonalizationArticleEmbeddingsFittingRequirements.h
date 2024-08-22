// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCNEWSPERSONALIZATIONARTICLEEMBEDDINGSFITTINGREQUIREMENTS_H
#define FCNEWSPERSONALIZATIONARTICLEEMBEDDINGSFITTINGREQUIREMENTS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface FCNewsPersonalizationArticleEmbeddingsFittingRequirements : NSObject

@property (retain, nonatomic) NSNumber *maximumNumberOfEmbeddings; // ivar: _maximumNumberOfEmbeddings
@property (retain, nonatomic) NSNumber *minimumDuration; // ivar: _minimumDuration
@property (retain, nonatomic) NSNumber *minimumNumberOfEmbeddings; // ivar: _minimumNumberOfEmbeddings


-(id)description;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif