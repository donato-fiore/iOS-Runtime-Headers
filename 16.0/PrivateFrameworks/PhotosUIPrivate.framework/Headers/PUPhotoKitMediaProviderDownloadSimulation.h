// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUPHOTOKITMEDIAPROVIDERDOWNLOADSIMULATION_H
#define PUPHOTOKITMEDIAPROVIDERDOWNLOADSIMULATION_H


#import <Foundation/Foundation.h>


@interface PUPhotoKitMediaProviderDownloadSimulation : NSObject

@property (nonatomic, setter=_setSimulatedProgress:) CGFloat _simulatedProgress; // ivar: __simulatedProgress
@property (readonly, nonatomic) CGFloat _updateInterval; // ivar: __updateInterval
@property (nonatomic) CGFloat downloadDuration; // ivar: _downloadDuration
@property (nonatomic) BOOL shouldSimulateFailure; // ivar: _shouldSimulateFailure


-(id)init;
-(void)_updateSimulatedDownload;
-(void)beginSimulation;
-(void)endSimulationWithError:(id)arg0 ;
-(void)updateSimulationWithProgress:(CGFloat)arg0 ;


@end


#endif