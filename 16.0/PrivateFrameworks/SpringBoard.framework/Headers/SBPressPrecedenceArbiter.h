// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBPRESSPRECEDENCEARBITER_H
#define SBPRESSPRECEDENCEARBITER_H

@class NSString, NSArray;
@protocol SBAVSystemControllerCacheObserver;

#import <Foundation/Foundation.h>


@interface SBPressPrecedenceArbiter : NSObject <SBAVSystemControllerCacheObserver>

 {
    NSUInteger _volumeAndLockButtonPriority;
    NSInteger _homeButtonType;
    BOOL _isAudioPlayingSomewhere;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *hardwareButtons; // ivar: _hardwareButtons
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_shouldArbitrateLockAndVolumeHardwareButtonPriorities;
-(NSUInteger)_currentButtonPriority;
-(id)initWithHomeButtonType:(NSInteger)arg0 ;
-(void)_applyButtonPriority:(NSUInteger)arg0 ;
-(void)_updateButtonPrioritiesForNotification:(id)arg0 ;
-(void)_updateButtonPriority;
-(void)cache:(id)arg0 didUpdateAudioSessionPlaying:(BOOL)arg1 ;


@end


#endif