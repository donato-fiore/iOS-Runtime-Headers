// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKDATALISTSUGGESTIONSPICKER_H
#define WKDATALISTSUGGESTIONSPICKER_H

@class NSString;
@protocol UIPickerViewDataSource, UIPickerViewDelegate;


#import "WKDataListSuggestionsControl.h"

@interface WKDataListSuggestionsPicker : WKDataListSuggestionsControl <UIPickerViewDataSource, UIPickerViewDelegate>

 {
    RetainPtr<WKDataListSuggestionsPickerView> _pickerView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)numberOfComponentsInPickerView:(id)arg0 ;
-(NSInteger)pickerView:(id)arg0 numberOfRowsInComponent:(NSInteger)arg1 ;
-(id)initWithInformation:(*void)arg0 inView:(id)arg1 ;
-(id)pickerView:(id)arg0 titleForRow:(NSInteger)arg1 forComponent:(NSInteger)arg2 ;
-(void)invalidate;
-(void)showSuggestionsDropdown:(*void)arg0 activationType:(unsigned char)arg1 ;
-(void)updateWithInformation:(*void)arg0 ;


@end


#endif