// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFSETTINGSALERTCONTROLLER_H
#define _SFSETTINGSALERTCONTROLLER_H

@class UIViewController, UINavigationController, NSArray;
@protocol _SFSettingsAlertControllerDelegate;


#import "_SFSettingsAlertContentController.h"
#import "_SFSettingsAlertItem.h"

@interface _SFSettingsAlertController : UIViewController {
    UINavigationController *_navigationController;
}


@property (readonly, nonatomic) _SFSettingsAlertContentController *_rootContentController;
@property (weak, nonatomic) NSObject<_SFSettingsAlertControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) _SFSettingsAlertItem *focusedItem;
@property (readonly, nonatomic) NSArray *items;
@property (nonatomic) NSInteger provenance; // ivar: _provenance
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