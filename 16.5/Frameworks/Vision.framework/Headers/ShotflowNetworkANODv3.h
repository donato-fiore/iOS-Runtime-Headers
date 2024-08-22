// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHOTFLOWNETWORKANODV3_H
#define SHOTFLOWNETWORKANODV3_H



#import "ShotflowNetworkANODBase.h"

@interface ShotflowNetworkANODv3 : ShotflowNetworkANODBase



+(*void)importantClasses;
+(BOOL)hasPose;
+(BOOL)inputBGR;
+(NSUInteger)mumberPosClasses;
+(float)inputScale;
+(id)inputLayerName;
+(id)modelName;
+(struct tuple<float, float, float> )inputBiasRGB;
-(id)initWithModelPath:(id)arg0 espressoEngineID:(int)arg1 espressoDeviceID:(int)arg2 espressoStorageType:(int)arg3 threshold:(float)arg4 ;
-(id)processVImage:(struct vImage_Buffer )arg0 inputIsBGR:(BOOL)arg1 ;
-(int)setInputShape:(NSUInteger)arg0 height:(NSUInteger)arg1 ;
-(void)initializeBuffers;


@end


#endif