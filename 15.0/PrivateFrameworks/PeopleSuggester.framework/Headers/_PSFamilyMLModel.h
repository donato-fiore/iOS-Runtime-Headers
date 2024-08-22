// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PSFAMILYMLMODEL_H
#define _PSFAMILYMLMODEL_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface _PSFamilyMLModel : NSObject

@property (readonly, nonatomic) NSDictionary *models; // ivar: _models


-(BOOL)isFamilyContact:(id)arg0 ;
-(id)defaultModelForPrediction;
-(id)defaultPredictionForInputFeatures:(id)arg0 ;
-(id)ensemblePredictionForInputFeatures:(id)arg0 ;
-(id)familiesPredictionForContacts:(id)arg0 withMaxSuggestion:(NSInteger)arg1 ;
-(id)familyProbability:(id)arg0 ;
-(id)familyRelationsOfContacts:(id)arg0 featureDicts:(id)arg1 ;
-(id)getFeatureDictForContact:(id)arg0 ;
-(id)getFeatureDictsForContacts:(id)arg0 ;
-(id)getModelWithModelName:(id)arg0 ;
-(id)getPredictionFromModel:(id)arg0 withInputFeatures:(id)arg1 ;
-(id)init;
-(id)initWithModels:(id)arg0 ;
-(id)loadModelFromUrlResource:(id)arg0 ;
-(id)predictionForContact:(id)arg0 ;
-(id)predictionsForContacts:(id)arg0 ;
-(id)predictionsForContacts:(id)arg0 featureDicts:(id)arg1 ;


@end


#endif