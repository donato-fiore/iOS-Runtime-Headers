// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIPRINTRANGEVIEW_H
#define UIPRINTRANGEVIEW_H

@class UIView, NSString, UIPickerView, NSArray, UITableView;
@protocol UIPickerViewDataSource, UIPickerViewDelegate, UITableViewDataSource, UITableViewDelegate;


#import "UIPrintInfo.h"

@interface UIPrintRangeView : UIView <UIPickerViewDataSource, UIPickerViewDelegate, UITableViewDataSource, UITableViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIPickerView *fromPicker; // ivar: _fromPicker
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *pickerView; // ivar: _pickerView
@property (nonatomic) CGFloat pickerWidth; // ivar: _pickerWidth
@property (retain, nonatomic) UIPrintInfo *printInfo; // ivar: _printInfo
@property (retain, nonatomic) NSArray *savedMultiPageRanges; // ivar: _savedMultiPageRanges
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView
@property (retain, nonatomic) UIPickerView *toPicker; // ivar: _toPicker


-(CGFloat)pickerView:(id)arg0 widthForComponent:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfComponentsInPickerView:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)pickerView:(id)arg0 numberOfRowsInComponent:(NSInteger)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 printInfo:(id)arg1 ;
-(id)pickerView:(id)arg0 titleForRow:(NSInteger)arg1 forComponent:(NSInteger)arg2 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(void)dealloc;
-(void)loadViews;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pickerView:(id)arg0 didSelectRow:(NSInteger)arg1 inComponent:(NSInteger)arg2 ;
-(void)reloadTableView;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updatePageRangeView;


@end


#endif