// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWESPRESSOINFERENCEADAPTER_H
#define BWESPRESSOINFERENCEADAPTER_H


#import <Foundation/Foundation.h>


@interface BWEspressoInferenceAdapter : NSObject



+(id)espressoNetworkURLForPlatformedResource:(id)arg0 ;
+(id)locateNetworkFileFromFormat:(id)arg0 defaultOverrideKey:(id)arg1 version:(struct ? )arg2 ;
+(struct ? )findAvailableVersion:(id)arg0 defaultOverrideKey:(id)arg1 versionLocator:(id)arg2 ;
+(void)initialize;
-(id)inferenceProviderForType:(int)arg0 version:(struct ? )arg1 configuration:(id)arg2 resourceProvider:(id)arg3 status:(*int)arg4 ;
-(int)_mostAcceleratedExecutionTargetForSmartCameraFromResourceProvider:(id)arg0 ;
-(unsigned int)_allowedBufferCompressionDirectionForExecutionTarget:(int)arg0 ;


@end


#endif