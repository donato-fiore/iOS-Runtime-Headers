// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICATTACHMENTBRICKTEXTVIEWV2_H
#define ICATTACHMENTBRICKTEXTVIEWV2_H

@class UIView, NSString, NSLayoutConstraint, UILayoutGuide;


#import "ICAttachmentBrickLabelV2.h"

@interface ICAttachmentBrickTextViewV2 : UIView

@property (nonatomic) BOOL detail1Dark; // ivar: _detail1Dark
@property (copy, nonatomic) NSString *detail1String; // ivar: _detail1String
@property (retain, nonatomic) ICAttachmentBrickLabelV2 *detail1View; // ivar: _detail1View
@property (copy, nonatomic) NSString *detail2String; // ivar: _detail2String
@property (retain, nonatomic) ICAttachmentBrickLabelV2 *detail2View; // ivar: _detail2View
@property (nonatomic) BOOL disableVibrancy; // ivar: _disableVibrancy
@property (nonatomic) BOOL selected; // ivar: _selected
@property (retain, nonatomic) NSLayoutConstraint *textBoxBottomConstraint; // ivar: _textBoxBottomConstraint
@property (retain, nonatomic) UILayoutGuide *textBoxLayoutGuide; // ivar: _textBoxLayoutGuide
@property (retain, nonatomic) NSLayoutConstraint *textBoxLeadingConstraint; // ivar: _textBoxLeadingConstraint
@property (retain, nonatomic) NSLayoutConstraint *textBoxTopConstraint; // ivar: _textBoxTopConstraint
@property (retain, nonatomic) NSLayoutConstraint *textBoxTrailingConstraint; // ivar: _textBoxTrailingConstraint
@property (nonatomic) BOOL titleLight; // ivar: _titleLight
@property (copy, nonatomic) NSString *titleString; // ivar: _titleString
@property (retain, nonatomic) ICAttachmentBrickLabelV2 *titleView; // ivar: _titleView
@property (nonatomic) BOOL vibrant; // ivar: _vibrant


-(BOOL)allowsVibrancy;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)contentSizeCategoryDidChange;
-(void)didMoveToWindow;
-(void)updateMargins;
-(void)updateTextColors;
-(void)updateTextFonts;
-(void)updateTextLayout;


@end


#endif