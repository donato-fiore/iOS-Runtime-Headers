// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PMEDITORDURATIONVIEWCONTROLLER_H
#define PMEDITORDURATIONVIEWCONTROLLER_H

@class UIViewController, NSString, UIPickerView, UILabel, UITableView;
@protocol UIPickerViewDelegate, UIPickerViewDataSource, UITableViewDelegate, UITableViewDataSource;


#import "PMDurationProvider.h"

@interface PMEditorDurationViewController : UIViewController <UIPickerViewDelegate, UIPickerViewDataSource, UITableViewDelegate, UITableViewDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIPickerView *durationPicker; // ivar: _durationPicker
@property (retain, nonatomic) PMDurationProvider *durationProvider; // ivar: _durationProvider
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger maximumDuration;
@property (readonly, nonatomic) NSUInteger minimumDuration;
@property (retain, nonatomic) UILabel *minutesLabel; // ivar: _minutesLabel
@property (retain, nonatomic) UILabel *secondsLabel; // ivar: _secondsLabel
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView


-(BOOL)isValidSelectionForRow:(NSInteger)arg0 forComponent:(NSInteger)arg1 ;
-(CGFloat)pickerView:(id)arg0 rowHeightForComponent:(NSInteger)arg1 ;
-(CGFloat)pickerView:(id)arg0 widthForComponent:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfComponentsInPickerView:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)pickerView:(id)arg0 numberOfRowsInComponent:(NSInteger)arg1 ;
-(NSInteger)secondsComponentOffset;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)pickerView:(id)arg0 viewForRow:(NSInteger)arg1 forComponent:(NSInteger)arg2 reusingView:(id)arg3 ;
-(id)pickerView:(id)arg0 voiceOverStringForRow:(NSInteger)arg1 forComponent:(NSInteger)arg2 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)createDurationPickerView;
-(void)pickerView:(id)arg0 didSelectRow:(NSInteger)arg1 inComponent:(NSInteger)arg2 ;
-(void)refreshPickerSelectionTime;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif