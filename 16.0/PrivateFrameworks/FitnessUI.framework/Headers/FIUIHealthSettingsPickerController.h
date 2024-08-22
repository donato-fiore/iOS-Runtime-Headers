// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIUIHEALTHSETTINGSPICKERCONTROLLER_H
#define FIUIHEALTHSETTINGSPICKERCONTROLLER_H

@class NSString, UIPickerView;
@protocol UIPickerViewDelegate, UIPickerViewDataSource, FIUIHealthSettingsForceUpdatable;

#import <Foundation/Foundation.h>


@interface FIUIHealthSettingsPickerController : NSObject <UIPickerViewDelegate, UIPickerViewDataSource, FIUIHealthSettingsForceUpdatable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isMetricLocale; // ivar: _isMetricLocale
@property (retain, nonatomic) UIPickerView *pickerView; // ivar: _pickerView
@property (readonly) Class superclass;


-(NSInteger)numberOfComponentsInPickerView:(id)arg0 ;
-(NSInteger)pickerView:(id)arg0 numberOfRowsInComponent:(NSInteger)arg1 ;
-(id)init;
-(void)forceUpdate;


@end


#endif