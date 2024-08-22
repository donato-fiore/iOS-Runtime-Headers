// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGSUGGESTIONTABLEVIEWCELL_H
#define SGSUGGESTIONTABLEVIEWCELL_H

@class UITableViewCell, UIImageView, UILabel, UIButton, NSLayoutConstraint;
@protocol NSObject, SGSuggestion;


#import "SGSuggestionAction.h"
#import "SGSuggestionTableViewController.h"

@interface SGSuggestionTableViewCell : UITableViewCell {
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_dismissButton;
    UIButton *_primaryButton;
    SGSuggestionAction *_primaryAction;
    SGSuggestionAction *_dismissAction;
    NSLayoutConstraint *_topMarginConstraint;
    NSLayoutConstraint *_interLabelBaselineDeltaConstraint;
    NSLayoutConstraint *_interTitleAndButtonBaselineConstraint;
    NSLayoutConstraint *_interSubtitleAndButtonBaselineConstraint;
    NSLayoutConstraint *_bottomMarginConstraint;
    id<NSObject> *_observerToken;
    NSInteger _currentStyle;
}


@property (weak, nonatomic) SGSuggestionTableViewController *controller; // ivar: _controller
@property (retain, nonatomic) NSObject<SGSuggestion> *suggestion; // ivar: _suggestion


+(CGFloat)bottomMarginConstant;
+(CGFloat)interLabelAndButtonBaselineDeltaConstant;
+(CGFloat)interLabelBaselineDeltaConstant;
+(CGFloat)topMarginConstant;
+(id)buttonTitleFont;
+(id)defaultReuseIdentifier;
+(id)descriptionFont;
+(id)titleFont;
-(id)_backgroundColor;
-(id)_setButton:(id)arg0 action:(id)arg1 ;
-(id)_subtitleColor;
-(id)_titleColor;
-(id)init;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_activateConstraint:(id)arg0 ;
-(void)_dismissButtonTapped:(id)arg0 ;
-(void)_primaryButtonTapped:(id)arg0 ;
-(void)_setLabelAndButtonFonts;
-(void)_updateCurrentAppearance;
-(void)dealloc;
-(void)updateConstraints;


@end


#endif