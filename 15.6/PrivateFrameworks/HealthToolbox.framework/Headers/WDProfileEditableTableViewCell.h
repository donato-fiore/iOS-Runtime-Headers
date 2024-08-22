// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDPROFILEEDITABLETABLEVIEWCELL_H
#define WDPROFILEEDITABLETABLEVIEWCELL_H



#import "WDProfileTableViewCell.h"

@interface WDProfileEditableTableViewCell : WDProfileTableViewCell



+(CGFloat)notEditingTrailingEdgeMargin;
-(BOOL)becomeFirstResponder;
-(BOOL)textFieldShouldBeginEditing:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_textFieldDidChange:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 ;


@end


#endif