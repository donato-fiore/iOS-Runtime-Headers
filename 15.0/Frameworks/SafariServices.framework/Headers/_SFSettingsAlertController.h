// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFSETTINGSALERTCONTROLLER_H
#define _SFSETTINGSALERTCONTROLLER_H

@class UIViewController, UINavigationController, NSArray;


#import "_SFSettingsAlertContentController.h"
#import "_SFSettingsAlertItem.h"

@interface _SFSettingsAlertController : UIViewController {
    UINavigationController *_navigationController;
}


@property (readonly, nonatomic) _SFSettingsAlertContentController *_rootContentController;
@property (retain, nonatomic) _SFSettingsAlertItem *focusedItem;
@property (readonly, nonatomic) NSArray *items;
@property (nonatomic) BOOL usesReverseOrder; // ivar: _usesReverseOrder


-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_pushSubItemsForGroup:(id)arg0 ;
-(void)addDivider;
-(void)addItem:(id)arg0 ;
-(void)pushViewController:(id)arg0 ;
-(void)setPreferredContentSize:(struct CGSize )arg0 ;
-(void)viewDidLoad;


@end


#endif