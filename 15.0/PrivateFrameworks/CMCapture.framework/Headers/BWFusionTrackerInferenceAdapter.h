// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWFUSIONTRACKERINFERENCEADAPTER_H
#define BWFUSIONTRACKERINFERENCEADAPTER_H


#import <Foundation/Foundation.h>


@interface BWFusionTrackerInferenceAdapter : NSObject



-(id)_inferenceProvidersForTrackingOperation:(NSInteger)arg0 meanPixelCalculator:(id)arg1 inputVideoRequirement:(id)arg2 inOutOrderBufferRequirement:(*id)arg3 configuration:(id)arg4 resourceProvider:(id)arg5 ;
-(id)_urlForNetwork:(id)arg0 ;
-(id)inferenceProvidersForType:(int)arg0 version:(struct ? )arg1 configuration:(id)arg2 resourceProvider:(id)arg3 status:(*int)arg4 ;


@end


#endif