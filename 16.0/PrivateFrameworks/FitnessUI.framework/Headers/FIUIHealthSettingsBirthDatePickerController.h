// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIUIHEALTHSETTINGSBIRTHDATEPICKERCONTROLLER_H
#define FIUIHEALTHSETTINGSBIRTHDATEPICKERCONTROLLER_H

@class NSString;
@protocol FIUIHealthSettingsForceUpdatable;

#import <Foundation/Foundation.h>

#import "FIUIHealthSettingsDatePicker.h"

@interface FIUIHealthSettingsBirthDatePickerController : NSObject <FIUIHealthSettingsForceUpdatable>



@property (copy, nonatomic) id *dateOfBirthUpdateHandler; // ivar: _dateOfBirthUpdateHandler
@property (retain, nonatomic) FIUIHealthSettingsDatePicker *datePickerView; // ivar: _datePickerView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)forceUpdate;
-(void)setDateOfBirth:(id)arg0 ;


@end


#endif