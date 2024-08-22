// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NFMPLAYCOMMANDS_H
#define NFMPLAYCOMMANDS_H

@class AVQueuePlayer, NSTimer;

#import <Foundation/Foundation.h>


@interface NFMPlayCommands : NSObject

@property (retain, nonatomic) AVQueuePlayer *avQueuePlayer; // ivar: _avQueuePlayer
@property (nonatomic) NSInteger flashCount; // ivar: _flashCount
@property (nonatomic) BOOL flashEnabled; // ivar: _flashEnabled
@property (retain, nonatomic) NSTimer *flashScheduler; // ivar: _flashScheduler


-(BOOL)_isDeviceLocked;
-(BOOL)_isFaceTimeOrCameraFrontmost;
-(BOOL)_isInFaceTimeCall;
-(BOOL)_isInternalInstall;
-(BOOL)playFindLocallySound;
-(BOOL)playSoundAndFlash;
-(id)init;
-(void)beginObservingTUChanges;
-(void)cancelAllAlerts:(id)arg0 ;
-(void)dealloc;
-(void)flashLED;
-(void)flashLEDIfAppropriate;
-(void)playbackStateChanged:(id)arg0 ;
-(void)updateFlashState;


@end


#endif