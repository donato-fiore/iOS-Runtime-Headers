// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKPLATFORM_H
#define VKPLATFORM_H


#import <Foundation/Foundation.h>


@interface VKPlatform : NSObject {
    int _numCPUs;
    BOOL _isMac;
    BOOL _lowPerformanceDevice;
}


@property (readonly, nonatomic) BOOL canMakeSharingThumbnails;
@property (readonly, nonatomic) unsigned char explicitDefaultRefreshRate;
@property (readonly, nonatomic) BOOL isIphone;
@property (readonly, nonatomic) BOOL isMac;
@property (readonly, nonatomic) BOOL isPad;
@property (readonly, nonatomic) BOOL lowPerformanceDevice;
@property (readonly, nonatomic) NSUInteger memorySize; // ivar: _memSize
@property (readonly, nonatomic) BOOL proceduralRoadAlpha; // ivar: _proceduralRoadAlpha
@property (readonly, nonatomic) unsigned char processingQueueWidth;
@property (readonly, nonatomic) BOOL reduceMotionEnabled;
@property (readonly, nonatomic) BOOL roadsWithSimpleLineMeshesAvailable;
@property (readonly, nonatomic) CGFloat routeLineSimplificationEpsilon;
@property (readonly, nonatomic) BOOL shouldDrawWhenReady;
@property (readonly, nonatomic) BOOL shouldStyleLabelsInParallel;
@property (readonly, nonatomic) BOOL supports3DBuildingStrokes; // ivar: _supports3DBuildingStrokes
@property (readonly, nonatomic) BOOL supports3DBuildings;
@property (readonly, nonatomic) BOOL supportsARMode; // ivar: _supportsARMode
@property (readonly, nonatomic) BOOL supportsBuildingShadows;
@property (readonly, nonatomic) BOOL supportsBuildingStrokes; // ivar: _supportsBuildingStrokes
@property (readonly, nonatomic) BOOL supportsCoastlineGlows; // ivar: _supportsCoastlineGlows
@property (readonly, nonatomic) BOOL supportsHiResBuildings;
@property (readonly, nonatomic) BOOL supportsHiResRTT;
@property (readonly, nonatomic) BOOL supportsPerFragmentLighting; // ivar: _supportsPerFragmentLighting
@property (readonly, nonatomic) unsigned char tileDecodeQueueWidth;
@property (readonly, nonatomic) unsigned int tilePrefetchNumberOfScreens;
@property (readonly, nonatomic) BOOL useCheapTrafficShader; // ivar: _useCheapTrafficShader


+(id)sharedPlatform;
-(NSUInteger)_calculateMemSize;
-(NSUInteger)tileMaximumLimit:(NSUInteger)arg0 ;
-(id)init;
-(void)_determineHardware;


@end


#endif