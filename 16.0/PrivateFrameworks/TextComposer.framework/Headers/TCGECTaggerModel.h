// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TCGECTAGGERMODEL_H
#define TCGECTAGGERMODEL_H

@class NSString, NSArray, NSDictionary;
@protocol TCGECModel;

#import <Foundation/Foundation.h>


@interface TCGECTaggerModel : NSObject <TCGECModel>

 {
    NSString *_modelPath;
    *void _embeddings;
    *MontrealNeuralNetwork _gecClassifier;
    NSArray *_gecClassifierLabels;
    NSDictionary *_labelsToIssueType;
    NSDictionary *_indicationThresholds;
    NSDictionary *_autocorrectionThresholds;
    NSDictionary *_detailedIssueTypes;
    NSUInteger _keepLabelIndex;
}


@property (readonly, nonatomic) NSUInteger embeddingDimension;
@property (readonly, nonatomic) NSUInteger numCategories;


-(BOOL)loadAutocorrectionThresholdsFromURL:(id)arg0 ;
-(BOOL)loadDetailedIssueTypesFromURL:(id)arg0 ;
-(BOOL)loadErrorClassesFromURL:(id)arg0 ;
-(BOOL)loadIndicationThresholdsFromURL:(id)arg0 ;
-(BOOL)useANEWithOptions:(id)arg0 ;
-(id)classifierPrediction:(struct MontrealNeuralNetwork *)arg0 labelCount:(NSUInteger)arg1 input:(id)arg2 tokenCount:(NSUInteger)arg3 ;
-(id)classifierPredictions:(id)arg0 tokenCount:(NSUInteger)arg1 ;
-(id)correctionForPredictedClass:(NSUInteger)arg0 withProbability:(float)arg1 ;
-(id)embeddingsForTokenizedSentence:(id)arg0 ;
-(id)initWithModelPath:(id)arg0 OTABundlePath:(id)arg1 options:(id)arg2 ;
-(void)dealloc;
-(void)enumerateIssuesForSentence:(id)arg0 withBlock:(id)arg1 ;


@end


#endif