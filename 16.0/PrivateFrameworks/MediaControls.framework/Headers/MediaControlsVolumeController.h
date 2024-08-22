// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MEDIACONTROLSVOLUMECONTROLLER_H
#define MEDIACONTROLSVOLUMECONTROLLER_H

@class NSString, NSHashTable, MPVolumeController;
@protocol MPVolumeControllerDelegate;

#import <Foundation/Foundation.h>


@interface MediaControlsVolumeController : NSObject <MPVolumeControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (readonly) Class superclass;
@property (retain, nonatomic) MPVolumeController *systemVolumeController; // ivar: _systemVolumeController


-(BOOL)volumeControlAvailableForRouteType:(NSInteger)arg0 ;
-(float)volumeForRouteType:(NSInteger)arg0 ;
-(id)glyphStateForVolumeLevel:(CGFloat)arg0 packageName:(id)arg1 ;
-(id)init;
-(id)packageNameForRouteType:(NSInteger)arg0 isRTL:(BOOL)arg1 isSlider:(BOOL)arg2 ;
-(void)_notifyVolumeChangedForVolumeController:(id)arg0 volumeControlAvailable:(BOOL)arg1 effectiveVolume:(float)arg2 ;
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)setVolume:(float)arg0 forRouteType:(NSInteger)arg1 ;
-(void)volumeController:(id)arg0 volumeControlAvailableDidChange:(BOOL)arg1 ;
-(void)volumeController:(id)arg0 volumeValueDidChange:(float)arg1 ;


@end


#endif