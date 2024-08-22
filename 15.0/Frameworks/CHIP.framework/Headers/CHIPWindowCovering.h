// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPWINDOWCOVERING_H
#define CHIPWINDOWCOVERING_H



#import "CHIPCluster.h"

@interface CHIPWindowCovering : CHIPCluster

@property (readonly) WindowCoveringCluster cppCluster; // ivar: _cppCluster


-(struct ClusterBase *)getCluster;
-(void)configureAttributeConfigStatusWithMinInterval:(unsigned short)arg0 maxInterval:(unsigned short)arg1 responseHandler:(id)arg2 ;
-(void)configureAttributeCurrentPositionLiftWithMinInterval:(unsigned short)arg0 maxInterval:(unsigned short)arg1 change:(unsigned short)arg2 responseHandler:(id)arg3 ;
-(void)configureAttributeCurrentPositionTiltWithMinInterval:(unsigned short)arg0 maxInterval:(unsigned short)arg1 change:(unsigned short)arg2 responseHandler:(id)arg3 ;
-(void)configureAttributeWindowCoveringTypeWithMinInterval:(unsigned short)arg0 maxInterval:(unsigned short)arg1 responseHandler:(id)arg2 ;
-(void)readAttributeClusterRevisionWithResponseHandler:(id)arg0 ;
-(void)readAttributeConfigStatusWithResponseHandler:(id)arg0 ;
-(void)readAttributeCurrentPositionLiftWithResponseHandler:(id)arg0 ;
-(void)readAttributeCurrentPositionTiltWithResponseHandler:(id)arg0 ;
-(void)readAttributeInstalledClosedLimitLiftWithResponseHandler:(id)arg0 ;
-(void)readAttributeInstalledClosedLimitTiltWithResponseHandler:(id)arg0 ;
-(void)readAttributeInstalledOpenLimitLiftWithResponseHandler:(id)arg0 ;
-(void)readAttributeInstalledOpenLimitTiltWithResponseHandler:(id)arg0 ;
-(void)readAttributeModeWithResponseHandler:(id)arg0 ;
-(void)readAttributeWindowCoveringTypeWithResponseHandler:(id)arg0 ;
-(void)reportAttributeConfigStatusWithResponseHandler:(id)arg0 ;
-(void)reportAttributeCurrentPositionLiftWithResponseHandler:(id)arg0 ;
-(void)reportAttributeCurrentPositionTiltWithResponseHandler:(id)arg0 ;
-(void)reportAttributeWindowCoveringTypeWithResponseHandler:(id)arg0 ;
-(void)windowCoveringDownClose:(id)arg0 ;
-(void)windowCoveringGoToLiftPercentage:(unsigned char)arg0 responseHandler:(id)arg1 ;
-(void)windowCoveringGoToLiftValue:(unsigned short)arg0 responseHandler:(id)arg1 ;
-(void)windowCoveringGoToTiltPercentage:(unsigned char)arg0 responseHandler:(id)arg1 ;
-(void)windowCoveringGoToTiltValue:(unsigned short)arg0 responseHandler:(id)arg1 ;
-(void)windowCoveringStop:(id)arg0 ;
-(void)windowCoveringUpOpen:(id)arg0 ;
-(void)writeAttributeModeWithValue:(unsigned char)arg0 responseHandler:(id)arg1 ;


@end


#endif