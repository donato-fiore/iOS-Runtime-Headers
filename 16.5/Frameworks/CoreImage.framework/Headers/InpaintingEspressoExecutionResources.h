// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INPAINTINGESPRESSOEXECUTIONRESOURCES_H
#define INPAINTINGESPRESSOEXECUTIONRESOURCES_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface InpaintingEspressoExecutionResources : NSObject

@property (readonly) *void context; // ivar: _context
@property (readonly) int filterUsageCount; // ivar: _filterUsageCount
@property (readonly) NSArray *inputBlobNames; // ivar: _inputBlobNames
@property (readonly) BOOL membraneModel; // ivar: _membraneModel
@property (retain) NSString *modelConfigurationName; // ivar: _configurationName
@property (readonly) int modelInputPixelFormat; // ivar: _modelInputPixelFormat
@property (readonly) int modelOutputPixelFormat; // ivar: _modelOutputPixelFormat
@property (readonly) NSString *modelResourceDescriptor; // ivar: _modelResourceDescriptor
@property (readonly) NSString *modelResourceFileName; // ivar: _modelResourceFileName
@property (readonly) ? network; // ivar: _network
@property (readonly) NSArray *outputBlobNames; // ivar: _outputBlobNames
@property (readonly) *void plan; // ivar: _plan


+(void)tearDownEspressoContext:(**void)arg0 andPlan:(**void)arg1 ;
-(BOOL)descriptorIsAMembraneModel:(id)arg0 error:(*id)arg1 ;
-(BOOL)initializeInpaintingModelForResourceDescriptor:(id)arg0 error:(*id)arg1 ;
-(BOOL)initializeModelForResourceDescriptor:(id)arg0 resourceFileName:(id)arg1 inputBlobNames:(id)arg2 outputBlobNames:(id)arg3 cpuOnlyModel:(BOOL)arg4 membraneModel:(BOOL)arg5 modelInputPixelFormat:(int)arg6 modelOutputPixelFormat:(int)arg7 error:(*id)arg8 ;
-(BOOL)isModelInitialized;
-(BOOL)parseModelResourceDescriptor:(id)arg0 extractMembraneInfo:(*BOOL)arg1 inputPixelFormat:(*int)arg2 outputPixelFormat:(*int)arg3 andResourceFileName:(*id)arg4 error:(*id)arg5 ;
-(id)CIImageProcessorDigestObject;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)deregisterFilterUsage;
-(void)freeEspressoResources;
-(void)registerFilterUsage;
-(void)releaseModelIfNoLongerNeeded;
-(void)updateWithModelResourceDescriptor:(id)arg0 modelResourceFileName:(id)arg1 network:(struct ? )arg2 plan:(*void)arg3 context:(*void)arg4 inputBlobNames:(id)arg5 outputBlobNames:(id)arg6 membraneModel:(BOOL)arg7 modelInputPixelFormat:(int)arg8 modelOutputPixelFormat:(int)arg9 ;


@end


#endif