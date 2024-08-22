// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWFIGVIDEOCAPTURESYNCHRONIZEDSTREAMSGROUP_H
#define BWFIGVIDEOCAPTURESYNCHRONIZEDSTREAMSGROUP_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>

#import "BWFigVideoCaptureStream.h"
#import "BWFigCaptureSynchronizedStreamsGroup.h"

@interface BWFigVideoCaptureSynchronizedStreamsGroup : NSObject {
    NSArray *_activeStreams;
    NSDictionary *_cameraViewMatricesByPortType;
    NSDictionary *_cameraPoseMatricesByPortType;
    BOOL _readOnly;
    BOOL _atomicMasterSlaveReconfigurationSupported;
    BOOL _masterConfigurationSupported;
    BWFigVideoCaptureStream *_currentMasterStream;
    NSDictionary *_currentSlaveConfigurationsByPortType;
    int _maximumNumberOfSlaveStreamsWithoutFrameSkipping;
    int _maximumNumberOfSlaveStreamsWithFrameProcessingEnabled;
    int _maximumNumberOfEnabledSlaveTimeMachines;
    BOOL _statsMasterHasBeenSet;
}


@property (readonly, nonatomic) NSArray *activePortTypes; // ivar: _activePortTypes
@property (copy, nonatomic) NSDictionary *baseZoomFactorsByPortType; // ivar: _baseZoomFactorsByPortType
@property (readonly, nonatomic) BWFigVideoCaptureStream *cameraControlsStatisticsMasterStream; // ivar: _cameraControlsStatisticsMasterStream
@property (readonly, nonatomic) NSDictionary *clientBaseZoomFactorsByPortType; // ivar: _clientBaseZoomFactorsByPortType
@property (readonly, nonatomic) BOOL maximumNumberOfSlaveStreamsWithFrameProcessingEnabledSupported;
@property (readonly, nonatomic) BOOL maximumNumberOfSlaveStreamsWithoutFrameSkippingSupported;
@property (readonly, nonatomic) BOOL minimumMasterToSlaveFrameRateRatioSupported;
@property (readonly, nonatomic) BWFigCaptureSynchronizedStreamsGroup *syncGroup; // ivar: _synchronizedStreamsGroup


+(void)initialize;
-(id)_slaveConfigurationForStream:(id)arg0 ;
-(id)_worldPortType;
-(id)cameraPoseMatrixForPortType:(id)arg0 ;
-(id)cameraViewMatrixForPortType:(id)arg0 ;
-(id)initWithSynchronizedStreamsGroup:(id)arg0 activeStreams:(id)arg1 readOnly:(BOOL)arg2 baseZoomFactorOverrides:(id)arg3 error:(*int)arg4 ;
-(int)_computeBaseZoomFactorsWithOverrides:(id)arg0 ;
-(int)_getViewAndPoseMatrices;
-(int)setMasterStream:(id)arg0 allStreams:(id)arg1 ;
-(unsigned int)minimumMasterToSlaveFrameRateRatio;
-(void)dealloc;
-(void)setMaximumNumberOfEnabledSlaveTimeMachines:(int)arg0 ;
-(void)setMaximumNumberOfSlaveStreamsWithFrameProcessingEnabled:(int)arg0 ;
-(void)setMaximumNumberOfSlaveStreamsWithoutFrameSkipping:(int)arg0 ;
-(void)setMinimumMasterToSlaveFrameRateRatio:(unsigned int)arg0 ;


@end


#endif