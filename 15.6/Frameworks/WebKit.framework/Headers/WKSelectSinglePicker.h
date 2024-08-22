// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKSELECTSINGLEPICKER_H
#define WKSELECTSINGLEPICKER_H

@class UIPickerView, NSString;
@protocol WKFormControl, UIPickerViewDataSource, UIPickerViewDelegate;


#import "WKContentView.h"

@interface WKSelectSinglePicker : UIPickerView <WKFormControl, UIPickerViewDataSource, UIPickerViewDelegate>

 {
    WKContentView *_view;
    NSInteger _selectedIndex;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)numberOfComponentsInPickerView:(id)arg0 ;
-(NSInteger)pickerView:(id)arg0 numberOfRowsInComponent:(NSInteger)arg1 ;
-(id)controlView;
-(id)initWithView:(id)arg0 ;
-(id)pickerView:(id)arg0 attributedTitleForRow:(NSInteger)arg1 forComponent:(NSInteger)arg2 ;
-(void)controlBeginEditing;
-(void)controlEndEditing;
-(void)dealloc;
-(void)pickerView:(id)arg0 didSelectRow:(NSInteger)arg1 inComponent:(NSInteger)arg2 ;
-(void)selectRow:(NSInteger)arg0 inComponent:(NSInteger)arg1 extendingSelection:(BOOL)arg2 ;


@end


#endif