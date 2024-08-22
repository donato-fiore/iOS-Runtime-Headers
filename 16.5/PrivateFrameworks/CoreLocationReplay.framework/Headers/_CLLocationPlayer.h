// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CLLOCATIONPLAYER_H
#define _CLLOCATIONPLAYER_H

@class CLSimulationManager;

#import <Foundation/Foundation.h>


@interface _CLLocationPlayer : NSObject {
    CLVisionLocationFuser _locationFuser;
}


@property (nonatomic, getter=isARSessionActive) BOOL arSessionActive; // ivar: _arSessionActive
@property (nonatomic, getter=isFusionEnabled) BOOL fusionEnabled; // ivar: _fusionEnabled
@property (nonatomic, getter=isNotifierActive) BOOL notifierActive; // ivar: _notifierActive
@property (nonatomic) CGFloat notifierLastARKitUpdateTime; // ivar: _notifierLastARKitUpdateTime
@property (nonatomic, getter=isPlayerActive) BOOL playerActive; // ivar: _playerActive
@property (nonatomic, getter=isSimulationEnabled) BOOL simulationEnabled; // ivar: _simulationEnabled
@property (retain, nonatomic) CLSimulationManager *simulationManager; // ivar: _simulationManager


-(BOOL)hasARSessionTimedOut:(CGFloat)arg0 ;
-(id)_getFusedLocationFrom:(id)arg0 machAbsTime:(CGFloat)arg1 ;
-(id)init;
-(void)_updateARSessionState:(NSUInteger)arg0 ;
-(void)_updateLocation:(struct CLDaemonLocation *)arg0 locationPrivate:(*void)arg1 ;
-(void)_updateVIOEstimation:(id)arg0 ;
-(void)_updateVLLocalizationResult:(id)arg0 ;
-(void)closeARSessionWithState:(NSUInteger)arg0 ;
-(void)convertCLLocation:(id)arg0 machAbsTime:(CGFloat)arg1 toDaemonLocation:(struct CLDaemonLocation *)arg2 daemonLocationPrivate:(*void)arg3 ;
-(void)dealloc;
-(void)setEnableFusion:(BOOL)arg0 ;
-(void)setEnableSimulation:(BOOL)arg0 ;
-(void)start;
-(void)startARSessionWithState:(NSUInteger)arg0 ;
-(void)stop;


@end


#endif