// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PMLMULTILABELE5CLASSIFIER_H
#define PMLMULTILABELE5CLASSIFIER_H

@class NSString;
@protocol PMLMultiLabelClassifierProtocol;

#import <Foundation/Foundation.h>


@interface PMLMultiLabelE5Classifier : NSObject <PMLMultiLabelClassifierProtocol>

 {
    *e5rt_execution_stream_operation _main_esop;
    *e5rt_io_port _input_port;
    *e5rt_tensor_desc _input_tensor;
    *e5rt_tensor_desc_dtype _input_tensor_dtype;
    *e5rt_buffer_object _input_buffer;
    *float _input_ids;
    *e5rt_io_port _output_port;
    *e5rt_tensor_desc _output_tensor;
    *e5rt_tensor_desc_dtype _output_tensor_dtype;
    *e5rt_buffer_object _output_buffer;
    *float _output_scores;
    *e5rt_execution_stream _execution_stream;
    NSUInteger _inputNumParameters;
    NSUInteger _outputNumParameters;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)classifierWithE5File:(id)arg0 ;
-(BOOL)initializeNetworkWithE5File:(id)arg0 ;
-(NSUInteger)outputDimension;
-(id)initWithE5File:(id)arg0 ;
-(id)predict:(id)arg0 ;
-(void)dealloc;


@end


#endif