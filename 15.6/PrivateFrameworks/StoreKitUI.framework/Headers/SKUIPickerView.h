// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIPICKERVIEW_H
#define SKUIPICKERVIEW_H

@class UIView, _UIBackdropView, UIPickerView, NSArray, NSString;
@protocol UIPickerViewDataSource, UIPickerViewDelegate, SKUIPickerViewDelegate;



@interface SKUIPickerView : UIView <UIPickerViewDataSource, UIPickerViewDelegate>

 {
    _UIBackdropView *_backdropView;
    UIPickerView *_pickerView;
    UIView *_separatorView;
    NSArray *_titles;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIPickerViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger selectedItemIndex;
@property (readonly) Class superclass;


-(NSInteger)numberOfComponentsInPickerView:(id)arg0 ;
-(NSInteger)pickerView:(id)arg0 numberOfRowsInComponent:(NSInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithTitles:(id)arg0 ;
-(id)pickerView:(id)arg0 titleForRow:(NSInteger)arg1 forComponent:(NSInteger)arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)pickerView:(id)arg0 didSelectRow:(NSInteger)arg1 inComponent:(NSInteger)arg2 ;


@end


#endif