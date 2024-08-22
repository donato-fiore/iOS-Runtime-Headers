// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISTATUSBARBLUETOOTHITEM_H
#define _UISTATUSBARBLUETOOTHITEM_H

@class UIStatusBarIndicatorItem;


#import "_UIStatusBarImageView.h"

@interface _UIStatusBarBluetoothItem : UIStatusBarIndicatorItem

@property (retain, nonatomic) _UIStatusBarImageView *batteryImageView; // ivar: _batteryImageView


+(BOOL)alwaysShowRegulatoryBluetoothIndicator;
+(id)batteryDisplayIdentifier;
-(id)_batteryFillColorForEntry:(id)arg0 usingTintColor:(id)arg1 ;
-(id)applyUpdate:(id)arg0 toDisplayItem:(id)arg1 ;
-(id)indicatorEntryKey;
-(id)systemImageNameForUpdate:(id)arg0 ;
-(id)viewForIdentifier:(id)arg0 ;


@end


#endif