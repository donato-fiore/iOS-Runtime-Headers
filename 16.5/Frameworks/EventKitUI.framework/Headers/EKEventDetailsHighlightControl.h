// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKEVENTDETAILSHIGHLIGHTCONTROL_H
#define EKEVENTDETAILSHIGHLIGHTCONTROL_H

@class UIControl, NSArray, NSString, UIColor, UILabel, NSLayoutConstraint, UIImageView;



@interface EKEventDetailsHighlightControl : UIControl {
    NSArray *_titleAndSubtitleVisibleContraints;
    NSArray *_justTitleVisibleContraints;
    NSArray *_justSubtitleVisibleContraints;
    NSArray *_justTitleAndActionVisibleContraints;
    NSString *_actionText;
    NSString *_subtitleText;
    UIColor *_actionColor;
}


@property (readonly, nonatomic) UILabel *actionLabel; // ivar: _actionLabel
@property (readonly, retain, nonatomic) NSLayoutConstraint *bottomMarginConstraint; // ivar: _bottomMarginConstraint
@property (readonly, nonatomic) UIImageView *iconStack; // ivar: _iconStack
@property (readonly, retain, nonatomic) NSLayoutConstraint *interLabelPaddingConstraint; // ivar: _interLabelPaddingConstraint
@property (readonly, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (readonly, retain, nonatomic) NSLayoutConstraint *topMarginConstraint; // ivar: _topMarginConstraint


+(BOOL)requiresConstraintBasedLayout;
+(CGFloat)bottomMarginConstant;
+(CGFloat)interLabelBaselineDeltaConstant;
+(CGFloat)topMarginConstant;
+(id)subtitleColor;
+(id)subtitleFont;
+(id)titleFont;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateSubtitleAndActionText;
-(void)_updateTitleAndSubtitleConstraints;
-(void)contentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)dealloc;
-(void)setActionText:(id)arg0 color:(id)arg1 ;
-(void)setIconImage:(id)arg0 ;
-(void)setSubtitleAttributedText:(id)arg0 ;
-(void)setSubtitleText:(id)arg0 ;
-(void)setTitleText:(id)arg0 ;


@end


#endif