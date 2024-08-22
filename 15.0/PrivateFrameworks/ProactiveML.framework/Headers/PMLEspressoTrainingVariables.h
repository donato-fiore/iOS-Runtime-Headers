// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PMLESPRESSOTRAININGVARIABLES_H
#define PMLESPRESSOTRAININGVARIABLES_H

@class NSString, NSArray, NSURL;
@protocol PMLPlistAndChunksSerializableProtocol;

#import <Foundation/Foundation.h>


@interface PMLEspressoTrainingVariables : NSObject <PMLPlistAndChunksSerializableProtocol>

 {
    BOOL _initializedWithNSData;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *globalsToGetGradientsFor; // ivar: _globalsToGetGradientsFor
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *initializerName; // ivar: _initializerName
@property (readonly, nonatomic) NSUInteger inputDim; // ivar: _inputDim
@property (readonly, nonatomic) NSString *inputName; // ivar: _inputName
@property (readonly, nonatomic) NSArray *layerBiasesToGetGradientsFor; // ivar: _layerBiasesToGetGradientsFor
@property (readonly, nonatomic) NSArray *layerWeightsToGetGradientsFor; // ivar: _layerWeightsToGetGradientsFor
@property (readonly, nonatomic) NSString *lossValueName; // ivar: _lossValueName
@property (readonly, nonatomic) NSString *outputName; // ivar: _outputName
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *trainingControlVariableName; // ivar: _trainingControlVariableName
@property (readonly, nonatomic) NSURL *trainingNetworkPath; // ivar: _trainingNetworkPath
@property (readonly, nonatomic) NSString *trainingOutputName; // ivar: _trainingOutputName
@property (readonly, nonatomic) NSString *trueLabelName; // ivar: _trueLabelName


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToEspressoTrainingVariables:(id)arg0 ;
-(id)init;
-(id)initWithPlist:(id)arg0 chunks:(id)arg1 context:(id)arg2 ;
-(id)initWithTrainingNetworkPath:(id)arg0 inputName:(id)arg1 inputDim:(NSUInteger)arg2 outputName:(id)arg3 trueLabelName:(id)arg4 lossValueName:(id)arg5 trainingOutputName:(id)arg6 trainingControlVariableName:(id)arg7 initializerName:(id)arg8 globalsToGetGradientsFor:(id)arg9 layerWeightsToGetGradientsFor:(id)arg10 layerBiasesToGetGradientsFor:(id)arg11 ;
-(id)toPlistWithChunks:(id)arg0 ;


@end


#endif