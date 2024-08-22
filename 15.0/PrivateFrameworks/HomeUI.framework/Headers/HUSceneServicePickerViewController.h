// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUSCENESERVICEPICKERVIEWCONTROLLER_H
#define HUSCENESERVICEPICKERVIEWCONTROLLER_H

@class HFActionSetBuilder, NSSet;
@protocol HUSceneServicePickerViewControllerDelegate;


#import "HUSelectableServiceGridViewController.h"

@interface HUSceneServicePickerViewController : HUSelectableServiceGridViewController

@property (readonly, nonatomic) HFActionSetBuilder *actionSetBuilder; // ivar: _actionSetBuilder
@property (retain, nonatomic) NSSet *existingActionSetCharacteristics; // ivar: _existingActionSetCharacteristics
@property (retain, nonatomic) NSSet *existingActionSetMediaProfiles; // ivar: _existingActionSetMediaProfiles
@property (weak, nonatomic) NSObject<HUSceneServicePickerViewControllerDelegate> *servicePickerDelegate; // ivar: _servicePickerDelegate


-(BOOL)_canSelectMediaAccessoryItem:(id)arg0 ;
-(BOOL)canSelectItem:(id)arg0 indexPath:(id)arg1 ;
-(id)_updateActionSetBuilder;
-(id)initWithActionSetBuilder:(id)arg0 servicePickerDelegate:(id)arg1 ;
-(id)initWithServiceGridItemManager:(id)arg0 ;
-(id)layoutOptionsForSection:(NSInteger)arg0 ;
-(void)_cancel:(id)arg0 ;
-(void)_done:(id)arg0 ;
-(void)_presentUnsupportedAlertWithTitle:(id)arg0 message:(id)arg1 ;
-(void)_validateDoneButton;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)configureCell:(id)arg0 forItem:(id)arg1 ;
-(void)didChangeSelection;
-(void)itemManagerDidUpdate:(id)arg0 ;


@end


#endif