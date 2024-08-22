// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOCLIENTRANKINGFEATUREUNIT_H
#define GEOCLIENTRANKINGFEATUREUNIT_H


#import <Foundation/Foundation.h>

#import "GEOClientRankingModelFeatureTypeIdentifier.h"
#import "GEOClientRankingModelFeatureFunction.h"
#import "GEOClientRankingModelFeatureSourceIdentifier.h"

@interface GEOClientRankingFeatureUnit : NSObject

@property (readonly, nonatomic) GEOClientRankingModelFeatureTypeIdentifier *feature; // ivar: _feature
@property (readonly, nonatomic) NSInteger featureType; // ivar: _featureType
@property (readonly, nonatomic) GEOClientRankingModelFeatureFunction *function; // ivar: _function
@property (readonly, nonatomic) GEOClientRankingModelFeatureSourceIdentifier *source; // ivar: _source


-(id)initWithFeatureType:(id)arg0 function:(id)arg1 ;
-(id)initWithSource:(id)arg0 function:(id)arg1 ;


@end


#endif