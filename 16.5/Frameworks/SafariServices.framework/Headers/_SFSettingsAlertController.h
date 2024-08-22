// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFSETTINGSALERTCONTROLLER_H
#define _SFSETTINGSALERTCONTROLLER_H

@class UIViewController, UINavigationController, NSString, NSArray;
@protocol SFPopoverSourceInfoProviding, _SFSettingsAlertControllerDelegate, _SFPopoverSourceInfo;


#import "_SFSettingsAlertContentController.h"
#import "_SFSettingsAlertItem.h"

@interface _SFSettingsAlertController : UIViewController <SFPopoverSourceInfoProviding>

 {
    UINavigationController *_navigationController;
}


@property (readonly, nonatomic) _SFSettingsAlertContentController *_rootContentController;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_SFSettingsAlertControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _SFSettingsAlertItem *focusedItem;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *items;
@property (nonatomic) NSInteger provenance; // ivar: _provenance
@property (readonly, nonatomic) NSObject<_SFPopoverSourceInfo> *safari_popoverSourceInfo;
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesReverseOrder; // ivar: _usesReverseOrder


-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)presentingViewController;
-(void)_pushSubItemsForGroup:(id)arg0 ;
-(void)addDivider;
-(void)addItem:(id)arg0 ;
-(void)pushViewController:(id)arg0 ;
-(void)setPreferredContentSize:(struct CGSize )arg0 ;
-(void)viewDidLoad;


@end


#endif