// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASVMEMORYLIMITS_H
#define ASVMEMORYLIMITS_H


#import <Foundation/Foundation.h>


@interface ASVMemoryLimits : NSObject



+(NSUInteger)currentMemoryFootprint;
+(NSUInteger)processMemory;
+(NSUInteger)thumbnailMemoryAvailableForTextures;
+(NSUInteger)viewerMemoryAvailableForTexturesOnHighMemoryDevices;
+(NSUInteger)viewerMemoryAvailableForTexturesOnThisDevice;


@end


#endif