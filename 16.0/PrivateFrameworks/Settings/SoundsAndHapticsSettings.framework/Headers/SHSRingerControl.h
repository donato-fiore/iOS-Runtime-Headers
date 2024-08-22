// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHSRINGERCONTROL_H
#define SHSRINGERCONTROL_H

@class AVSystemController;
@protocol SHSRingerControlDelegate;

#import <Foundation/Foundation.h>


@interface SHSRingerControl : NSObject

@property (nonatomic) BOOL _logFaultCalledForBackground; // ivar: __logFaultCalledForBackground
@property (nonatomic) BOOL _logFaultCalledForInactive; // ivar: __logFaultCalledForInactive
@property (retain, nonatomic) AVSystemController *_systemController; // ivar: __systemController
@property (nonatomic) NSInteger _volumeChangeCoalescingCount; // ivar: __volumeChangeCoalescingCount
@property (nonatomic) BOOL _volumeInitialized; // ivar: __volumeInitialized
@property (nonatomic) BOOL appWantsVolumeChangeEvents; // ivar: _appWantsVolumeChangeEvents
@property (nonatomic) BOOL canChangeRingtoneWithButtons;
@property (weak, nonatomic) NSObject<SHSRingerControlDelegate> *delegate; // ivar: _delegate
@property (nonatomic) float volume; // ivar: _volume


-(id)init;
-(void)_handleEffectiveVolumeDidChangeNotification:(id)arg0 ;
-(void)_handleServerConnectionDiedNotification:(id)arg0 ;
-(void)_setup;
-(void)_tearDown;
-(void)_updateVolume:(float)arg0 ;
-(void)dealloc;
-(void)reload;


@end


#endif