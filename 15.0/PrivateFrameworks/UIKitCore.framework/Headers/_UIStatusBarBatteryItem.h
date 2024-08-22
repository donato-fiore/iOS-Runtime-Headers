// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISTATUSBARBATTERYITEM_H
#define _UISTATUSBARBATTERYITEM_H



#import "UIStatusBarItem.h"
#import "_UIBatteryView.h"
#import "_UIStatusBarImageView.h"
#import "_UIStatusBarStringView.h"
#import "_UIStaticBatteryView.h"

@interface _UIStatusBarBatteryItem : UIStatusBarItem

@property (retain, nonatomic) _UIBatteryView *batteryView; // ivar: _batteryView
@property (retain, nonatomic) _UIStatusBarImageView *chargingView; // ivar: _chargingView
@property (nonatomic) BOOL highlighted; // ivar: _highlighted
@property (retain, nonatomic) _UIStatusBarStringView *percentView; // ivar: _percentView
@property (retain, nonatomic) _UIStaticBatteryView *staticBatteryView; // ivar: _staticBatteryView


+(id)chargingDisplayIdentifier;
+(id)iconDisplayIdentifier;
+(id)percentDisplayIdentifier;
+(id)staticIconDisplayIdentifier;
-(id)applyUpdate:(id)arg0 toDisplayItem:(id)arg1 ;
-(id)dependentEntryKeys;
-(id)viewForIdentifier:(id)arg0 ;


@end


#endif