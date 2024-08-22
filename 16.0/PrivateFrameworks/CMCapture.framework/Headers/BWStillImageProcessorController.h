// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWSTILLIMAGEPROCESSORCONTROLLER_H
#define BWSTILLIMAGEPROCESSORCONTROLLER_H

@class NSMutableArray, NSString, CMIExternalMemoryDescriptor, CMIExternalMemoryResource;
@protocol BWStillImageProcessorControllerInputUpdatesDelegate, MetalImageBufferProcessor;

#import <Foundation/Foundation.h>

#import "FigStateMachine.h"
#import "BWStillImageProcessorControllerConfiguration.h"
#import "BWStillImageProcessorControllerRequest.h"

@interface BWStillImageProcessorController : NSObject <BWStillImageProcessorControllerInputUpdatesDelegate>

 {
    FigStateMachine *_stateMachine;
    NSMutableArray *_requestQueue;
}


@property (readonly, nonatomic) BWStillImageProcessorControllerConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) BWStillImageProcessorControllerRequest *currentRequest; // ivar: _currentRequest
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CMIExternalMemoryDescriptor *externalMemoryDescriptor;
@property (retain, nonatomic) CMIExternalMemoryResource *externalMemoryResource;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<MetalImageBufferProcessor> *metalImageBufferProcessor;
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsExternalMemoryResource;
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(BOOL)usesCustomProcessingFlow;
+(void)initialize;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithName:(id)arg0 type:(NSUInteger)arg1 configuration:(id)arg2 ;
-(id)requestForInput:(id)arg0 delegate:(id)arg1 errOut:(*int)arg2 ;
-(int)enqueueInputForProcessing:(id)arg0 delegate:(id)arg1 ;
-(int)prepare;
-(int)process;
-(void)_completeCurrentRequestAndInitiateNextRequest;
-(void)_prepare;
-(void)_process;
-(void)_reset;
-(void)_updateStateIfNeeded;
-(void)cancelProcessing;
-(void)dealloc;
-(void)reset;


@end


#endif