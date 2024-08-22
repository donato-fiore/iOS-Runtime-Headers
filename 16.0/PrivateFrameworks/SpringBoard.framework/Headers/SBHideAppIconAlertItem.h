// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHIDEAPPICONALERTITEM_H
#define SBHIDEAPPICONALERTITEM_H

@class SBAlertItem, SBIcon, NSString;



@interface SBHideAppIconAlertItem : SBAlertItem

@property (readonly, nonatomic) SBIcon *icon; // ivar: _icon
@property (readonly, copy, nonatomic) NSString *iconLocation; // ivar: _iconLocation


-(BOOL)dismissOnLock;
-(BOOL)forcesModalAlertAppearance;
-(BOOL)shouldShowInLockScreen;
-(id)initWithIcon:(id)arg0 location:(id)arg1 ;
-(void)configure:(BOOL)arg0 requirePasscodeForActions:(BOOL)arg1 ;
-(void)didActivate;


@end


#endif