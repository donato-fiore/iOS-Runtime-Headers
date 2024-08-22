// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APODMLESPRESSOIOBUFFERCONTROLLER_H
#define APODMLESPRESSOIOBUFFERCONTROLLER_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>

#import "APOdmlRecipe.h"

@interface APOdmlEspressoIOBufferController : NSObject

@property (readonly, copy, nonatomic) NSDictionary *inputBuffers; // ivar: _inputBuffers
@property (readonly, nonatomic) *? isTraining; // ivar: _isTraining
@property (readonly, nonatomic) *? learningRate; // ivar: _learningRate
@property (readonly, nonatomic) *? loss; // ivar: _loss
@property (readonly, nonatomic) *? pTTR; // ivar: _pTTR
@property (readonly, nonatomic) APOdmlRecipe *recipe; // ivar: _recipe
@property (readonly, copy, nonatomic) NSArray *weightBuffers; // ivar: _weightBuffers


-(BOOL)_bindBuffer:(struct ? *)arg0 espressoNet:(struct ? *)arg1 bufferName:(id)arg2 bufferType:(int)arg3 ;
-(BOOL)_setError:(*id)arg0 errorCode:(NSInteger)arg1 ;
-(BOOL)_setErrorPtr:(*id)arg0 toError:(id)arg1 ;
-(BOOL)bindBuffersTo:(struct ? *)arg0 error:(*id)arg1 ;
-(BOOL)imputeFeature:(id)arg0 network:(struct ? *)arg1 offsetIndex:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)setFeatureDataForRow:(id)arg0 offsetIndex:(NSUInteger)arg1 featureName:(id)arg2 error:(*id)arg3 ;
-(BOOL)setInputData:(id)arg0 batchSize:(NSUInteger)arg1 network:(struct ? *)arg2 reportMissingFeature:(BOOL)arg3 error:(*id)arg4 ;
-(id)initWithRequiredFeatures:(id)arg0 recipe:(id)arg1 ;
-(struct vector<unsigned long, std::allocator<unsigned long>> )getEspressoBufferShape:(struct ? *)arg0 ;
-(void)dealloc;
-(void)reportMissingFeatureError:(id)arg0 ;


@end


#endif