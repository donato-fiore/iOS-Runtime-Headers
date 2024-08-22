// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APODMLESPRESSOFACADE_H
#define APODMLESPRESSOFACADE_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "APOdmlEspressoIOBufferController.h"
#import "APOdmlRecipe.h"

@interface APOdmlEspressoFacade : NSObject

@property (retain, nonatomic) APOdmlEspressoIOBufferController *bufferController; // ivar: _bufferController
@property (readonly, nonatomic) *? espressoNet; // ivar: _espressoNet
@property (readonly, nonatomic) *void espressoPlan; // ivar: _espressoPlan
@property (nonatomic) NSUInteger finalBatchSize; // ivar: _finalBatchSize
@property (retain, nonatomic) APOdmlRecipe *recipe; // ivar: _recipe
@property (readonly, nonatomic) NSArray *requiredFeatures; // ivar: _requiredFeatures


-(BOOL)_loadEspressoNet:(char *)arg0 recipe:(id)arg1 error:(*id)arg2 ;
-(BOOL)_prepareForTraining:(*id)arg0 ;
-(BOOL)_setErrorPtr:(*id)arg0 toError:(id)arg1 ;
-(BOOL)changeEspressoBatchSize:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)finalizeEspressoPipeline:(*id)arg0 ;
-(BOOL)setError:(*id)arg0 errorCode:(NSInteger)arg1 ;
-(BOOL)trainWithTrainingSet:(id)arg0 error:(*id)arg1 ;
-(float)_retrieveLossValue;
-(float)accuracyInBatchWithError:(*id)arg0 ;
-(id)_extractRequiredFeatures;
-(id)computeAccuracyAndLoss:(id)arg0 error:(*id)arg1 ;
-(id)computeClientPttr:(id)arg0 error:(*id)arg1 ;
-(id)initWithEspressoNetURL:(id)arg0 recipe:(id)arg1 error:(*id)arg2 ;
-(id)retrieveWeights2D:(*id)arg0 ;
-(id)retrieveWeights:(*id)arg0 ;
-(int)_executeEspressoPlan;
-(struct vector<unsigned long, std::allocator<unsigned long>> )_getEspressoBlobShape:(id)arg0 ;
-(void)_preTrainingSetup;
-(void)dealloc;


@end


#endif