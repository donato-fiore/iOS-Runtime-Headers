// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPALETTETOOLPICKERCONTAINERVIEW_H
#define PKPALETTETOOLPICKERCONTAINERVIEW_H

@class UIView, NSString, NSLayoutConstraint;
@protocol PKPaletteEdgeLocating, PKPaletteViewSizeScaling;


#import "PKPaletteToolPickerView.h"

@interface PKPaletteToolPickerContainerView : UIView <PKPaletteEdgeLocating, PKPaletteViewSizeScaling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger edgeLocation; // ivar: _edgeLocation
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat scalingFactor; // ivar: _scalingFactor
@property (readonly) Class superclass;
@property (readonly, nonatomic) PKPaletteToolPickerView *toolPickerView; // ivar: _toolPickerView
@property (retain, nonatomic) NSLayoutConstraint *toolPickerViewBottomConstraint; // ivar: _toolPickerViewBottomConstraint
@property (retain, nonatomic) NSLayoutConstraint *toolPickerViewLeftConstraint; // ivar: _toolPickerViewLeftConstraint
@property (retain, nonatomic) NSLayoutConstraint *toolPickerViewRightConstraint; // ivar: _toolPickerViewRightConstraint
@property (retain, nonatomic) NSLayoutConstraint *toolPickerViewTopConstraint; // ivar: _toolPickerViewTopConstraint


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)init;
-(struct CGSize )intrinsicContentSize;
-(void)_updateUI;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;


@end


#endif