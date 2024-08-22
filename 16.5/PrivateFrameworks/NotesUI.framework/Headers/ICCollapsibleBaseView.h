// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICCOLLAPSIBLEBASEVIEW_H
#define ICCOLLAPSIBLEBASEVIEW_H

@class UIView, NSLayoutConstraint;



@interface ICCollapsibleBaseView : UIView

@property (nonatomic, getter=isCollapsed) BOOL collapsed; // ivar: _collapsed
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (retain, nonatomic) NSLayoutConstraint *leadingConstraint; // ivar: _leadingConstraint
@property (nonatomic) CGFloat leadingSpace; // ivar: _leadingSpace
@property (nonatomic) BOOL setupComplete; // ivar: _setupComplete
@property (retain, nonatomic) NSLayoutConstraint *trailingConstraint; // ivar: _trailingConstraint
@property (nonatomic) CGFloat trailingSpace; // ivar: _trailingSpace
@property (retain, nonatomic) NSLayoutConstraint *zeroWidthConstraint; // ivar: _zeroWidthConstraint


-(BOOL)wantsLayer;
-(void)awakeFromNib;
-(void)ic_setNeedsUpdateConstraints;
-(void)performSetUpWithContentView:(id)arg0 ;
-(void)performSetup;
-(void)setUpIfNeeded;


@end


#endif