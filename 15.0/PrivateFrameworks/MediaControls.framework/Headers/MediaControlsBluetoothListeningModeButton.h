// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MEDIACONTROLSBLUETOOTHLISTENINGMODEBUTTON_H
#define MEDIACONTROLSBLUETOOTHLISTENINGMODEBUTTON_H

@class NSSet, UIColor, NSString;


#import "MediaControlsExpandableButton.h"
#import "MediaControlsHapticPlayer.h"

@interface MediaControlsBluetoothListeningModeButton : MediaControlsExpandableButton

@property (retain, nonatomic) NSSet *availableListeningModes; // ivar: _availableListeningModes
@property (retain, nonatomic) MediaControlsHapticPlayer *hapticPlayer; // ivar: _hapticPlayer
@property (retain, nonatomic) UIColor *offColor; // ivar: _offColor
@property (retain, nonatomic) NSString *selectedListeningMode;


-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(id)initForControlCenter;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_springAnimate:(id)arg0 ;
-(void)cancelTrackingWithEvent:(id)arg0 ;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)playFailedValueChangedEventHaptic;
-(void)playFailedValueChangedEventHapticWithMessage:(id)arg0 ;
-(void)playRequiresBothBudsInEarErrorHaptic;
-(void)playValueChangedEventHaptic;


@end


#endif