// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIKBAUTOFILLTESTTAGGERVIEW_H
#define UIKBAUTOFILLTESTTAGGERVIEW_H

@class NSString, NSArray;
@protocol UIPickerViewDataSource, UIPickerViewDelegate, UIKBAutoFillTestTaggerViewDelegate;


#import "UIView.h"
#import "UIKBAutoFillTestTagRequest.h"
#import "UIPickerView.h"
#import "UIToolbar.h"
#import "UIBarButtonItem.h"
#import "UIVisualEffectView.h"
#import "UILabel.h"

@interface UIKBAutoFillTestTaggerView : UIView <UIPickerViewDataSource, UIPickerViewDelegate>

 {
    UIKBAutoFillTestTagRequest *_currentRequest;
    UIPickerView *_pickerView;
    UIToolbar *_toolbar;
    UIBarButtonItem *_nextBarButtoItem;
    UIBarButtonItem *_previousBarButtonItem;
    UIBarButtonItem *_doneBarButtonItem;
    UIVisualEffectView *_visualEffectView;
    UILabel *_titleLabel;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UIKBAutoFillTestTaggerViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *tagRequests; // ivar: _tagRequests


-(CGFloat)pickerView:(id)arg0 rowHeightForComponent:(NSInteger)arg1 ;
-(NSInteger)numberOfComponentsInPickerView:(id)arg0 ;
-(NSInteger)pickerView:(id)arg0 numberOfRowsInComponent:(NSInteger)arg1 ;
-(id)_formTypes;
-(id)_textFieldTypes;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pickerView:(id)arg0 titleForRow:(NSInteger)arg1 forComponent:(NSInteger)arg2 ;
-(void)_doneBarButtonAction:(id)arg0 ;
-(void)_nextBarButtonAction:(id)arg0 ;
-(void)_performTagRequest:(id)arg0 ;
-(void)_previousBarButtonAction:(id)arg0 ;
-(void)_updateTitle;
-(void)_updateToolbarButtons;
-(void)pickerView:(id)arg0 didSelectRow:(NSInteger)arg1 inComponent:(NSInteger)arg2 ;


@end


#endif