// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBREMOVEWIDGETALERTITEM_H
#define SBREMOVEWIDGETALERTITEM_H

@class SBAlertItem, SBWidgetIcon, NSString, SBHIconManager;
@protocol SBLeafIconDataSource;



@interface SBRemoveWidgetAlertItem : SBAlertItem

@property (retain, nonatomic) SBWidgetIcon *icon; // ivar: _icon
@property (retain, nonatomic) NSString *iconLocation; // ivar: _iconLocation
@property (weak, nonatomic) SBHIconManager *iconManager; // ivar: _iconManager
@property (retain, nonatomic) NSObject<SBLeafIconDataSource> *widget; // ivar: _widget


-(BOOL)dismissOnLock;
-(BOOL)forcesModalAlertAppearance;
-(BOOL)shouldShowInLockScreen;
-(id)initWithWidget:(id)arg0 inIcon:(id)arg1 location:(id)arg2 iconManager:(id)arg3 ;
-(id)initWithWidgetIcon:(id)arg0 location:(id)arg1 iconManager:(id)arg2 ;
-(void)configure:(BOOL)arg0 requirePasscodeForActions:(BOOL)arg1 ;
-(void)didActivate;


@end


#endif