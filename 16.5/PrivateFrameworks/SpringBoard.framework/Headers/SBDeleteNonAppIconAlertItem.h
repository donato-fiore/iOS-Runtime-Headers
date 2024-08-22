// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBDELETENONAPPICONALERTITEM_H
#define SBDELETENONAPPICONALERTITEM_H

@class SBAlertItem, SBIcon, NSString;



@interface SBDeleteNonAppIconAlertItem : SBAlertItem

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