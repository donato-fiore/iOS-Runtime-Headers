// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PRXCARDCONTENTVIEW_H
#define PRXCARDCONTENTVIEW_H

@class UIView, NSArray, NSLayoutConstraint, UILayoutGuide, UIView<PRXTextContainer>;
@protocol PRXCardContentViewDelegate;


#import "PRXButton.h"
#import "PRXLabel.h"
#import "PRXTextView.h"

@interface PRXCardContentView : UIView {
    NSArray *_titleViewConstraints;
    NSArray *_subtitleLabelConstraints;
    NSArray *_actionButtonConstraints;
    NSArray *_mainContentConstraints;
    NSLayoutConstraint *_titleViewHeightConstraint;
}


@property (copy, nonatomic) NSArray *actionButtons;
@property (retain, nonatomic) UIView *activityIndicator; // ivar: _activityIndicator
@property (readonly, nonatomic) NSInteger cardStyle; // ivar: _cardStyle
@property (weak, nonatomic) NSObject<PRXCardContentViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) PRXButton *dismissButton;
@property (readonly, nonatomic) UILayoutGuide *mainContentGuide; // ivar: _mainContentGuide
@property (retain, nonatomic) PRXLabel *subtitleLabel; // ivar: _subtitleLabel
@property (readonly, nonatomic) PRXLabel *titleLabel;
@property (readonly, nonatomic) PRXTextView *titleTextView;
@property (retain, nonatomic) UIView<PRXTextContainer> *titleView; // ivar: _titleView


-(id)auxiliaryViews;
-(id)init;
-(id)initWithCardStyle:(NSInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 cardStyle:(NSInteger)arg1 ;
-(void)_invalidateMainContentConstraints;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;
-(void)updateTitleTextViewExclusionPathsForCardWidth:(CGFloat)arg0 ;


@end


#endif