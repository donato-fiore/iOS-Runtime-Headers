// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUSERVICEPICKERVIEWCONTROLLER_H
#define HUSERVICEPICKERVIEWCONTROLLER_H

@class NSSet;
@protocol HUServicePickerViewControllerDelegate;


#import "HUSelectableServiceGridViewController.h"

@interface HUServicePickerViewController : HUSelectableServiceGridViewController

@property (weak, nonatomic) NSObject<HUServicePickerViewControllerDelegate> *delegate;
@property (nonatomic) BOOL isPresentedModally; // ivar: _isPresentedModally
@property (retain, nonatomic) NSSet *preselectedServices; // ivar: _preselectedServices


-(BOOL)_isItemPreselected:(id)arg0 ;
-(BOOL)_preselectedServicesContainsService:(id)arg0 ;
-(BOOL)serviceGridItemManager:(id)arg0 shouldHideItem:(id)arg1 ;
-(id)_servicesForItem:(id)arg0 ;
-(id)_servicesForItems:(id)arg0 ;
-(id)initWithHome:(id)arg0 isPresentedModally:(BOOL)arg1 delegate:(id)arg2 ;
-(id)initWithHome:(id)arg0 selectedServices:(id)arg1 isPresentedModally:(BOOL)arg2 delegate:(id)arg3 ;
-(void)_cancel:(id)arg0 ;
-(void)_done:(id)arg0 ;
-(void)_setUpNavButtons;
-(void)itemManagerDidUpdate:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif