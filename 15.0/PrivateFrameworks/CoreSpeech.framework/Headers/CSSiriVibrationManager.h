// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSSIRIVIBRATIONMANAGER_H
#define CSSIRIVIBRATIONMANAGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSSiriVibrationManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSInteger _ringVibrationState;
    NSInteger _silentVibrationState;
}




+(id)sharedManager;
-(BOOL)_ringVibrationValue;
-(BOOL)_silentVibrationValue;
-(BOOL)vibratesForDeviceRingerSwitchState:(NSInteger)arg0 ;
-(id)init;
-(void)_fetchRingVibrationValue;
-(void)_fetchSilentVibrationValue;
-(void)dealloc;
-(void)handleRingVibrationValueChange;
-(void)handleSilentVibrationValueChange;


@end


#endif