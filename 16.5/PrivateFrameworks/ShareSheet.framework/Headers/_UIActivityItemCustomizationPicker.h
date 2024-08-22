// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIACTIVITYITEMCUSTOMIZATIONPICKER_H
#define _UIACTIVITYITEMCUSTOMIZATIONPICKER_H

@class NSArray, NSString;
@protocol _UIActivityItemCustomizationPicker;


#import "UIActivityItemCustomization.h"

@interface _UIActivityItemCustomizationPicker : UIActivityItemCustomization <_UIActivityItemCustomizationPicker>

 {
    NSInteger _selectedOptionIndex;
    NSInteger _previousSelectedOptionIndex;
}


@property (copy, nonatomic, setter=_setHandler:) id *_handler; // ivar: __handler
@property (readonly, nonatomic) NSArray *_optionTitles; // ivar: _optionTitles
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger previousSelectedOptionIndex;
@property (readonly, nonatomic) NSInteger selectedOptionIndex;
@property (readonly) Class superclass;


-(id)initWithIdentifier:(id)arg0 optionTitles:(id)arg1 selectedOptionIndex:(NSInteger)arg2 footerText:(id)arg3 ;


@end


#endif