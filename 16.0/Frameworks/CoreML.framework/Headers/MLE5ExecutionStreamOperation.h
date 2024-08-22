// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLE5EXECUTIONSTREAMOPERATION_H
#define MLE5EXECUTIONSTREAMOPERATION_H

@class NSString, NSURL, NSArray, NSDictionary;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface MLE5ExecutionStreamOperation : NSObject

@property (readonly, copy) NSString *debugLabel; // ivar: _debugLabel
@property (readonly, copy) NSURL *e5BundleURL; // ivar: _e5BundleURL
@property (readonly, copy) NSString *functionName; // ivar: _functionName
@property (retain) NSObject<MLFeatureProvider> *inputFeatures; // ivar: _inputFeatures
@property (copy) NSArray *inputPorts; // ivar: _inputPorts
@property *e5rt_execution_stream_operation operationHandle; // ivar: _operationHandle
@property (readonly) NSDictionary *outputDescriptionsByName; // ivar: _outputDescriptionsByName
@property (readonly) NSObject<MLFeatureProvider> *outputFeatures;
@property (copy) NSArray *outputPorts; // ivar: _outputPorts
@property NSInteger state; // ivar: _state


-(BOOL)prepareAndReturnError:(*id)arg0 ;
-(id)_inputPortNames;
-(id)_newArrayOfBoundedOutputPortsUsingOutputBackings:(id)arg0 error:(*id)arg1 ;
-(id)_newArrayOfInputPortsBoundToFeatures:(id)arg0 error:(*id)arg1 ;
-(id)_newArrayOfUnboundedPortsForPortNames:(id)arg0 featureDescriptionsByName:(id)arg1 portFactoryFunction:(*unk)arg2 error:(*id)arg3 ;
-(id)_outputPortNames;
-(id)initWithContentsOfURL:(id)arg0 functionName:(id)arg1 outputDescriptionsByName:(id)arg2 debugLabel:(id)arg3 ;
-(struct e5rt_execution_stream_operation *)_createOperationAndReturnError:(*id)arg0 ;
-(void)dealloc;
-(void)reset;


@end


#endif