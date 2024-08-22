// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWVISIONINFERENCEADAPTER_H
#define BWVISIONINFERENCEADAPTER_H

@class VNProcessingDevice;

#import <Foundation/Foundation.h>


@interface BWVisionInferenceAdapter : NSObject

@property (readonly, nonatomic) VNProcessingDevice *applicationProcessingDevice; // ivar: _applicationProcessingDevice
@property (readonly, nonatomic) VNProcessingDevice *espressoBasedRequestProcessingDevice;
@property (readonly, nonatomic) VNProcessingDevice *graphicsProcessingDevice; // ivar: _graphicsProcessingDevice
@property (readonly, nonatomic) VNProcessingDevice *neuralProcessingDevice; // ivar: _neuralProcessingDevice


+(void)initialize;
-(id)inferenceProviderForType:(int)arg0 version:(struct ? )arg1 configuration:(id)arg2 resourceProvider:(id)arg3 status:(*int)arg4 ;
-(id)init;
-(void)dealloc;


@end


#endif