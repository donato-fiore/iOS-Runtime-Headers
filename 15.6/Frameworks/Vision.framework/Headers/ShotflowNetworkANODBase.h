// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SHOTFLOWNETWORKANODBASE_H
#define SHOTFLOWNETWORKANODBASE_H



#import "ShotflowNetwork.h"

@interface ShotflowNetworkANODBase : ShotflowNetwork



+(*void)cellStartsX;
+(*void)cellStartsY;
+(*void)ratios;
+(BOOL)poseSquare;
+(NSUInteger)mumberBinsNegativeMaxout;
+(NSUInteger)numberMaxoutLayers;
+(float)nonSquareRollDefault;
+(float)nonSquareYawDefault;
+(struct CGSize )inputImageSize;
-(id)initWithModelPath:(id)arg0 espressoEngineID:(int)arg1 espressoDeviceID:(int)arg2 espressoStorageType:(int)arg3 threshold:(float)arg4 ;
-(void)initializeBuffers;


@end


#endif