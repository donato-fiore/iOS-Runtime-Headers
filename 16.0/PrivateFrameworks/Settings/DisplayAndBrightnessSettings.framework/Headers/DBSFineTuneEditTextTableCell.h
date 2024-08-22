// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBSFINETUNEEDITTEXTTABLECELL_H
#define DBSFINETUNEEDITTEXTTABLECELL_H

@class PSEditableTableCell, UILabel;



@interface DBSFineTuneEditTextTableCell : PSEditableTableCell {
    CGFloat _minValue;
    CGFloat _maxValue;
    BOOL _valueValid;
    UILabel *_validationLabel;
}




-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(void)layoutSubviews;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;


@end


#endif