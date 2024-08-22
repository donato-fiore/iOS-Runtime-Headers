// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11MEDIACOREUIP33_C6C2762BD64E1F1C383A97C988662FA114VOLUMEOBSERVER_H
#define _TTC11MEDIACOREUIP33_C6C2762BD64E1F1C383A97C988662FA114VOLUMEOBSERVER_H

@class NSString, UIWindowScene;
@protocol MPVolumeControllerDelegate, MPVolumeDisplaying;

#import <Foundation/Foundation.h>


@interface _TtC11MediaCoreUIP33_C6C2762BD64E1F1C383A97C988662FA114VolumeObserver : NSObject <MPVolumeControllerDelegate, MPVolumeDisplaying>

 {
    ? volumeController;
    ? isDragging;
    ? _sliderValue;
    ? _isEnabled;
    ? commitVolumeChange;
}


@property (nonatomic) BOOL onScreenForVolumeDisplay; // ivar: isOnScreenForVolumeDisplay
@property (nonatomic, readonly) NSString *volumeAudioCategory;
@property (nonatomic, readonly) UIWindowScene *windowSceneForVolumeDisplay;


-(BOOL)isOnScreenForVolumeDisplay;
-(id)init;
-(void)volumeController:(id)arg0 volumeControlAvailableDidChange:(BOOL)arg1 ;
-(void)volumeController:(id)arg0 volumeValueDidChange:(float)arg1 ;


@end


#endif