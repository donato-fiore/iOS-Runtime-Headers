// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWVIDEODEFRINGINGNODE_H
#define BWVIDEODEFRINGINGNODE_H

@class NSString, FigVideoDefringingProcessor;


#import "BWNode.h"
#import "BWLimitedGMErrorLogger.h"

@interface BWVideoDefringingNode : BWNode {
    BOOL _isSlomo;
    BOOL _propagateSynchronizedSlaveFrame;
    NSString *_sensorIDString;
    NSString *_portType;
    *opaqueCMFormatDescription _outputFormatDescription;
    NSString *_cameraToDefringe;
    FigVideoDefringingProcessor *_videoDefringingProcessor;
    BWLimitedGMErrorLogger *_limitedGMErrorLogger;
}




+(void)initialize;
-(id)_processorOptions;
-(id)initWithSensorIDString:(id)arg0 portType:(id)arg1 propagateSynchronizedSlaveFrame:(BOOL)arg2 isSlomo:(BOOL)arg3 ;
-(id)nodeSubType;
-(id)nodeType;
-(int)_loadAndConfigureVideoDefringingBundle;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 forAttachedMediaKey:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;


@end


#endif