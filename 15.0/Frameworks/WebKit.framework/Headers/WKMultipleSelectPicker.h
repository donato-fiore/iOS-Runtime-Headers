// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKMULTIPLESELECTPICKER_H
#define WKMULTIPLESELECTPICKER_H

@class UIPickerView, NSString;
@protocol WKFormControl, UIPickerViewDataSource, UIPickerViewDelegate;


#import "WKContentView.h"

@interface WKMultipleSelectPicker : UIPickerView <WKFormControl, UIPickerViewDataSource, UIPickerViewDelegate>

 {
    WKContentView *_view;
    NSInteger _textAlignment;
    NSUInteger _singleSelectionIndex;
    BOOL _allowsMultipleSelection;
    CGFloat _layoutWidth;
    CGFloat _fontSize;
    CGFloat _maximumTextWidth;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)selectFormAccessoryHasCheckedItemAtRow:(NSInteger)arg0 ;
-(NSInteger)findItemIndexAt:(int)arg0 ;
-(NSInteger)numberOfComponentsInPickerView:(id)arg0 ;
-(NSInteger)pickerView:(id)arg0 numberOfRowsInComponent:(NSInteger)arg1 ;
-(id)controlView;
-(id)initWithView:(id)arg0 ;
-(id)pickerView:(id)arg0 viewForRow:(NSInteger)arg1 forComponent:(NSInteger)arg2 reusingView:(id)arg3 ;
-(void)controlBeginEditing;
-(void)controlEndEditing;
-(void)dealloc;
-(void)layoutSubviews;
-(void)pickerView:(id)arg0 row:(int)arg1 column:(int)arg2 checked:(BOOL)arg3 ;
-(void)selectRow:(NSInteger)arg0 inComponent:(NSInteger)arg1 extendingSelection:(BOOL)arg2 ;


@end


#endif