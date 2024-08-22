// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRTEXTSEQUENCERECOGNIZERMODELESPRESSO_H
#define CRTEXTSEQUENCERECOGNIZERMODELESPRESSO_H

@class NSString, NSArray;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_semaphore;


#import "CRTextSequenceRecognizerModel.h"
#import "CRNeuralRecognizerConfiguration.h"

@interface CRTextSequenceRecognizerModelEspresso : CRTextSequenceRecognizerModel {
    CRNeuralRecognizerConfiguration *_configuration;
    vector<const char *, std::allocator<const char *>> _names;
}


@property *void context; // ivar: _context
@property (retain) NSString *currentConfigurationHash; // ivar: _currentConfigurationHash
@property int engine; // ivar: _engine
@property ? names;
@property ? network; // ivar: _network
@property (readonly) NSArray *outputNames;
@property *void plan; // ivar: _plan
@property int precision; // ivar: _precision
@property (retain) NSObject<OS_dispatch_group> *predictionGroup; // ivar: _predictionGroup
@property (retain) NSObject<OS_dispatch_queue> *predictionQueue; // ivar: _predictionQueue
@property (retain) CRNeuralRecognizerConfiguration *recognizerConfiguration; // ivar: _recognizerConfiguration
@property (retain) NSObject<OS_dispatch_semaphore> *submissionSemaphore; // ivar: _submissionSemaphore


-(*void)_createContextForEngine:(int)arg0 configuration:(id)arg1 ;
-(BOOL)_shouldReconfigurePlanForInput:(id)arg0 ;
-(BOOL)preheatWithError:(*id)arg0 ;
-(id)_configurationHashForInput:(id)arg0 ;
-(id)_configurationHashForInput:(id)arg0 batchSize:(NSUInteger)arg1 ;
-(id)_modelConfigurationNameForInput:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 error:(*id)arg1 ;
-(id)inputBatchFromTextFeatures:(id)arg0 image:(id)arg1 featureWidth:(CGFloat)arg2 configuration:(id)arg3 ;
-(id)outputFromOutputBuffers:(struct vector<espresso_buffer_t, std::allocator<espresso_buffer_t>> )arg0 featureInfo:(id)arg1 ;
-(id)predictFromInputs:(id)arg0 error:(*id)arg1 ;
-(struct vImage_Buffer )_createBufferWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 channels:(NSUInteger)arg2 batchSize:(NSUInteger)arg3 sequenceLength:(NSUInteger)arg4 ;
-(void)_configurePlanForInput:(id)arg0 error:(*id)arg1 ;


@end


#endif