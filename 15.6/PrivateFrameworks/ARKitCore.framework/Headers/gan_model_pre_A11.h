// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GAN_MODEL_PRE_A11_H
#define GAN_MODEL_PRE_A11_H

@class MLModel;

#import <Foundation/Foundation.h>


@interface gan_model_pre_A11 : NSObject

@property (readonly, nonatomic) MLModel *model; // ivar: _model


+(id)URLOfModelInThisBundle;
+(void)loadContentsOfURL:(id)arg0 configuration:(id)arg1 completionHandler:(id)arg2 ;
+(void)loadWithConfiguration:(id)arg0 completionHandler:(id)arg1 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 error:(*id)arg1 ;
-(id)initWithContentsOfURL:(id)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(id)initWithContentsOfURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithMLModel:(id)arg0 ;
-(id)predictionFromFeatures:(id)arg0 error:(*id)arg1 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)predictionFromInput:(id)arg0 error:(*id)arg1 ;
-(id)predictionsFromInputs:(id)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif