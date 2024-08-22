// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPALETTECONTAINERVIEW_H
#define PKPALETTECONTAINERVIEW_H

@class UIView, NSLayoutConstraint, NSString;
@protocol PKPaletteEdgeLocating, PKPaletteViewSizeScaling;


#import "PKAccessoryView.h"

@interface PKPaletteContainerView : UIView <PKPaletteEdgeLocating, PKPaletteViewSizeScaling>



@property (retain, nonatomic) PKAccessoryView *accessoryView; // ivar: _accessoryView
@property (retain, nonatomic) NSLayoutConstraint *accessoryViewBottomConstraint; // ivar: _accessoryViewBottomConstraint
@property (retain, nonatomic) NSLayoutConstraint *accessoryViewHeightConstraint; // ivar: _accessoryViewHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *accessoryViewLeftConstraint; // ivar: _accessoryViewLeftConstraint
@property (retain, nonatomic) NSLayoutConstraint *accessoryViewRightConstraint; // ivar: _accessoryViewRightConstraint
@property (retain, nonatomic) NSLayoutConstraint *accessoryViewTopConstraint; // ivar: _accessoryViewTopConstraint
@property (retain, nonatomic) NSLayoutConstraint *accessoryViewWidthConstraint; // ivar: _accessoryViewWidthConstraint
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint; // ivar: _contentViewBottomConstraint
@property (retain, nonatomic) NSLayoutConstraint *contentViewLeftConstraint; // ivar: _contentViewLeftConstraint
@property (retain, nonatomic) NSLayoutConstraint *contentViewRightConstraint; // ivar: _contentViewRightConstraint
@property (retain, nonatomic) NSLayoutConstraint *contentViewTopConstraint; // ivar: _contentViewTopConstraint
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger edgeLocation; // ivar: _edgeLocation
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat scalingFactor; // ivar: _scalingFactor
@property (readonly) Class superclass;


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_installAccessoryView;
-(void)_installContentView;
-(void)_updateUI;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;


@end


#endif