// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MONTREALNNMODELNODE_H
#define MONTREALNNMODELNODE_H

@class NSArray, NSString, NSDictionary;
@protocol MontrealNNDescriptionProtocol;


#import "MontrealNNDescription.h"
#import "MontrealNNModelQuantization.h"

@interface MontrealNNModelNode : MontrealNNDescription <MontrealNNDescriptionProtocol>



@property (readonly) NSArray *activations; // ivar: _activations
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *inputs; // ivar: _inputs
@property (retain, nonatomic) NSArray *inputsWithDimensions; // ivar: _inputsWithDimensions
@property (readonly) NSString *name; // ivar: _name
@property (readonly) NSString *nodeStr; // ivar: _nodeStr
@property (retain, nonatomic) NSArray *outputs; // ivar: _outputs
@property (retain, nonatomic) NSArray *outputsWithDimensions; // ivar: _outputsWithDimensions
@property ? parameters; // ivar: _parameters
@property BOOL parametersSet; // ivar: _parametersSet
@property (readonly) NSDictionary *properties; // ivar: _properties
@property (readonly) MontrealNNModelQuantization *quantization; // ivar: _quantization
@property (readonly) Class superclass;
@property (readonly, getter=isValid) BOOL valid;
@property (readonly) NSArray *weights; // ivar: _weights


-(BOOL)isEqual:(id)arg0 ;
-(id)auditAndUpdateTensors:(id)arg0 dimensionTensors:(id)arg1 ;
-(id)checkForValidity;
-(id)createDataContainer;
-(id)initWithDictionary:(id)arg0 tensors:(id)arg1 quantization:(id)arg2 jsonDir:(id)arg3 ;
-(id)initWithName:(id)arg0 nodeStr:(id)arg1 activations:(id)arg2 properties:(id)arg3 weights:(id)arg4 ;
-(id)jsonDescription;
-(struct ? )parameters:(*void)arg0 ;
-(void)description:(id)arg0 indent:(id)arg1 ;
-(void)generateJSONAtPath:(id)arg0 ;
-(void)keepTensors:(id)arg0 ;


@end


#endif