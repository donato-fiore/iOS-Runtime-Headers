// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBPRESSPRECEDENCEARBITER_H
#define SBPRESSPRECEDENCEARBITER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface SBPressPrecedenceArbiter : NSObject {
    NSUInteger _volumeAndLockButtonPriority;
    NSInteger _homeButtonType;
    BOOL _isMusicPlayingSomewhere;
}


@property (retain, nonatomic) NSArray *hardwareButtons; // ivar: _hardwareButtons


-(BOOL)_shouldArbitrateLockAndVolumeHardwareButtonPriorities;
-(NSUInteger)_currentButtonPriority;
-(id)initWithHomeButtonType:(NSInteger)arg0 ;
-(void)_applyButtonPriority:(NSUInteger)arg0 ;
-(void)_initializeButtonPriorities;
-(void)_updateButtonPrioritiesForClientIsPlayingNotification:(id)arg0 ;
-(void)_updateButtonPrioritiesForNotification:(id)arg0 ;
-(void)_updateButtonPriority;


@end


#endif