// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWESPRESSOINFERENCEADAPTER_H
#define BWESPRESSOINFERENCEADAPTER_H


#import <Foundation/Foundation.h>


@interface BWEspressoInferenceAdapter : NSObject



+(id)espressoNetworkURLForPlatformedResourceBaseName:(id)arg0 embedPlatformOrDeviceID:(BOOL)arg1 ;
+(id)locateNetworkFileFromFormat:(id)arg0 defaultOverrideKey:(id)arg1 version:(struct ? )arg2 ;
+(struct ? )findAvailableVersion:(id)arg0 defaultOverrideKey:(id)arg1 versionLocator:(id)arg2 ;
+(void)initialize;
-(id)inferenceProviderForType:(int)arg0 version:(struct ? )arg1 configuration:(id)arg2 resourceProvider:(id)arg3 status:(*int)arg4 ;
-(id)inferenceProvidersForType:(int)arg0 version:(struct ? )arg1 configuration:(id)arg2 resourceProvider:(id)arg3 status:(*int)arg4 ;


@end


#endif