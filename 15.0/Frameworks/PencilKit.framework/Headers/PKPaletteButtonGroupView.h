// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPALETTEBUTTONGROUPVIEW_H
#define PKPALETTEBUTTONGROUPVIEW_H

@class UIView, UIStackView, NSArray, NSString;
@protocol PKPaletteViewSizeScaling;



@interface PKPaletteButtonGroupView : UIView <PKPaletteViewSizeScaling>



@property (nonatomic) NSInteger axis;
@property (retain, nonatomic) UIStackView *buttonStackView; // ivar: _buttonStackView
@property (copy, nonatomic) NSArray *buttons; // ivar: _buttons
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat scalingFactor; // ivar: _scalingFactor
@property (readonly) Class superclass;
@property (nonatomic) BOOL useEqualInterItemSpacing; // ivar: _useEqualInterItemSpacing


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateContentScalingFactor;
-(void)_updateUI;
-(void)addButton:(id)arg0 ;
-(void)addButtonsFromArray:(id)arg0 ;
-(void)removeAllButtons;


@end


#endif