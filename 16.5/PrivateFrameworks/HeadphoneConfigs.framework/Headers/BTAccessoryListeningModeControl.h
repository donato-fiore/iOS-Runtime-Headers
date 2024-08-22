// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BTACCESSORYLISTENINGMODECONTROL_H
#define BTACCESSORYLISTENINGMODECONTROL_H

@class PSTableCell, MediaControlsBluetoothListeningModeButton, NSMutableArray;


#import "BTSDevice.h"

@interface BTAccessoryListeningModeControl : PSTableCell {
    MediaControlsBluetoothListeningModeButton *_listeningModeButton;
    NSMutableArray *_listeningModesArray;
}


@property (nonatomic) int accessoryListeningModeSupport; // ivar: _accessoryListeningModeSupport
@property (weak, nonatomic) BTSDevice *currentDevice; // ivar: _currentDevice


+(CGFloat)preferredHeight;
+(NSInteger)cellStyle;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)setListeningMode:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)listeningMode;
-(void)applicationDidBecomeActive:(id)arg0 ;
-(void)bluetoothListeningModeButtonDidUpdateValue:(id)arg0 ;
-(void)layoutSubviews;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;


@end


#endif