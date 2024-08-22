// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIKBUNDOCONTROL_H
#define UIKBUNDOCONTROL_H

@class NSLayoutConstraint;


#import "UIControl.h"
#import "UIImageView.h"
#import "UILabel.h"
#import "_UISlotView.h"
#import "UIView.h"
#import "UIKBUndoStyling.h"

@interface UIKBUndoControl : UIControl

@property (retain, nonatomic) NSLayoutConstraint *coverConstraintBottomAnchor; // ivar: _coverConstraintBottomAnchor
@property (retain, nonatomic) NSLayoutConstraint *coverConstraintLeftAnchor; // ivar: _coverConstraintLeftAnchor
@property (retain, nonatomic) NSLayoutConstraint *coverConstraintRightAnchor; // ivar: _coverConstraintRightAnchor
@property (retain, nonatomic) NSLayoutConstraint *coverConstraintTopAnchor; // ivar: _coverConstraintTopAnchor
@property (retain, nonatomic) UIImageView *icon; // ivar: _icon
@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (weak, nonatomic) _UISlotView *securePasteButtonSlotView; // ivar: _securePasteButtonSlotView
@property (retain, nonatomic) UIView *springCoverView; // ivar: _springCoverView
@property (retain, nonatomic) UIKBUndoStyling *style; // ivar: _style
@property (nonatomic) NSInteger type; // ivar: _type


+(id)controlLableTextByType:(NSInteger)arg0 style:(id)arg1 available:(BOOL)arg2 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)controlImageByType:(NSInteger)arg0 ;
-(id)controlLabelImageNameByType:(NSInteger)arg0 isRTL:(BOOL)arg1 ;
-(id)initWithType:(NSInteger)arg0 andStyling:(id)arg1 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(unsigned int)_secureName;
-(void)layoutControlForType:(NSInteger)arg0 andStyling:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateCoverWithTavelProcess:(CGFloat)arg0 isRTL:(BOOL)arg1 ;
-(void)updateUndoControlStyle;


@end


#endif