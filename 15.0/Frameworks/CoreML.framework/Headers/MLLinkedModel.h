// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLLINKEDMODEL_H
#define MLLINKEDMODEL_H

@class NSString;
@protocol MLModelSpecificationLoader;


#import "MLModel.h"

@interface MLLinkedModel : MLModel <MLModelSpecificationLoader>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) MLModel *linkedModel; // ivar: _linkedModel
@property (retain) NSString *modelFileName; // ivar: _modelFileName
@property (retain) NSString *modelSearchPath; // ivar: _modelSearchPath
@property (readonly) Class superclass;


+(BOOL)areFeaturesIn:(id)arg0 modelNamed:(id)arg1 aSubsetOf:(id)arg2 error:(*id)arg3 ;
+(id)findFile:(id)arg0 inSearchPath:(id)arg1 basePath:(id)arg2 ;
+(id)loadModelFromSpecification:(*void)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(id)initWithLinkedModel:(id)arg0 modelFileName:(id)arg1 modelSearchPath:(id)arg2 configuration:(id)arg3 ;
-(id)parameterValueForKey:(id)arg0 error:(*id)arg1 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)predictionsFromBatch:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(void)updateParameterDescriptionsByUnarchivingSpecification:(*void)arg0 ;


@end


#endif