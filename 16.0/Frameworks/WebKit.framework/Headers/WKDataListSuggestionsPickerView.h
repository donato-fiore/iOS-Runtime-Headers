// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKDATALISTSUGGESTIONSPICKERVIEW_H
#define WKDATALISTSUGGESTIONSPICKERVIEW_H

@class UIPickerView;
@protocol WKFormControl;


#import "WKDataListSuggestionsControl.h"

@interface WKDataListSuggestionsPickerView : UIPickerView <WKFormControl>



@property (weak, nonatomic) WKDataListSuggestionsControl *control; // ivar: _control




@end


#endif