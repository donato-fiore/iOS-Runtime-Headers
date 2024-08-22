// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MALEARNINGSTREAMUTILS_H
#define MALEARNINGSTREAMUTILS_H


#import <Foundation/Foundation.h>

#import "_TtC17KnowledgeGraphKit28MAWrapperLearningStreamUtils.h"

@interface MALearningStreamUtils : NSObject {
    _TtC17KnowledgeGraphKit28MAWrapperLearningStreamUtils *_underlyingObject;
}




+(id)extractFeaturesForMomentNodes:(id)arg0 progressBlock:(id)arg1 ;
+(id)extractFeaturesWithGraph:(id)arg0 mappedAssetFeatures:(id)arg1 progressBlock:(id)arg2 ;
-(id)classifyAssetsWithInputFeatureVectors:(id)arg0 ;
-(id)classifyMomentsWithInputFeatureVectors:(id)arg0 ;
-(id)initWithClasses:(id)arg0 momentFeatureVectors:(id)arg1 assetFeatureVectors:(id)arg2 ;


@end


#endif