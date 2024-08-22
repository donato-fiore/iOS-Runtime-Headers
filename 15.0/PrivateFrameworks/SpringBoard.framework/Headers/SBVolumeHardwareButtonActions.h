// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBVOLUMEHARDWAREBUTTONACTIONS_H
#define SBVOLUMEHARDWAREBUTTONACTIONS_H

@class NSHashTable;

#import <Foundation/Foundation.h>


@interface SBVolumeHardwareButtonActions : NSObject {
    BOOL _volumeIncreaseIsDown;
    BOOL _volumeDecreaseIsDown;
    NSHashTable *_volumePressBandits;
    id *_volumeIncreaseUpEventBlock;
    id *_volumeDecreaseUpEventBlock;
}




-(BOOL)_handleVolumeButtonDownForIncrease:(BOOL)arg0 modifiers:(NSInteger)arg1 ;
-(BOOL)_handleVolumeButtonUpForIncrease:(BOOL)arg0 ;
-(BOOL)_handleVolumeDecreaseUp;
-(BOOL)_handleVolumeIncreaseUp;
-(BOOL)_sendVolumeButtonDownToLegacyRegisteredClientsForIncrease:(BOOL)arg0 ;
-(BOOL)_sendVolumeButtonDownToSBUIControllerForIncrease:(BOOL)arg0 ;
-(BOOL)_sendVolumeButtonDownToSpringBoardInternalUIForIncrease:(BOOL)arg0 ;
-(BOOL)_sendVolumeButtonToSBUIControllerForIncrease:(BOOL)arg0 down:(BOOL)arg1 ;
-(void)_launchVolumeSettings;
-(void)_sendBanditsVolumeDecreased;
-(void)_sendBanditsVolumeIncreased;
-(void)addVolumePressBandit:(id)arg0 ;
-(void)cancelVolumePress;
-(void)removeVolumePressBandit:(id)arg0 ;
-(void)volumeDecreasePressDownWithModifiers:(NSInteger)arg0 ;
-(void)volumeDecreasePressUp;
-(void)volumeIncreasePressDownWithModifiers:(NSInteger)arg0 ;
-(void)volumeIncreasePressUp;


@end


#endif