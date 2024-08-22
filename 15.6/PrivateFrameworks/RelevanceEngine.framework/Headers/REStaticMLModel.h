// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RESTATICMLMODEL_H
#define RESTATICMLMODEL_H



#import "REMLModel.h"

@interface REStaticMLModel : REMLModel



+(NSUInteger)featureBitWidth;
-(float)_relevanceForFeatureMap:(id)arg0 ;
-(float)_usageForFeatureSet:(id)arg0 ;
-(id)_predictWithFeatures:(id)arg0 ;


@end


#endif