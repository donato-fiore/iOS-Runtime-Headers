// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PSFAMILYMLMODEL_H
#define _PSFAMILYMLMODEL_H

@class NSDictionary;
@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface _PSFamilyMLModel : NSObject

@property (readonly, nonatomic) NSObject<OS_xpc_object> *activity; // ivar: _activity
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
-(id)initWithActivity:(id)arg0 ;
-(id)initWithModels:(id)arg0 ;
-(id)loadModelFromUrlResource:(id)arg0 ;
-(id)predictionForContact:(id)arg0 ;
-(id)predictionsForContacts:(id)arg0 ;
-(id)predictionsForContacts:(id)arg0 featureDicts:(id)arg1 ;
-(void)initializeModels;


@end


#endif