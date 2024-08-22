// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSUICELLULARDATALISTITEMSCONTROLLER_H
#define PSUICELLULARDATALISTITEMSCONTROLLER_H

@class PSListItemsController, RadiosPreferences;
@protocol RadiosPreferencesDelegate;



@interface PSUICellularDataListItemsController : PSListItemsController <RadiosPreferencesDelegate>



@property (retain, nonatomic) RadiosPreferences *radioPreferences; // ivar: _radioPreferences


-(id)init;
-(id)specifiers;
-(void)airplaneModeChanged;
-(void)dealloc;
-(void)reloadCache;
-(void)setSpecifier:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif