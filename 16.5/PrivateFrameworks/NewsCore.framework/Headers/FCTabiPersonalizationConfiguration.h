// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCTABIPERSONALIZATIONCONFIGURATION_H
#define FCTABIPERSONALIZATIONCONFIGURATION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "FCTabiHeadlineScoringEndpointConfiguration.h"
#import "FCTabiTagScoringEndpointConfiguration.h"
#import "FCTabiUserEventAggregateEndpointConfiguration.h"

@interface FCTabiPersonalizationConfiguration : NSObject

@property (nonatomic) NSInteger fullBodyEmbeddingDimension; // ivar: _fullBodyEmbeddingDimension
@property (retain, nonatomic) FCTabiHeadlineScoringEndpointConfiguration *headlineScoringEndpointConfiguration; // ivar: _headlineScoringEndpointConfiguration
@property (nonatomic) NSInteger maxTopicIds; // ivar: _maxTopicIds
@property (retain, nonatomic) NSString *modelPackageAssetID; // ivar: _modelPackageAssetID
@property (retain, nonatomic) FCTabiTagScoringEndpointConfiguration *tagScoringEndpointConfiguration; // ivar: _tagScoringEndpointConfiguration
@property (nonatomic) NSInteger titleEmbeddingDimension; // ivar: _titleEmbeddingDimension
@property (retain, nonatomic) FCTabiUserEventAggregateEndpointConfiguration *userEventAggregateEndpointConfiguration; // ivar: _userEventAggregateEndpointConfiguration


-(id)description;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif