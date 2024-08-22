// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXFEATURIZEDINFOSUGGESTION_H
#define ATXFEATURIZEDINFOSUGGESTION_H

@class ATXInfoSuggestion;

#import <Foundation/Foundation.h>

#import "ATXInformationFeatureSet.h"

@interface ATXFeaturizedInfoSuggestion : NSObject

@property (readonly, nonatomic) ATXInformationFeatureSet *featureSet; // ivar: _featureSet
@property (readonly, nonatomic) ATXInfoSuggestion *suggestion; // ivar: _suggestion


-(CGFloat)scoreWithFeatureWeights:(id)arg0 ;
-(id)init;
-(id)initWithSuggestion:(id)arg0 featureSet:(id)arg1 ;


@end


#endif