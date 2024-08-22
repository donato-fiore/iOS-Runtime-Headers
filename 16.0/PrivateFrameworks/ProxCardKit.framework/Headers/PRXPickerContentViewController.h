// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRXPICKERCONTENTVIEWCONTROLLER_H
#define PRXPICKERCONTENTVIEWCONTROLLER_H

@class NSString;
@protocol UIPickerViewDataSource, UIPickerViewDelegate;


#import "PRXCardContentViewController.h"
#import "PRXPickerContentView.h"

@interface PRXPickerContentViewController : PRXCardContentViewController <UIPickerViewDataSource, UIPickerViewDelegate>



@property (readonly, nonatomic) PRXPickerContentView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)pickerView:(id)arg0 rowHeightForComponent:(NSInteger)arg1 ;
-(NSInteger)numberOfComponentsInPickerView:(id)arg0 ;
-(NSInteger)pickerView:(id)arg0 numberOfRowsInComponent:(NSInteger)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif