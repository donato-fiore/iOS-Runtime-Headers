// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CIPREDICTIONMODEL_H
#define CIPREDICTIONMODEL_H

@class NSSet, MLModel;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface CIPredictionModel : NSObject <MLFeatureProvider>

 {
    *__CVBuffer imageBuffer;
}


@property (readonly, nonatomic) NSSet *featureNames;
@property (nonatomic) CIPredictionModelImageFeatures inputImageFeatures; // ivar: _inputImageFeatures
@property (retain, nonatomic) MLModel *model; // ivar: _model
@property (nonatomic) CIPredictionModelImageFeatures outputImageFeatures; // ivar: _outputImageFeatures


-(BOOL)processInputFeatureWithName:(id)arg0 featureDescription:(id)arg1 ;
-(BOOL)processInputModel:(id)arg0 ;
-(BOOL)processOutputFeatureWithName:(id)arg0 featureDescription:(id)arg1 ;
-(id)featureValueForName:(id)arg0 ;
-(id)initWithModel:(id)arg0 ;
-(struct __CVBuffer *)predictUsingInputBuffer:(struct __CVBuffer *)arg0 error:(*id)arg1 ;
-(void)dealloc;


@end


#endif