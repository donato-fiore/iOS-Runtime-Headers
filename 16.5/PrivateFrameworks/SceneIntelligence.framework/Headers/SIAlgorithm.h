// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIALGORITHM_H
#define SIALGORITHM_H


#import <Foundation/Foundation.h>

#import "SIModel.h"
#import "SINetworkConfiguration.h"

@interface SIAlgorithm : NSObject

@property (nonatomic) NSUInteger algorithmNameHash; // ivar: _algorithmNameHash
@property (nonatomic) NSUInteger frameBoundarySignpostEventEnd; // ivar: _frameBoundarySignpostEventEnd
@property (nonatomic) NSUInteger frameBoundarySignpostEventStart; // ivar: _frameBoundarySignpostEventStart
@property (nonatomic) NSUInteger mappingId; // ivar: _mappingId
@property (readonly) SIModel *model; // ivar: _model
@property (retain) SINetworkConfiguration *networkConfiguration; // ivar: _networkConfiguration


+(BOOL)supportsANE;
+(Class)inputDataClass;
+(Class)outputDataClass;
-(NSInteger)_inferenceWithInput:(id)arg0 output:(id)arg1 ;
-(NSInteger)_postprocessingOutput:(id)arg0 ;
-(NSInteger)_preprocessingInputData:(id)arg0 ;
-(NSInteger)_runWithInput:(id)arg0 output:(id)arg1 ;
-(NSInteger)_switchConfiguration:(NSUInteger)arg0 ;
-(NSInteger)runWithInput:(id)arg0 output:(id)arg1 ;
-(NSInteger)runWithInput:(id)arg0 output:(id)arg1 resolutionConfiguration:(NSInteger)arg2 ;
-(id)initWithNetworkConfiguration:(id)arg0 ;
-(id)networkVersion;
-(struct CGSize )getInputResolution;
-(struct CGSize )getOutputResolution;


@end


#endif