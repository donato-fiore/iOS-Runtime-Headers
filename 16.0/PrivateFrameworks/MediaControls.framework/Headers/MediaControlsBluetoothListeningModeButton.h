// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MEDIACONTROLSBLUETOOTHLISTENINGMODEBUTTON_H
#define MEDIACONTROLSBLUETOOTHLISTENINGMODEBUTTON_H

@class NSSet, UIColor, NSString;


#import "MediaControlsExpandableButton.h"

@interface MediaControlsBluetoothListeningModeButton : MediaControlsExpandableButton

@property (retain, nonatomic) NSSet *availableListeningModes; // ivar: _availableListeningModes
@property (retain, nonatomic) UIColor *offColor; // ivar: _offColor
@property (retain, nonatomic) NSString *selectedListeningMode;


-(id)initForControlCenter;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_springAnimate:(id)arg0 ;
-(void)playRequiresBothBudsInEarErrorHaptic;


@end


#endif