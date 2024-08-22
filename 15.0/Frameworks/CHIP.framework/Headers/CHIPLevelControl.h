// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPLEVELCONTROL_H
#define CHIPLEVELCONTROL_H



#import "CHIPCluster.h"

@interface CHIPLevelControl : CHIPCluster

@property (readonly) LevelControlCluster cppCluster; // ivar: _cppCluster


-(struct ClusterBase *)getCluster;
-(void)configureAttributeCurrentLevelWithMinInterval:(unsigned short)arg0 maxInterval:(unsigned short)arg1 change:(unsigned char)arg2 responseHandler:(id)arg3 ;
-(void)move:(unsigned char)arg0 rate:(unsigned char)arg1 optionMask:(unsigned char)arg2 optionOverride:(unsigned char)arg3 responseHandler:(id)arg4 ;
-(void)moveToLevel:(unsigned char)arg0 transitionTime:(unsigned short)arg1 optionMask:(unsigned char)arg2 optionOverride:(unsigned char)arg3 responseHandler:(id)arg4 ;
-(void)moveToLevelWithOnOff:(unsigned char)arg0 transitionTime:(unsigned short)arg1 responseHandler:(id)arg2 ;
-(void)moveWithOnOff:(unsigned char)arg0 rate:(unsigned char)arg1 responseHandler:(id)arg2 ;
-(void)readAttributeClusterRevisionWithResponseHandler:(id)arg0 ;
-(void)readAttributeCurrentLevelWithResponseHandler:(id)arg0 ;
-(void)reportAttributeCurrentLevelWithResponseHandler:(id)arg0 ;
-(void)step:(unsigned char)arg0 stepSize:(unsigned char)arg1 transitionTime:(unsigned short)arg2 optionMask:(unsigned char)arg3 optionOverride:(unsigned char)arg4 responseHandler:(id)arg5 ;
-(void)stepWithOnOff:(unsigned char)arg0 stepSize:(unsigned char)arg1 transitionTime:(unsigned short)arg2 responseHandler:(id)arg3 ;
-(void)stop:(unsigned char)arg0 optionOverride:(unsigned char)arg1 responseHandler:(id)arg2 ;
-(void)stopWithOnOff:(id)arg0 ;


@end


#endif