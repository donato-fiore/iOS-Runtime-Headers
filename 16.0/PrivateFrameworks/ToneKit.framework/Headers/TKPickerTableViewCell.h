// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TKPICKERTABLEVIEWCELL_H
#define TKPICKERTABLEVIEWCELL_H

@class UITableViewCell, UIColor;



@interface TKPickerTableViewCell : UITableViewCell

@property (nonatomic) BOOL shouldTintTextLabel; // ivar: _shouldTintTextLabel
@property (retain, nonatomic) UIColor *textLabelColor; // ivar: _textLabelColor


-(void)_updateTextLabelColor;
-(void)setSectionLocation:(int)arg0 animated:(BOOL)arg1 ;
-(void)tintColorDidChange;


@end


#endif