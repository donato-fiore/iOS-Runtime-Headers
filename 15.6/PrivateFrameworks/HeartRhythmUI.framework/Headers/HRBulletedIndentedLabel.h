// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HRBULLETEDINDENTEDLABEL_H
#define HRBULLETEDINDENTEDLABEL_H

@class UIView, UILabel, NSString;



@interface HRBulletedIndentedLabel : UIView

@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (copy, nonatomic) NSString *text; // ivar: _text


+(id)_bodyFont;
+(id)_bodyFontTextStyle;
-(id)firstBaselineAnchor;
-(id)initWithText:(id)arg0 ;
-(id)lastBaselineAnchor;
-(void)_setUpConstraints;
-(void)_setUpUI;
-(void)_updateLeadingDetailAttributedTextSize;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif