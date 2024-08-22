// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKPLACESECTIONHEADERVIEW_H
#define MKPLACESECTIONHEADERVIEW_H

@class NSLayoutConstraint, NSArray, UIImage, NSString, UIFont;


#import "MKPlaceSectionItemView.h"
#import "MKVibrantLabel.h"
#import "_MKRightImageButton.h"

@interface MKPlaceSectionHeaderView : MKPlaceSectionItemView {
    NSLayoutConstraint *_baselineToTopConstraint;
    NSLayoutConstraint *_baselineToBottomConstraint;
    NSLayoutConstraint *_baselineToBaselineConstraint;
    NSLayoutConstraint *_iconHeightConstraint;
    NSLayoutConstraint *_iconWidthConstraint;
    BOOL _contentChanged;
    CGFloat _width;
}


@property (nonatomic) SEL action; // ivar: _action
@property (retain, nonatomic) NSArray *constraints; // ivar: _constraints
@property (retain, nonatomic) UIImage *icon;
@property (nonatomic) CGSize iconDisplaySize; // ivar: _iconDisplaySize
@property (retain, nonatomic) NSString *providerName; // ivar: _providerName
@property (retain, nonatomic) MKVibrantLabel *sectionHeaderLabel; // ivar: _sectionHeaderLabel
@property (retain, nonatomic) _MKRightImageButton *seeMoreButton; // ivar: _seeMoreButton
@property (nonatomic) BOOL seeMoreButtonAlwaysOnNewLine; // ivar: _seeMoreButtonAlwaysOnNewLine
@property (retain, nonatomic) NSArray *seeMoreButtonConstraints; // ivar: _seeMoreButtonConstraints
@property (retain, nonatomic) UIFont *seeMoreButtonFont; // ivar: _seeMoreButtonFont
@property (retain, nonatomic) NSString *seeMoreButtonText; // ivar: _seeMoreButtonText
@property (nonatomic) BOOL showSeeMoreButton; // ivar: _showSeeMoreButton
@property (weak, nonatomic) id *target; // ivar: _target
@property (retain, nonatomic) NSString *title;


-(BOOL)shouldStack;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateConstraints;
-(void)contentSizeDidChange;
-(void)createConstraints;
-(void)updateConstraints;
-(void)updateContent;


@end


#endif