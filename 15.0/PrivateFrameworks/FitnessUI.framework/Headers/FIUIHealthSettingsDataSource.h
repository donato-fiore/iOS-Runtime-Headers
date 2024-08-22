// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIUIHEALTHSETTINGSDATASOURCE_H
#define FIUIHEALTHSETTINGSDATASOURCE_H

@class FIActivitySettingsController, NSString;
@protocol UITableViewDataSource;

#import <Foundation/Foundation.h>

#import "FIUIHealthSettingsTableViewCell.h"
#import "FIUIHealthSettingsBirthDatePickerController.h"
#import "FIUIHealthSettingsHeightPickerController.h"
#import "FIUIHealthSettingsSexPickerController.h"
#import "FIUIHealthSettingsWeightPickerController.h"
#import "FIUIHealthSettingsWheelchairUsePickerController.h"

@interface FIUIHealthSettingsDataSource : NSObject <UITableViewDataSource>

 {
    FIUIHealthSettingsTableViewCell *_birthDateCell;
    FIUIHealthSettingsTableViewCell *_biologicalSexCell;
    FIUIHealthSettingsTableViewCell *_heightCell;
    FIUIHealthSettingsTableViewCell *_weightCell;
    FIUIHealthSettingsTableViewCell *_wheelchairUseCell;
    FIActivitySettingsController *_preEditSettingsController;
    BOOL _showWheelchair;
}


@property (retain, nonatomic) FIUIHealthSettingsBirthDatePickerController *birthDatePickerController; // ivar: _birthDatePickerController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) FIActivitySettingsController *editedSettingsController;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) FIUIHealthSettingsHeightPickerController *heightPickerController; // ivar: _heightPickerController
@property (retain, nonatomic) FIActivitySettingsController *settingsController; // ivar: _settingsController
@property (retain, nonatomic) FIUIHealthSettingsSexPickerController *sexPickerController; // ivar: _sexPickerController
@property (readonly) Class superclass;
@property (retain, nonatomic) FIUIHealthSettingsWeightPickerController *weightPickerController; // ivar: _weightPickerController
@property (retain, nonatomic) FIUIHealthSettingsWheelchairUsePickerController *wheelchairUsePickerController; // ivar: _wheelchairUsePickerController


-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)biologicalSexCell;
-(id)birthDateCell;
-(id)heightCell;
-(id)initWithActivitySettingsController:(id)arg0 showWheelchair:(BOOL)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)weightCell;
-(id)wheelchairUseCell;
-(void)_updateBiologicalSexCell;
-(void)_updateBirthDateCell;
-(void)_updateCells;
-(void)_updateHeightCell;
-(void)_updateWeightCell;
-(void)_updateWheelchairUseCell;
-(void)cellDidBecomeFirstResponder:(id)arg0 ;
-(void)cellDidResignFirstResponder:(id)arg0 ;
-(void)endEditingAndDiscardChanges:(BOOL)arg0 ;
-(void)startEditing;


@end


#endif