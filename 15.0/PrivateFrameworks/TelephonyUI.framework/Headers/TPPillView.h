// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPPILLVIEW_H
#define TPPILLVIEW_H

@class NSString, UITapGestureRecognizer, UIStackView, NSLayoutConstraint, UILabel;
@protocol TPPillViewDelegate;


#import "TPControl.h"
#import "TPBadgeView.h"

@interface TPPillView : TPControl

@property (copy, nonatomic) NSString *badgeText;
@property (readonly, nonatomic) TPBadgeView *badgeView; // ivar: _badgeView
@property (weak, nonatomic) NSObject<TPPillViewDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) UITapGestureRecognizer *gestureRecognizer; // ivar: _gestureRecognizer
@property (readonly, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (retain, nonatomic) NSLayoutConstraint *stackViewBottomAnchorLayoutConstraint; // ivar: _stackViewBottomAnchorLayoutConstraint
@property (retain, nonatomic) NSLayoutConstraint *stackViewLeftAnchorLayoutConstraint; // ivar: _stackViewLeftAnchorLayoutConstraint
@property (retain, nonatomic) NSLayoutConstraint *stackViewRightAnchorLayoutConstraint; // ivar: _stackViewRightAnchorLayoutConstraint
@property (retain, nonatomic) NSLayoutConstraint *stackViewTopAnchorLayoutConstraint; // ivar: _stackViewTopAnchorLayoutConstraint
@property (readonly, nonatomic) UILabel *textLabel; // ivar: _textLabel
@property (nonatomic) NSUInteger theme; // ivar: _theme
@property (copy, nonatomic) NSString *title;


-(NSUInteger)_controlEventsForActionTriggered;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)initWithTitle:(id)arg0 frame:(struct CGRect )arg1 ;
-(id)initWithTitle:(id)arg0 frame:(struct CGRect )arg1 theme:(NSUInteger)arg2 ;
-(void)commonInit;
-(void)handleTap:(id)arg0 ;
-(void)loadConstraints;
-(void)unloadConstraints;
-(void)updateFonts;
-(void)updateTheme;


@end


#endif