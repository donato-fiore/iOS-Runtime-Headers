// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNFREGEDITABLEPHONETABLECELL_H
#define CNFREGEDITABLEPHONETABLECELL_H

@class NSString;


#import "CNFRegEditableTableCell.h"

@interface CNFRegEditablePhoneTableCell : CNFRegEditableTableCell {
    SEL _countryCodeSelector;
    NSString *_previousValue;
}




-(id)countryCode;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct ? )suggestionsForString:(id)arg0 inputIndex:(unsigned int)arg1 ;
-(void)dealloc;
-(void)setValueChangedTarget:(id)arg0 action:(SEL)arg1 specifier:(id)arg2 ;


@end


#endif