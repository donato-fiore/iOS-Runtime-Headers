// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC17KNOWLEDGEGRAPHKIT28MAWRAPPERLEARNINGSTREAMUTILS_H
#define _TTC17KNOWLEDGEGRAPHKIT28MAWRAPPERLEARNINGSTREAMUTILS_H


#import <Foundation/Foundation.h>


@interface _TtC17KnowledgeGraphKit28MAWrapperLearningStreamUtils : NSObject {
    ? momentClassifier;
    ? assetClassifier;
}




+(id)extractFeaturesForMomentNodes:(id)arg0 progressBlock:(id)arg1 ;
+(id)extractFeaturesWithGraph:(id)arg0 mappedAssetFeatures:(id)arg1 progressBlock:(id)arg2 ;
-(id)classifyAssetsWithInputFeatureVectors:(id)arg0 ;
-(id)classifyMomentsWithInputFeatureVectors:(id)arg0 ;
-(id)init;
-(id)initWithClasses:(id)arg0 momentFeatureVectors:(id)arg1 assetFeatureVectors:(id)arg2 ;


@end


#endif