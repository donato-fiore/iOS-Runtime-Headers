// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SHOTFLOWNETWORKANFDV1_H
#define SHOTFLOWNETWORKANFDV1_H



#import "ShotflowNetwork.h"

@interface ShotflowNetworkANFDv1 : ShotflowNetwork



+(*void)cellStartsX;
+(*void)cellStartsY;
+(*void)importantClasses;
+(*void)ratios;
+(BOOL)poseSquare;
+(NSUInteger)mumberBinsNegativeMaxout;
+(NSUInteger)mumberPosClasses;
+(NSUInteger)numberMaxoutLayers;
+(id)modelName;
+(struct CGSize )inputImageSize;
-(id)initWithModelPath:(id)arg0 espressoEngineID:(int)arg1 espressoDeviceID:(int)arg2 espressoStorageType:(int)arg3 threshold:(float)arg4 ;
-(int)setInputShape:(NSUInteger)arg0 height:(NSUInteger)arg1 ;
-(void)initializeBuffers;


@end


#endif