// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOCLIENTRANKINGMODELFEATURE_H
#define GEOCLIENTRANKINGMODELFEATURE_H


#import <Foundation/Foundation.h>

#import "GEOClientRankingModelFeatureIdentifier.h"
#import "GEOClientRankingModelFeatureFunction.h"

@interface GEOClientRankingModelFeature : NSObject

@property (readonly, nonatomic) GEOClientRankingModelFeatureIdentifier *featureIdentifier; // ivar: _featureIdentifier
@property (readonly, nonatomic) GEOClientRankingModelFeatureFunction *function; // ivar: _function


-(id)init;
-(id)initWithFeatureIdentifier:(id)arg0 function:(id)arg1 ;
-(id)initWithGEOPDClientRankingFeatureMetadata:(id)arg0 ;


@end


#endif