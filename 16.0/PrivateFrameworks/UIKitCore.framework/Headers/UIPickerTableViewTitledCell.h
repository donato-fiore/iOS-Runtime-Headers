// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPICKERTABLEVIEWTITLEDCELL_H
#define UIPICKERTABLEVIEWTITLEDCELL_H

@class NSAttributedString, NSString;


#import "UIPickerTableViewCell.h"
#import "UIColor.h"
#import "UILabel.h"

@interface UIPickerTableViewTitledCell : UIPickerTableViewCell {
    UIColor *_textColor;
}


@property (readonly, nonatomic) BOOL _isAttributed; // ivar: _isAttributed
@property (readonly, nonatomic) UILabel *_titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) NSAttributedString *attributedTitle;
@property (retain, nonatomic) NSString *title;


-(BOOL)_canBeReusedInPickerView;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 textColor:(id)arg2 forceTextAlignmentCentered:(BOOL)arg3 ;
-(void)_setIsCenterCell:(BOOL)arg0 shouldModifyAlphaOfView:(BOOL)arg1 ;
-(void)prepareForReuse;


@end


#endif